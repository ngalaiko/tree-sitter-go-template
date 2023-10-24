const
    PREC = {
        primary: 1,
    },

    unicodeLetter = /\p{L}/,
    unicodeDigit = /[0-9]/,
    unicodeChar = /./,
    unicodeValue = unicodeChar,
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
    octalLiteral = seq('0', optional(choice('o', 'O')), optional('_'), octalDigits),
    decimalLiteral = choice('0', seq(/[1-9]/, optional(seq(optional('_'), decimalDigits)))),
    binaryLiteral = seq('0', choice('b', 'B'), optional('_'), binaryDigits),

    intLiteral = choice(binaryLiteral, decimalLiteral, octalLiteral, hexLiteral),

    decimalExponent = seq(choice('e', 'E'), optional(choice('+', '-')), decimalDigits),
    decimalFloatLiteral = choice(
        seq(decimalDigits, '.', optional(decimalDigits), optional(decimalExponent)),
        seq(decimalDigits, decimalExponent),
        seq('.', decimalDigits, optional(decimalExponent)),
    ),

    hexExponent = seq(choice('p', 'P'), optional(choice('+', '-')), decimalDigits),
    hexMantissa = choice(
        seq(optional('_'), hexDigits, '.', optional(hexDigits)),
        seq(optional('_'), hexDigits),
        seq('.', hexDigits),
    ),
    hexFloatLiteral = seq('0', choice('x', 'X'), hexMantissa, hexExponent),

    floatLiteral = choice(decimalFloatLiteral, hexFloatLiteral),

    imaginaryLiteral = seq(choice(decimalDigits, intLiteral, floatLiteral), 'i')

