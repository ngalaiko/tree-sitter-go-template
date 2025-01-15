const PREC = {
        primary: 1,
        else_if: 1,
        else: 2,
    },
    unicodeLetter = /\p{L}/,
    unicodeDigit = /[0-9]/,
    letter = choice(unicodeLetter, '_'),
    hexDigit = /[0-9a-fA-F]/,
    octalDigit = /[0-7]/,
    decimalDigit = /[0-9]/,
    binaryDigit = /[01]/,
    hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
    octalDigits = seq(octalDigit, repeat(seq(optional('_'), octalDigit))),
    decimalDigits = seq(decimalDigit, repeat(seq(optional('_'), decimalDigit))),
    binaryDigits = seq(binaryDigit, repeat(seq(optional('_'), binaryDigit))),
    hexLiteral = seq('0', choice('x', 'X'), optional('_'), hexDigits),
    octalLiteral = seq(
        '0',
        optional(choice('o', 'O')),
        optional('_'),
        octalDigits
    ),
    decimalLiteral = choice(
        '0',
        seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))
    ),
    binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),
    intLiteral = choice(
        binaryLiteral,
        decimalLiteral,
        octalLiteral,
        hexLiteral
    ),
    decimalExponent = seq(
        choice('e', 'E'),
        optional(choice('+', '-')),
        decimalDigits
    ),
    decimalFloatLiteral = choice(
        seq(
            decimalDigits,
            '.',
            optional(decimalDigits),
            optional(decimalExponent)
        ),
        seq(decimalDigits, decimalExponent),
        seq('.', decimalDigits, optional(decimalExponent))
    ),
    hexExponent = seq(
        choice('p', 'P'),
        optional(choice('+', '-')),
        decimalDigits
    ),
    hexMantissa = choice(
        seq(optional('_'), hexDigits, '.', optional(hexDigits)),
        seq(optional('_'), hexDigits),
        seq('.', hexDigits)
    ),
    hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),
    floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral),
    imaginaryLiteral = seq(choice(decimalDigits, intLiteral, floatLiteral), 'i')