module.exports = grammar({
    name: 'gotmpl',
    rules: {
        template: $ => repeat($._block),

        _block: $ => choice(
            $.text,
            $._action,
        ),

        text: $ => prec.left(choice(
            // forbid '{{', the rest is valid
            $._text_no_break,
            /:/,
            /\{/,
        )),

        _text_no_break: $ => prec.right(repeat1(/[^:{]/)),

        _action: $ => prec(2, choice(
            $._comment_action,
            $._pipeline_action,
            $.if_action,
            $.range_action,
            $.template_action,
            $.define_action,
            $.block_action,
            $.with_action,
        )),

        _comment_action: $ => seq(
            $._left_delimiter,
            $.comment,
            $._right_delimiter,
        ),

        _pipeline_action: $ => seq(
            $._left_delimiter,
            $._pipeline,
            $._right_delimiter,
        ),

        if_action: $ => seq(
            $._left_delimiter,
            'if',
            field('condition', $._pipeline),
            $._right_delimiter,

            field('consequence', repeat($._block)),

            repeat(prec.left(seq(
                $._left_delimiter,
                'else if',
                field('condition', $._pipeline),
                $._right_delimiter,
                field('option', repeat($._block)),
            ))),

            optional(seq(
                $._left_delimiter,
                'else',
                $._right_delimiter,
                field('alternative', repeat($._block)),
            )),

            $._left_delimiter,
            'end',
            $._right_delimiter,
        ),

        range_variable_definition: $ => seq(
            field('index', $.variable),
            ',',
            field('element', $.variable),
            token(":="),
            field('range', $._pipeline),
        ),

        range_action: $ => seq(
            $._left_delimiter,
            'range',
            choice(
                $.range_variable_definition,
                field('range', $._pipeline),
            ),
            $._right_delimiter,

            field('body', repeat($._block)),

            optional(seq(
                $._left_delimiter,
                'else',
                $._right_delimiter,
                field('alternative', repeat($._block)),
            )),

            $._left_delimiter,
            'end',
            $._right_delimiter,
        ),

        template_action: $ => seq(
            $._left_delimiter,
            'template',
            field('name', $._string_literal),
            optional(field('argument', $._pipeline)),
            $._right_delimiter,
        ),

        define_action: $ => seq(
            $._left_delimiter,
            'define',
            field('name', $._string_literal),
            $._right_delimiter,

            field('body', repeat($._block)),

            $._left_delimiter,
            'end',
            $._right_delimiter,
        ),

        block_action: $ => seq(
            $._left_delimiter,
            'block',
            field('name', $._string_literal),
            optional(field('argument', $._pipeline)),
            $._right_delimiter,

            field('body', repeat($._block)),

            $._left_delimiter,
            'end',
            $._right_delimiter,
        ),

        with_action: $ => seq(
            $._left_delimiter,
            'with',
            field('condition', $._pipeline),
            $._right_delimiter,

            field('consequence', repeat($._block)),

            optional(seq(
                $._left_delimiter,
                'else',
                $._right_delimiter,
                field('alternative', repeat($._block)),
            )),

            $._left_delimiter,
            'end',
            $._right_delimiter,
        ),

        _pipeline: $ => choice(
            $._expression,
            $.function_call,
            $.method_call,
            $.chained_pipeline,
            $.parenthesized_pipeline,
            $.variable_definition,
            $.assignment,
        ),

        variable_definition: $ => seq(
            field('variable', $.variable),
            ":=",
            field('value', $._pipeline),
        ),

        assignment: $ => seq(
            field('variable', $.variable),
            "=",
            field('value', $._pipeline),
        ),

        chained_pipeline: $ => prec.left(PREC.primary, seq(
            $._pipeline,
            '|',
            $._pipeline,
        )),

        parenthesized_pipeline: $ => seq(
            '(',
            $._pipeline,
            ')',
        ),

        method_call: $ => seq(
            field('method', choice(
                $.field,
                $.selector_expression,
            )),
            field('arguments', $.argument_list),
        ),

        function_call: $ => prec.right(PREC.primary, seq(
            field('function', $.identifier),
            optional(field('arguments', $.argument_list))),
        ),

        argument_list: $ => prec.right(seq(
            $._pipeline,
            repeat(seq(' ', $._pipeline)),
            optional(' '),
        )),

        pipeline_stub: $ => token('pipeline'),

        _expression: $ => prec(PREC.primary, choice(
            $._literal,
            $.nil,
            $.dot,
            $.field,
            $.variable,
            $.selector_expression,
        )),

        selector_expression: $ => prec(PREC.primary, seq(
            field('operand', $._pipeline),
            '.',
            field('field', $._field_identifier),
        )),

        _field_identifier: $ => alias($.identifier, $.field_identifier),

        field: $ => seq(
            '.',
            field('name', $.identifier),
        ),

        variable: $ => seq(
            '$',
            optional(field('name', $.identifier)),
        ),

        identifier: $ => token(seq(
            letter,
            repeat(choice(letter, unicodeDigit))
        )),

        _literal: $ => choice(
            $._boolean_literal,
            $._string_literal,
            $.rune_literal,
            $.int_literal,
            $.float_literal,
            $.imaginary_literal,
        ),

        int_literal: $ => token(intLiteral),

        float_literal: $ => token(floatLiteral),

        imaginary_literal: $ => token(imaginaryLiteral),

        rune_literal: $ => token(seq(
            "'",
            choice(
                /[^'\\]/,
                seq(
                    '\\',
                    choice(
                        seq('x', hexDigit, hexDigit),
                        seq(octalDigit, octalDigit, octalDigit),
                        seq('u', hexDigit, hexDigit, hexDigit, hexDigit),
                        seq('U', hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit, hexDigit),
                        seq(choice('a', 'b', 'f', 'n', 'r', 't', 'v', '\\', "'", '"'))
                    )
                )
            ),
            "'"
        )),

        _boolean_literal: $ => choice(
            $.true,
            $.false,
        ),

        true: $ => 'true',
        false: $ => 'false',

        nil: $ => 'nil',

        dot: $ => prec(1, '.'),

        _string_literal: $ => choice(
            $.raw_string_literal,
            $.interpreted_string_literal
        ),

        raw_string_literal: $ => token(seq(
            '`',
            repeat(/[^`]/),
            '`'
        )),

        interpreted_string_literal: $ => seq(
            '"',
            repeat(choice(
                token.immediate(prec(1, /[^"\n\\]+/)),
                $.escape_sequence
            )),
            '"'
        ),

        escape_sequence: $ => token.immediate(seq(
            '\\',
            choice(
                /[^xuU]/,
                /\d{2,3}/,
                /x[0-9a-fA-F]{2,}/,
                /u[0-9a-fA-F]{4}/,
                /U[0-9a-fA-F]{8}/
            )
        )),

        // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
        comment: $ => token(choice(
            seq('//', /.*/),
            seq(
                '/*',
                /[^*]*\*+([^/*][^*]*\*+)*/,
                '/'
            )
        )),

        _left_delimiter: $ => choice(
            token('{{'),
            token('{{-'),
        ),
        _right_delimiter: $ => choice(
            token('}}'),
            token('-}}'),
        ),
    }
});

function sep1(separator, rule) {
    return seq(rule, repeat(seq(separator, rule)))
}

function sep(separator, rule) {
    return optional(sep1(separator, rule))
}