module.exports = function make_grammar(dialect) {
    return grammar({
        name: dialect,
        conflicts: ($) => [
            // conflict between a template in an else if clause and the beginning of the
            // else clause in not solveable with LR(1)
            [$._else_clause],
            [$._else_if_clause],
        ],
        rules: {
            template: ($) => repeat($._block),

            _block: ($) => choice($.yaml_no_injection_text, $.text, $._action),

            // This rule is a workaround to fix https://github.com/ngalaiko/tree-sitter-go-template/issues/23
            // by creating a new node type that is not used for injections of the yaml language.
            // The better solution would be to fix the issue in the yaml grammar.
            // If https://github.com/tree-sitter-grammars/tree-sitter-yaml/issues/12 is resolved, this rule can be removed.
            yaml_no_injection_text: (_) => '-',

            text: (_) =>
                choice(
                    // forbid '{{', the rest is valid
                    /[^{]+/,
                    /\{/
                ),

            _action: ($) =>
                prec(
                    2,
                    choice(
                        $._comment_action,
                        $._pipeline_action,
                        $.if_action,
                        $.range_action,
                        $.template_action,
                        $.define_action,
                        $.block_action,
                        $.with_action
                    )
                ),

            _comment_action: ($) =>
                seq(
                    choice(
                        token('{{'),
                        seq(token('{{-'), token.immediate(' '))
                    ),
                    $.comment,
                    choice(
                        token.immediate('}}'),
                        seq(token.immediate(' '), token.immediate('-}}'))
                    )
                ),

            _pipeline_action: ($) =>
                seq($._left_delimiter, $._pipeline, $._right_delimiter),

            if_action: ($) =>
                seq(
                    $._left_delimiter,
                    'if',
                    field('condition', $._pipeline),
                    $._right_delimiter,

                    field('consequence', repeat($._block)),

                    repeat($._else_if_clause),

                    optional($._else_clause),
                    prec.right(0, $._if_actions_end)
                ),

            _else_if_clause: ($) =>
                prec.dynamic(
                    PREC.else_if,
                    seq(
                        $._left_delimiter,
                        'else if',
                        field('condition', $._pipeline),
                        $._right_delimiter,
                        field('option', repeat($._block))
                    )
                ),

            _else_clause: ($) =>
                prec.dynamic(
                    PREC.else,
                    seq(
                        $._left_delimiter,
                        'else',
                        $._right_delimiter,
                        field('alternative', repeat($._block))
                    )
                ),

            _if_actions_end: ($) =>
                seq($._left_delimiter, 'end', $._right_delimiter),

            range_variable_definition: ($) =>
                seq(
                    field('index', $.variable),
                    ',',
                    field('element', $.variable),
                    token(':='),
                    field('range', $._pipeline)
                ),

            range_action: ($) =>
                seq(
                    $._left_delimiter,
                    'range',
                    choice(
                        $.range_variable_definition,
                        field('range', $._pipeline)
                    ),
                    $._right_delimiter,

                    field('body', repeat($._block)),

                    optional(
                        seq(
                            $._left_delimiter,
                            'else',
                            $._right_delimiter,
                            field('alternative', repeat($._block))
                        )
                    ),

                    $._left_delimiter,
                    'end',
                    $._right_delimiter
                ),

            template_action: ($) =>
                seq(
                    $._left_delimiter,
                    'template',
                    field('name', $._string_literal),
                    optional(field('argument', $._pipeline)),
                    $._right_delimiter
                ),

            define_action: ($) =>
                seq(
                    $._left_delimiter,
                    'define',
                    field('name', $._string_literal),
                    $._right_delimiter,

                    field('body', repeat($._block)),

                    $._left_delimiter,
                    'end',
                    $._right_delimiter
                ),

            block_action: ($) =>
                seq(
                    $._left_delimiter,
                    'block',
                    field('name', $._string_literal),
                    field('argument', $._pipeline),
                    $._right_delimiter,

                    field('body', repeat($._block)),

                    $._left_delimiter,
                    'end',
                    $._right_delimiter
                ),

            with_action: ($) =>
                seq(
                    $._left_delimiter,
                    'with',
                    field('condition', $._pipeline),
                    $._right_delimiter,

                    field('consequence', repeat($._block)),

                    optional(
                        seq(
                            $._left_delimiter,
                            'else',
                            $._right_delimiter,
                            field('alternative', repeat($._block))
                        )
                    ),

                    $._left_delimiter,
                    'end',
                    $._right_delimiter
                ),

            _pipeline: ($) =>
                choice(
                    $._expression,
                    $.function_call,
                    $.method_call,
                    $.chained_pipeline,
                    $.parenthesized_pipeline,
                    $.variable_definition,
                    $.assignment
                ),

            variable_definition: ($) =>
                seq(
                    field('variable', $.variable),
                    ':=',
                    field('value', $._pipeline)
                ),

            assignment: ($) =>
                seq(
                    field('variable', $.variable),
                    '=',
                    field('value', $._pipeline)
                ),

            chained_pipeline: ($) =>
                prec.left(PREC.primary, seq($._pipeline, '|', $._pipeline)),

            parenthesized_pipeline: ($) => seq('(', $._pipeline, ')'),

            method_call: ($) =>
                seq(
                    field('method', choice($.field, $.selector_expression)),
                    field('arguments', $.argument_list)
                ),

            function_call: ($) =>
                prec.right(
                    PREC.primary,
                    seq(
                        field('function', $.identifier),
                        optional(field('arguments', $.argument_list))
                    )
                ),

            argument_list: ($) =>
                prec.right(
                    seq(
                        $._pipeline,
                        repeat(seq(' ', $._pipeline)),
                        optional(' ')
                    )
                ),

            pipeline_stub: (_) => token('pipeline'),

            _expression: ($) =>
                prec(
                    PREC.primary,
                    choice(
                        $._literal,
                        $.nil,
                        $.dot,
                        $.field,
                        $.variable,
                        $.selector_expression
                    )
                ),

            selector_expression: ($) =>
                prec(
                    PREC.primary,
                    seq(
                        field(
                            'operand',
                            choice(
                                $.parenthesized_pipeline,
                                $.field,
                                $.variable,
                                $.selector_expression
                            )
                        ),
                        token.immediate('.'),
                        field('field', $._field_identifier)
                    )
                ),

            _field_identifier: ($) => alias($.identifier, $.field_identifier),

            field: ($) => seq('.', field('name', $.identifier)),

            variable: ($) =>
                seq(
                    '$',
                    optional(
                        field(
                            'name',
                            alias(
                                token(repeat1(choice(letter, unicodeDigit))),
                                $.identifier
                            )
                        )
                    )
                ),

            identifier: (_) =>
                token(seq(letter, repeat(choice(letter, unicodeDigit)))),

            _literal: ($) =>
                choice(
                    $._boolean_literal,
                    $._string_literal,
                    $.rune_literal,
                    $.int_literal,
                    $.float_literal,
                    $.imaginary_literal
                ),

            int_literal: (_) => token(intLiteral),

            float_literal: (_) => token(floatLiteral),

            imaginary_literal: (_) => token(imaginaryLiteral),

            rune_literal: (_) =>
                token(
                    seq(
                        "'",
                        choice(
                            /[^'\\]/,
                            seq(
                                '\\',
                                choice(
                                    seq('x', hexDigit, hexDigit),
                                    seq(octalDigit, octalDigit, octalDigit),
                                    seq(
                                        'u',
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit
                                    ),
                                    seq(
                                        'U',
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit,
                                        hexDigit
                                    ),
                                    seq(
                                        choice(
                                            'a',
                                            'b',
                                            'f',
                                            'n',
                                            'r',
                                            't',
                                            'v',
                                            '\\',
                                            "'",
                                            '"'
                                        )
                                    )
                                )
                            )
                        ),
                        "'"
                    )
                ),

            _boolean_literal: ($) => choice($.true, $.false),

            true: (_) => 'true',
            false: (_) => 'false',

            nil: (_) => 'nil',

            dot: (_) => prec(1, '.'),

            _string_literal: ($) =>
                choice($.raw_string_literal, $.interpreted_string_literal),

            raw_string_literal: (_) => token(seq('`', repeat(/[^`]/), '`')),

            interpreted_string_literal: ($) =>
                seq(
                    '"',
                    repeat(
                        choice(
                            token.immediate(prec(1, /[^"\n\\]+/)),
                            $.escape_sequence
                        )
                    ),
                    token.immediate('"')
                ),

            escape_sequence: (_) =>
                token.immediate(
                    seq(
                        '\\',
                        choice(
                            /[^xuU]/,
                            /\d{2,3}/,
                            /x[0-9a-fA-F]{2,}/,
                            /u[0-9a-fA-F]{4}/,
                            /U[0-9a-fA-F]{8}/
                        )
                    )
                ),

            // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
            comment: (_) =>
                token.immediate(seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/, '/')),

            _left_delimiter: (_) => choice(token('{{'), token('{{-')),
            _right_delimiter: (_) => choice(token('}}'), token('-}}')),
        },
    })
}
