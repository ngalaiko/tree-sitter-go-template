#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 443
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 74
#define ALIAS_COUNT 1
#define TOKEN_COUNT 38
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 30

enum {
  sym_text = 1,
  anon_sym_if = 2,
  anon_sym_elseif = 3,
  anon_sym_else = 4,
  anon_sym_end = 5,
  anon_sym_COMMA = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_range = 8,
  anon_sym_template = 9,
  anon_sym_define = 10,
  anon_sym_block = 11,
  anon_sym_with = 12,
  anon_sym_EQ = 13,
  anon_sym_PIPE = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_ = 17,
  sym_pipeline_stub = 18,
  anon_sym_DOT = 19,
  anon_sym_DOLLAR = 20,
  sym_identifier = 21,
  sym_int_literal = 22,
  sym_float_literal = 23,
  sym_imaginary_literal = 24,
  sym_rune_literal = 25,
  sym_true = 26,
  sym_false = 27,
  sym_nil = 28,
  sym_raw_string_literal = 29,
  anon_sym_DQUOTE = 30,
  aux_sym_interpreted_string_literal_token1 = 31,
  sym_escape_sequence = 32,
  sym_comment = 33,
  anon_sym_LBRACE_LBRACE = 34,
  anon_sym_DASH = 35,
  anon_sym_DASH2 = 36,
  anon_sym_RBRACE_RBRACE = 37,
  sym_template = 38,
  sym__block = 39,
  sym__action = 40,
  sym__comment_action = 41,
  sym__pipeline_action = 42,
  sym_if_action = 43,
  sym_range_variable_definition = 44,
  sym_range_action = 45,
  sym_template_action = 46,
  sym_define_action = 47,
  sym_block_action = 48,
  sym_with_action = 49,
  sym__pipeline = 50,
  sym_variable_definition = 51,
  sym_assignment = 52,
  sym_chained_pipeline = 53,
  sym_parenthesized_pipeline = 54,
  sym_method_call = 55,
  sym_function_call = 56,
  sym_argument_list = 57,
  sym__expression = 58,
  sym_selector_expression = 59,
  sym__field_identifier = 60,
  sym_field = 61,
  sym_variable = 62,
  sym__literal = 63,
  sym__boolean_literal = 64,
  sym_dot = 65,
  sym__string_literal = 66,
  sym_interpreted_string_literal = 67,
  sym__left_delimiter = 68,
  sym__right_delimiter = 69,
  aux_sym_template_repeat1 = 70,
  aux_sym_if_action_repeat1 = 71,
  aux_sym_argument_list_repeat1 = 72,
  aux_sym_interpreted_string_literal_repeat1 = 73,
  alias_sym_field_identifier = 74,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_range] = "range",
  [anon_sym_template] = "template",
  [anon_sym_define] = "define",
  [anon_sym_block] = "block",
  [anon_sym_with] = "with",
  [anon_sym_EQ] = "=",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_] = " ",
  [sym_pipeline_stub] = "pipeline_stub",
  [anon_sym_DOT] = ".",
  [anon_sym_DOLLAR] = "$",
  [sym_identifier] = "identifier",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_imaginary_literal] = "imaginary_literal",
  [sym_rune_literal] = "rune_literal",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_nil] = "nil",
  [sym_raw_string_literal] = "raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_interpreted_string_literal_token1] = "interpreted_string_literal_token1",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_DASH] = "- ",
  [anon_sym_DASH2] = " -",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym__action] = "_action",
  [sym__comment_action] = "_comment_action",
  [sym__pipeline_action] = "_pipeline_action",
  [sym_if_action] = "if_action",
  [sym_range_variable_definition] = "range_variable_definition",
  [sym_range_action] = "range_action",
  [sym_template_action] = "template_action",
  [sym_define_action] = "define_action",
  [sym_block_action] = "block_action",
  [sym_with_action] = "with_action",
  [sym__pipeline] = "_pipeline",
  [sym_variable_definition] = "variable_definition",
  [sym_assignment] = "assignment",
  [sym_chained_pipeline] = "chained_pipeline",
  [sym_parenthesized_pipeline] = "parenthesized_pipeline",
  [sym_method_call] = "method_call",
  [sym_function_call] = "function_call",
  [sym_argument_list] = "argument_list",
  [sym__expression] = "_expression",
  [sym_selector_expression] = "selector_expression",
  [sym__field_identifier] = "_field_identifier",
  [sym_field] = "field",
  [sym_variable] = "variable",
  [sym__literal] = "_literal",
  [sym__boolean_literal] = "_boolean_literal",
  [sym_dot] = "dot",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_if_action_repeat1] = "if_action_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
  [alias_sym_field_identifier] = "field_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elseif] = anon_sym_elseif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_end] = anon_sym_end,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_range] = anon_sym_range,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_] = anon_sym_,
  [sym_pipeline_stub] = sym_pipeline_stub,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [sym_identifier] = sym_identifier,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_imaginary_literal] = sym_imaginary_literal,
  [sym_rune_literal] = sym_rune_literal,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_nil] = sym_nil,
  [sym_raw_string_literal] = sym_raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_interpreted_string_literal_token1] = aux_sym_interpreted_string_literal_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_DASH2] = anon_sym_DASH2,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym__action] = sym__action,
  [sym__comment_action] = sym__comment_action,
  [sym__pipeline_action] = sym__pipeline_action,
  [sym_if_action] = sym_if_action,
  [sym_range_variable_definition] = sym_range_variable_definition,
  [sym_range_action] = sym_range_action,
  [sym_template_action] = sym_template_action,
  [sym_define_action] = sym_define_action,
  [sym_block_action] = sym_block_action,
  [sym_with_action] = sym_with_action,
  [sym__pipeline] = sym__pipeline,
  [sym_variable_definition] = sym_variable_definition,
  [sym_assignment] = sym_assignment,
  [sym_chained_pipeline] = sym_chained_pipeline,
  [sym_parenthesized_pipeline] = sym_parenthesized_pipeline,
  [sym_method_call] = sym_method_call,
  [sym_function_call] = sym_function_call,
  [sym_argument_list] = sym_argument_list,
  [sym__expression] = sym__expression,
  [sym_selector_expression] = sym_selector_expression,
  [sym__field_identifier] = sym__field_identifier,
  [sym_field] = sym_field,
  [sym_variable] = sym_variable,
  [sym__literal] = sym__literal,
  [sym__boolean_literal] = sym__boolean_literal,
  [sym_dot] = sym_dot,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_if_action_repeat1] = aux_sym_if_action_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
  [alias_sym_field_identifier] = alias_sym_field_identifier,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elseif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_range] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_template] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_pipeline_stub] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_imaginary_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_rune_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_nil] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_template] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__action] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_action] = {
    .visible = false,
    .named = true,
  },
  [sym__pipeline_action] = {
    .visible = false,
    .named = true,
  },
  [sym_if_action] = {
    .visible = true,
    .named = true,
  },
  [sym_range_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_range_action] = {
    .visible = true,
    .named = true,
  },
  [sym_template_action] = {
    .visible = true,
    .named = true,
  },
  [sym_define_action] = {
    .visible = true,
    .named = true,
  },
  [sym_block_action] = {
    .visible = true,
    .named = true,
  },
  [sym_with_action] = {
    .visible = true,
    .named = true,
  },
  [sym__pipeline] = {
    .visible = false,
    .named = true,
  },
  [sym_variable_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_chained_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_pipeline] = {
    .visible = true,
    .named = true,
  },
  [sym_method_call] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_selector_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__field_identifier] = {
    .visible = false,
    .named = true,
  },
  [sym_field] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_dot] = {
    .visible = true,
    .named = true,
  },
  [sym__string_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_interpreted_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__left_delimiter] = {
    .visible = false,
    .named = true,
  },
  [sym__right_delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_template_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_action_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interpreted_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_field_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_arguments = 3,
  field_body = 4,
  field_condition = 5,
  field_consequence = 6,
  field_element = 7,
  field_field = 8,
  field_function = 9,
  field_index = 10,
  field_method = 11,
  field_name = 12,
  field_operand = 13,
  field_option = 14,
  field_range = 15,
  field_value = 16,
  field_variable = 17,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_field] = "field",
  [field_function] = "function",
  [field_index] = "index",
  [field_method] = "method",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_option] = "option",
  [field_range] = "range",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 4},
  [11] = {.index = 17, .length = 1},
  [12] = {.index = 18, .length = 1},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 3},
  [16] = {.index = 27, .length = 1},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 2},
  [20] = {.index = 34, .length = 4},
  [21] = {.index = 38, .length = 3},
  [22] = {.index = 41, .length = 2},
  [23] = {.index = 43, .length = 1},
  [24] = {.index = 44, .length = 2},
  [25] = {.index = 46, .length = 3},
  [26] = {.index = 49, .length = 4},
  [27] = {.index = 53, .length = 2},
  [28] = {.index = 55, .length = 3},
  [29] = {.index = 58, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_function, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_arguments, 1},
    {field_function, 0},
  [4] =
    {field_arguments, 1},
    {field_method, 0},
  [6] =
    {field_name, 2},
  [7] =
    {field_field, 2},
    {field_operand, 0},
  [9] =
    {field_value, 2},
    {field_variable, 0},
  [11] =
    {field_argument, 3},
    {field_name, 2},
  [13] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [17] =
    {field_condition, 2},
  [18] =
    {field_range, 2},
  [19] =
    {field_element, 2},
    {field_index, 0},
    {field_range, 4},
  [22] =
    {field_condition, 2},
    {field_consequence, 4},
  [24] =
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [27] =
    {field_body, 4},
  [28] =
    {field_body, 4},
    {field_range, 2},
  [30] =
    {field_body, 4},
    {field_name, 2},
  [32] =
    {field_condition, 2},
    {field_option, 4},
  [34] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [38] =
    {field_argument, 3},
    {field_body, 5},
    {field_name, 2},
  [41] =
    {field_alternative, 7},
    {field_condition, 2},
  [43] =
    {field_alternative, 7},
  [44] =
    {field_alternative, 7},
    {field_range, 2},
  [46] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [49] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [53] =
    {field_alternative, 8},
    {field_body, 4},
  [55] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [58] =
    {field_alternative, 9},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [6] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6512
    ? (c < 2958
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'o' || (c < 'x'
                ? (c < 's'
                  ? c == 'q'
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2613
          ? (c < 2474
            ? (c < 2365
              ? (c < 2208
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))
              : (c <= 2365 || (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))))
            : (c <= 2480 || (c < 2544
              ? (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))
              : (c <= 2545 || (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))))))
          : (c <= 2614 || (c < 2809
            ? (c < 2707
              ? (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))
              : (c <= 2728 || (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))))
            : (c <= 2809 || (c < 2877
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))))))))))
      : (c <= 2960 || (c < 3913
        ? (c < 3346
          ? (c < 3160
            ? (c < 2990
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))
              : (c <= 3001 || (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))))
            : (c <= 3162 || (c < 3253
              ? (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))
              : (c <= 3257 || (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))))))
          : (c <= 3386 || (c < 3713
            ? (c < 3482
              ? (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))
              : (c <= 3505 || (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4824
          ? (c < 4304
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5952
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43138
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6987 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 11312
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : c <= 11502)))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42538
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42192
                ? (c < 40956
                  ? c == 19968
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)))))
            : (c <= 42539 || (c < 42946
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42725)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42943)))
              : (c <= 42954 || (c < 43015
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'u'
                  ? (c >= 'o' && c <= 's')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6688
    ? (c < 2984
      ? (c < 2365
        ? (c < 1376
          ? (c < 880
            ? (c < 192
              ? (c < 170
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))
              : (c <= 214 || (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))))
            : (c <= 884 || (c < 910
              ? (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))
              : (c <= 929 || (c < 1162
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))))))
          : (c <= 1416 || (c < 1969
            ? (c < 1765
              ? (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))
              : (c <= 1766 || (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))))
            : (c <= 1969 || (c < 2088
              ? (c < 2048
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : (c <= 2037 || c == 2042))
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))
              : (c <= 2088 || (c < 2208
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))))))))
        : (c <= 2365 || (c < 2703
          ? (c < 2544
            ? (c < 2474
              ? (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))
              : (c <= 2480 || (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))))
            : (c <= 2545 || (c < 2613
              ? (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))
              : (c <= 2614 || (c < 2654
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))))))
          : (c <= 2705 || (c < 2869
            ? (c < 2784
              ? (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))
              : (c <= 2785 || (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))))
            : (c <= 2873 || (c < 2958
              ? (c < 2929
                ? (c < 2908
                  ? c == 2877
                  : (c <= 2909 || (c >= 2911 && c <= 2913)))
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))
              : (c <= 2960 || (c < 2972
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))))))))))
      : (c <= 2986 || (c < 4186
        ? (c < 3450
          ? (c < 3242
            ? (c < 3133
              ? (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))
              : (c <= 3133 || (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))))
            : (c <= 3251 || (c < 3342
              ? (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))
              : (c <= 3344 || (c < 3406
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))))))
          : (c <= 3455 || (c < 3751
            ? (c < 3634
              ? (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))
              : (c <= 3635 || (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))))
            : (c <= 3760 || (c < 3904
              ? (c < 3782
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))
              : (c <= 3911 || (c < 4096
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))))))))
        : (c <= 4189 || (c < 5024
          ? (c < 4698
            ? (c < 4295
              ? (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))
              : (c <= 4295 || (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))))
            : (c <= 4701 || (c < 4802
              ? (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))
              : (c <= 4805 || (c < 4882
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)
                : (c <= 4885 || (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : c <= 5007)))))))
          : (c <= 5109 || (c < 6103
            ? (c < 5888
              ? (c < 5761
                ? (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : (c <= 5740 || (c >= 5743 && c <= 5759)))
                : (c <= 5786 || (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : c <= 5880)))
              : (c <= 5900 || (c < 5984
                ? (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6016
                  ? (c >= 5998 && c <= 6000)
                  : c <= 6067)))))
            : (c <= 6103 || (c < 6400
              ? (c < 6279
                ? (c < 6176
                  ? c == 6108
                  : (c <= 6264 || (c >= 6272 && c <= 6276)))
                : (c <= 6312 || (c < 6320
                  ? c == 6314
                  : c <= 6389)))
              : (c <= 6430 || (c < 6528
                ? (c < 6512
                  ? (c >= 6480 && c <= 6509)
                  : c <= 6516)
                : (c <= 6571 || (c < 6656
                  ? (c >= 6576 && c <= 6601)
                  : c <= 6678)))))))))))))
    : (c <= 6740 || (c < 43259
      ? (c < 11264
        ? (c < 8064
          ? (c < 7406
            ? (c < 7168
              ? (c < 7043
                ? (c < 6917
                  ? c == 6823
                  : (c <= 6963 || (c >= 6981 && c <= 6987)))
                : (c <= 7072 || (c < 7098
                  ? (c >= 7086 && c <= 7087)
                  : c <= 7141)))
              : (c <= 7203 || (c < 7312
                ? (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))
                : (c <= 7354 || (c < 7401
                  ? (c >= 7357 && c <= 7359)
                  : c <= 7404)))))
            : (c <= 7411 || (c < 8008
              ? (c < 7680
                ? (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : (c <= 7418 || (c >= 7424 && c <= 7615)))
                : (c <= 7957 || (c < 7968
                  ? (c >= 7960 && c <= 7965)
                  : c <= 8005)))
              : (c <= 8013 || (c < 8027
                ? (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)
                : (c <= 8027 || (c < 8031
                  ? c == 8029
                  : c <= 8061)))))))
          : (c <= 8116 || (c < 8455
            ? (c < 8160
              ? (c < 8134
                ? (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))
                : (c <= 8140 || (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : c <= 8155)))
              : (c <= 8172 || (c < 8319
                ? (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : (c <= 8188 || c == 8305))
                : (c <= 8319 || (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : c <= 8450)))))
            : (c <= 8455 || (c < 8490
              ? (c < 8484
                ? (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : (c <= 8469 || (c >= 8473 && c <= 8477)))
                : (c <= 8484 || (c < 8488
                  ? c == 8486
                  : c <= 8488)))
              : (c <= 8493 || (c < 8517
                ? (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)
                : (c <= 8521 || (c < 8579
                  ? c == 8526
                  : c <= 8580)))))))))
        : (c <= 11310 || (c < 12549
          ? (c < 11704
            ? (c < 11565
              ? (c < 11506
                ? (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : (c <= 11492 || (c >= 11499 && c <= 11502)))
                : (c <= 11507 || (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : c <= 11559)))
              : (c <= 11565 || (c < 11680
                ? (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))
                : (c <= 11686 || (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : c <= 11702)))))
            : (c <= 11710 || (c < 12337
              ? (c < 11736
                ? (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : (c <= 11726 || (c >= 11728 && c <= 11734)))
                : (c <= 11742 || (c < 12293
                  ? c == 11823
                  : c <= 12294)))
              : (c <= 12341 || (c < 12445
                ? (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42623
            ? (c < 40956
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 40956 || (c < 42512
                ? (c < 42192
                  ? (c >= 40960 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 43011
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42943 || (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)))
              : (c <= 43013 || (c < 43072
                ? (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)
                : (c <= 43123 || (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : c <= 43255)))))))))))
      : (c <= 43259 || (c < 65313
        ? (c < 43808
          ? (c < 43642
            ? (c < 43488
              ? (c < 43360
                ? (c < 43274
                  ? (c >= 43261 && c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : c <= 43471)))
              : (c <= 43492 || (c < 43584
                ? (c < 43514
                  ? (c >= 43494 && c <= 43503)
                  : (c <= 43518 || (c >= 43520 && c <= 43560)))
                : (c <= 43586 || (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : c <= 43638)))))
            : (c <= 43642 || (c < 43739
              ? (c < 43705
                ? (c < 43697
                  ? (c >= 43646 && c <= 43695)
                  : (c <= 43697 || (c >= 43701 && c <= 43702)))
                : (c <= 43709 || (c < 43714
                  ? c == 43712
                  : c <= 43714)))
              : (c <= 43741 || (c < 43777
                ? (c < 43762
                  ? (c >= 43744 && c <= 43754)
                  : c <= 43764)
                : (c <= 43782 || (c < 43793
                  ? (c >= 43785 && c <= 43790)
                  : c <= 43798)))))))
          : (c <= 43814 || (c < 64287
            ? (c < 55216
              ? (c < 43888
                ? (c < 43824
                  ? (c >= 43816 && c <= 43822)
                  : (c <= 43866 || (c >= 43868 && c <= 43881)))
                : (c <= 44002 || (c < 55203
                  ? c == 44032
                  : c <= 55203)))
              : (c <= 55238 || (c < 64256
                ? (c < 63744
                  ? (c >= 55243 && c <= 55291)
                  : (c <= 64109 || (c >= 64112 && c <= 64217)))
                : (c <= 64262 || (c < 64285
                  ? (c >= 64275 && c <= 64279)
                  : c <= 64285)))))
            : (c <= 64296 || (c < 64467
              ? (c < 64320
                ? (c < 64312
                  ? (c >= 64298 && c <= 64310)
                  : (c <= 64316 || c == 64318))
                : (c <= 64321 || (c < 64326
                  ? (c >= 64323 && c <= 64324)
                  : c <= 64433)))
              : (c <= 64829 || (c < 65008
                ? (c < 64914
                  ? (c >= 64848 && c <= 64911)
                  : c <= 64967)
                : (c <= 65019 || (c < 65142
                  ? (c >= 65136 && c <= 65140)
                  : c <= 65276)))))))))
        : (c <= 65338 || (c < 66864
          ? (c < 66176
            ? (c < 65536
              ? (c < 65482
                ? (c < 65382
                  ? (c >= 65345 && c <= 65370)
                  : (c <= 65470 || (c >= 65474 && c <= 65479)))
                : (c <= 65487 || (c < 65498
                  ? (c >= 65490 && c <= 65495)
                  : c <= 65500)))
              : (c <= 65547 || (c < 65599
                ? (c < 65576
                  ? (c >= 65549 && c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))
                : (c <= 65613 || (c < 65664
                  ? (c >= 65616 && c <= 65629)
                  : c <= 65786)))))
            : (c <= 66204 || (c < 66464
              ? (c < 66370
                ? (c < 66304
                  ? (c >= 66208 && c <= 66256)
                  : (c <= 66335 || (c >= 66349 && c <= 66368)))
                : (c <= 66377 || (c < 66432
                  ? (c >= 66384 && c <= 66421)
                  : c <= 66461)))
              : (c <= 66499 || (c < 66736
                ? (c < 66560
                  ? (c >= 66504 && c <= 66511)
                  : c <= 66717)
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67828
            ? (c < 67639
              ? (c < 67584
                ? (c < 67392
                  ? (c >= 67072 && c <= 67382)
                  : (c <= 67413 || (c >= 67424 && c <= 67431)))
                : (c <= 67589 || (c < 67594
                  ? c == 67592
                  : c <= 67637)))
              : (c <= 67640 || (c < 67680
                ? (c < 67647
                  ? c == 67644
                  : c <= 67669)
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6512
    ? (c < 2962
      ? (c < 2088
        ? (c < 910
          ? (c < 192
            ? (c < 'o'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'j'
                  ? (c >= 'g' && c <= 'h')
                  : c <= 'm')))
              : (c <= 'q' || (c < 170
                ? (c < 'u'
                  ? c == 's'
                  : (c <= 'v' || (c >= 'x' && c <= 'z')))
                : (c <= 170 || (c < 186
                  ? c == 181
                  : c <= 186)))))
            : (c <= 214 || (c < 880
              ? (c < 736
                ? (c < 248
                  ? (c >= 216 && c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))
                : (c <= 740 || (c < 750
                  ? c == 748
                  : c <= 750)))
              : (c <= 884 || (c < 902
                ? (c < 890
                  ? (c >= 886 && c <= 887)
                  : (c <= 893 || c == 895))
                : (c <= 902 || (c < 908
                  ? (c >= 904 && c <= 906)
                  : c <= 908)))))))
          : (c <= 929 || (c < 1774
            ? (c < 1488
              ? (c < 1329
                ? (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : (c <= 1153 || (c >= 1162 && c <= 1327)))
                : (c <= 1366 || (c < 1376
                  ? c == 1369
                  : c <= 1416)))
              : (c <= 1514 || (c < 1649
                ? (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))
                : (c <= 1747 || (c < 1765
                  ? c == 1749
                  : c <= 1766)))))
            : (c <= 1775 || (c < 1994
              ? (c < 1810
                ? (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : (c <= 1791 || c == 1808))
                : (c <= 1839 || (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : c <= 1969)))
              : (c <= 2026 || (c < 2048
                ? (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)
                : (c <= 2069 || (c < 2084
                  ? c == 2074
                  : c <= 2084)))))))))
        : (c <= 2088 || (c < 2616
          ? (c < 2482
            ? (c < 2384
              ? (c < 2230
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2208 && c <= 2228)))
                : (c <= 2247 || (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : c <= 2365)))
              : (c <= 2384 || (c < 2447
                ? (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : (c <= 2432 || (c >= 2437 && c <= 2444)))
                : (c <= 2448 || (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : c <= 2480)))))
            : (c <= 2482 || (c < 2556
              ? (c < 2524
                ? (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : (c <= 2493 || c == 2510))
                : (c <= 2525 || (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : c <= 2545)))
              : (c <= 2556 || (c < 2602
                ? (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : (c <= 2576 || (c >= 2579 && c <= 2600)))
                : (c <= 2608 || (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)))))))
          : (c <= 2617 || (c < 2821
            ? (c < 2730
              ? (c < 2693
                ? (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : (c <= 2654 || (c >= 2674 && c <= 2676)))
                : (c <= 2701 || (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : c <= 2728)))
              : (c <= 2736 || (c < 2768
                ? (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : (c <= 2745 || c == 2749))
                : (c <= 2768 || (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : c <= 2809)))))
            : (c <= 2828 || (c < 2908
              ? (c < 2866
                ? (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : (c <= 2856 || (c >= 2858 && c <= 2864)))
                : (c <= 2867 || (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : c <= 2877)))
              : (c <= 2909 || (c < 2947
                ? (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)
                : (c <= 2947 || (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)))))))))))
      : (c <= 2965 || (c < 3976
        ? (c < 3389
          ? (c < 3168
            ? (c < 3024
              ? (c < 2979
                ? (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : (c <= 2972 || (c >= 2974 && c <= 2975)))
                : (c <= 2980 || (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : c <= 3001)))
              : (c <= 3024 || (c < 3114
                ? (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : (c <= 3088 || (c >= 3090 && c <= 3112)))
                : (c <= 3129 || (c < 3160
                  ? c == 3133
                  : c <= 3162)))))
            : (c <= 3169 || (c < 3261
              ? (c < 3218
                ? (c < 3205
                  ? c == 3200
                  : (c <= 3212 || (c >= 3214 && c <= 3216)))
                : (c <= 3240 || (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : c <= 3257)))
              : (c <= 3261 || (c < 3332
                ? (c < 3296
                  ? c == 3294
                  : (c <= 3297 || (c >= 3313 && c <= 3314)))
                : (c <= 3340 || (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)))))))
          : (c <= 3389 || (c < 3716
            ? (c < 3507
              ? (c < 3450
                ? (c < 3412
                  ? c == 3406
                  : (c <= 3414 || (c >= 3423 && c <= 3425)))
                : (c <= 3455 || (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : c <= 3505)))
              : (c <= 3515 || (c < 3634
                ? (c < 3520
                  ? c == 3517
                  : (c <= 3526 || (c >= 3585 && c <= 3632)))
                : (c <= 3635 || (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : c <= 3714)))))
            : (c <= 3716 || (c < 3776
              ? (c < 3751
                ? (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : (c <= 3747 || c == 3749))
                : (c <= 3760 || (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)))
              : (c <= 3780 || (c < 3840
                ? (c < 3804
                  ? c == 3782
                  : c <= 3807)
                : (c <= 3840 || (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)))))))))
        : (c <= 3980 || (c < 4824
          ? (c < 4348
            ? (c < 4206
              ? (c < 4186
                ? (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : (c <= 4159 || (c >= 4176 && c <= 4181)))
                : (c <= 4189 || (c < 4197
                  ? c == 4193
                  : c <= 4198)))
              : (c <= 4208 || (c < 4295
                ? (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : (c <= 4238 || (c >= 4256 && c <= 4293)))
                : (c <= 4295 || (c < 4304
                  ? c == 4301
                  : c <= 4346)))))
            : (c <= 4680 || (c < 4752
              ? (c < 4698
                ? (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : (c <= 4694 || c == 4696))
                : (c <= 4701 || (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : c <= 4749)))
              : (c <= 4784 || (c < 4800
                ? (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5952
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43138
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6987 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 11312
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : c <= 11502)))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42538
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42192
                ? (c < 40956
                  ? c == 19968
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)))))
            : (c <= 42539 || (c < 42946
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42725)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42943)))
              : (c <= 42954 || (c < 43015
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6512
    ? (c < 2958
      ? (c < 2084
        ? (c < 908
          ? (c < 186
            ? (c < 'j'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'g'
                  ? c == 'e'
                  : c <= 'h')))
              : (c <= 'm' || (c < 'x'
                ? (c < 's'
                  ? (c >= 'o' && c <= 'q')
                  : (c <= 's' || (c >= 'u' && c <= 'v')))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))))
            : (c <= 186 || (c < 750
              ? (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))
              : (c <= 750 || (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))))))
          : (c <= 908 || (c < 1765
            ? (c < 1376
              ? (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
                : (c <= 1327 || (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : c <= 1369)))
              : (c <= 1416 || (c < 1646
                ? (c < 1519
                  ? (c >= 1488 && c <= 1514)
                  : (c <= 1522 || (c >= 1568 && c <= 1610)))
                : (c <= 1647 || (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : c <= 1749)))))
            : (c <= 1766 || (c < 1969
              ? (c < 1808
                ? (c < 1786
                  ? (c >= 1774 && c <= 1775)
                  : (c <= 1788 || c == 1791))
                : (c <= 1808 || (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : c <= 1957)))
              : (c <= 1969 || (c < 2042
                ? (c < 2036
                  ? (c >= 1994 && c <= 2026)
                  : c <= 2037)
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))))))))
        : (c <= 2084 || (c < 2613
          ? (c < 2474
            ? (c < 2365
              ? (c < 2208
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2228 || (c < 2308
                  ? (c >= 2230 && c <= 2247)
                  : c <= 2361)))
              : (c <= 2365 || (c < 2437
                ? (c < 2392
                  ? c == 2384
                  : (c <= 2401 || (c >= 2417 && c <= 2432)))
                : (c <= 2444 || (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : c <= 2472)))))
            : (c <= 2480 || (c < 2544
              ? (c < 2510
                ? (c < 2486
                  ? c == 2482
                  : (c <= 2489 || c == 2493))
                : (c <= 2510 || (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : c <= 2529)))
              : (c <= 2545 || (c < 2579
                ? (c < 2565
                  ? c == 2556
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))
                : (c <= 2600 || (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)))))))
          : (c <= 2614 || (c < 2809
            ? (c < 2707
              ? (c < 2674
                ? (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : (c <= 2652 || c == 2654))
                : (c <= 2676 || (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : c <= 2705)))
              : (c <= 2728 || (c < 2749
                ? (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : (c <= 2739 || (c >= 2741 && c <= 2745)))
                : (c <= 2749 || (c < 2784
                  ? c == 2768
                  : c <= 2785)))))
            : (c <= 2809 || (c < 2877
              ? (c < 2858
                ? (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))
                : (c <= 2864 || (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : c <= 2873)))
              : (c <= 2877 || (c < 2929
                ? (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)
                : (c <= 2929 || (c < 2949
                  ? c == 2947
                  : c <= 2954)))))))))))
      : (c <= 2960 || (c < 3913
        ? (c < 3346
          ? (c < 3160
            ? (c < 2990
              ? (c < 2974
                ? (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : (c <= 2970 || c == 2972))
                : (c <= 2975 || (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : c <= 2986)))
              : (c <= 3001 || (c < 3090
                ? (c < 3077
                  ? c == 3024
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))
                : (c <= 3112 || (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : c <= 3133)))))
            : (c <= 3162 || (c < 3253
              ? (c < 3214
                ? (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : (c <= 3200 || (c >= 3205 && c <= 3212)))
                : (c <= 3216 || (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : c <= 3251)))
              : (c <= 3257 || (c < 3313
                ? (c < 3294
                  ? c == 3261
                  : (c <= 3294 || (c >= 3296 && c <= 3297)))
                : (c <= 3314 || (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)))))))
          : (c <= 3386 || (c < 3713
            ? (c < 3482
              ? (c < 3423
                ? (c < 3406
                  ? c == 3389
                  : (c <= 3406 || (c >= 3412 && c <= 3414)))
                : (c <= 3425 || (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : c <= 3478)))
              : (c <= 3505 || (c < 3585
                ? (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : (c <= 3517 || (c >= 3520 && c <= 3526)))
                : (c <= 3632 || (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : c <= 3654)))))
            : (c <= 3714 || (c < 3773
              ? (c < 3749
                ? (c < 3718
                  ? c == 3716
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : c <= 3763)))
              : (c <= 3773 || (c < 3804
                ? (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)
                : (c <= 3807 || (c < 3904
                  ? c == 3840
                  : c <= 3911)))))))))
        : (c <= 3948 || (c < 4824
          ? (c < 4304
            ? (c < 4197
              ? (c < 4176
                ? (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : (c <= 4138 || c == 4159))
                : (c <= 4181 || (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : c <= 4193)))
              : (c <= 4198 || (c < 4256
                ? (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : (c <= 4225 || c == 4238))
                : (c <= 4293 || (c < 4301
                  ? c == 4295
                  : c <= 4301)))))
            : (c <= 4346 || (c < 4746
              ? (c < 4696
                ? (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : (c <= 4685 || (c >= 4688 && c <= 4694)))
                : (c <= 4696 || (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : c <= 4744)))
              : (c <= 4749 || (c < 4800
                ? (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : (c <= 4789 || (c >= 4792 && c <= 4798)))
                : (c <= 4800 || (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)))))))
          : (c <= 4880 || (c < 5952
            ? (c < 5743
              ? (c < 5024
                ? (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5121
                  ? (c >= 5112 && c <= 5117)
                  : c <= 5740)))
              : (c <= 5759 || (c < 5888
                ? (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : (c <= 5866 || (c >= 5873 && c <= 5880)))
                : (c <= 5900 || (c < 5920
                  ? (c >= 5902 && c <= 5905)
                  : c <= 5937)))))
            : (c <= 5969 || (c < 6272
              ? (c < 6103
                ? (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : (c <= 6000 || (c >= 6016 && c <= 6067)))
                : (c <= 6103 || (c < 6176
                  ? c == 6108
                  : c <= 6264)))
              : (c <= 6276 || (c < 6320
                ? (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)
                : (c <= 6389 || (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)))))))))))))
    : (c <= 6516 || (c < 43138
      ? (c < 8517
        ? (c < 8027
          ? (c < 7296
            ? (c < 6981
              ? (c < 6688
                ? (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : (c <= 6601 || (c >= 6656 && c <= 6678)))
                : (c <= 6740 || (c < 6917
                  ? c == 6823
                  : c <= 6963)))
              : (c <= 6987 || (c < 7168
                ? (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : (c <= 7087 || (c >= 7098 && c <= 7141)))
                : (c <= 7203 || (c < 7258
                  ? (c >= 7245 && c <= 7247)
                  : c <= 7293)))))
            : (c <= 7304 || (c < 7424
              ? (c < 7406
                ? (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : (c <= 7359 || (c >= 7401 && c <= 7404)))
                : (c <= 7411 || (c < 7418
                  ? (c >= 7413 && c <= 7414)
                  : c <= 7418)))
              : (c <= 7615 || (c < 8008
                ? (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))
                : (c <= 8013 || (c < 8025
                  ? (c >= 8016 && c <= 8023)
                  : c <= 8025)))))))
          : (c <= 8027 || (c < 8319
            ? (c < 8134
              ? (c < 8118
                ? (c < 8031
                  ? c == 8029
                  : (c <= 8061 || (c >= 8064 && c <= 8116)))
                : (c <= 8124 || (c < 8130
                  ? c == 8126
                  : c <= 8132)))
              : (c <= 8140 || (c < 8178
                ? (c < 8150
                  ? (c >= 8144 && c <= 8147)
                  : (c <= 8155 || (c >= 8160 && c <= 8172)))
                : (c <= 8180 || (c < 8305
                  ? (c >= 8182 && c <= 8188)
                  : c <= 8305)))))
            : (c <= 8319 || (c < 8484
              ? (c < 8458
                ? (c < 8450
                  ? (c >= 8336 && c <= 8348)
                  : (c <= 8450 || c == 8455))
                : (c <= 8467 || (c < 8473
                  ? c == 8469
                  : c <= 8477)))
              : (c <= 8484 || (c < 8490
                ? (c < 8488
                  ? c == 8486
                  : c <= 8488)
                : (c <= 8493 || (c < 8508
                  ? (c >= 8495 && c <= 8505)
                  : c <= 8511)))))))))
        : (c <= 8521 || (c < 12449
          ? (c < 11680
            ? (c < 11506
              ? (c < 11312
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11310)))
                : (c <= 11358 || (c < 11499
                  ? (c >= 11360 && c <= 11492)
                  : c <= 11502)))
              : (c <= 11507 || (c < 11568
                ? (c < 11559
                  ? (c >= 11520 && c <= 11557)
                  : (c <= 11559 || c == 11565))
                : (c <= 11623 || (c < 11648
                  ? c == 11631
                  : c <= 11670)))))
            : (c <= 11686 || (c < 11736
              ? (c < 11712
                ? (c < 11696
                  ? (c >= 11688 && c <= 11694)
                  : (c <= 11702 || (c >= 11704 && c <= 11710)))
                : (c <= 11718 || (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : c <= 11734)))
              : (c <= 11742 || (c < 12347
                ? (c < 12293
                  ? c == 11823
                  : (c <= 12294 || (c >= 12337 && c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)))))))
          : (c <= 12538 || (c < 42538
            ? (c < 19903
              ? (c < 12704
                ? (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : (c <= 12591 || (c >= 12593 && c <= 12686)))
                : (c <= 12735 || (c < 13312
                  ? (c >= 12784 && c <= 12799)
                  : c <= 13312)))
              : (c <= 19903 || (c < 42192
                ? (c < 40956
                  ? c == 19968
                  : (c <= 40956 || (c >= 40960 && c <= 42124)))
                : (c <= 42237 || (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : c <= 42527)))))
            : (c <= 42539 || (c < 42946
              ? (c < 42775
                ? (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : (c <= 42653 || (c >= 42656 && c <= 42725)))
                : (c <= 42783 || (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : c <= 42943)))
              : (c <= 42954 || (c < 43015
                ? (c < 43011
                  ? (c >= 42997 && c <= 43009)
                  : c <= 43013)
                : (c <= 43018 || (c < 43072
                  ? (c >= 43020 && c <= 43042)
                  : c <= 43123)))))))))))
      : (c <= 43187 || (c < 65142
        ? (c < 43793
          ? (c < 43588
            ? (c < 43396
              ? (c < 43274
                ? (c < 43259
                  ? (c >= 43250 && c <= 43255)
                  : (c <= 43259 || (c >= 43261 && c <= 43262)))
                : (c <= 43301 || (c < 43360
                  ? (c >= 43312 && c <= 43334)
                  : c <= 43388)))
              : (c <= 43442 || (c < 43514
                ? (c < 43488
                  ? c == 43471
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))
                : (c <= 43518 || (c < 43584
                  ? (c >= 43520 && c <= 43560)
                  : c <= 43586)))))
            : (c <= 43595 || (c < 43712
              ? (c < 43697
                ? (c < 43642
                  ? (c >= 43616 && c <= 43638)
                  : (c <= 43642 || (c >= 43646 && c <= 43695)))
                : (c <= 43697 || (c < 43705
                  ? (c >= 43701 && c <= 43702)
                  : c <= 43709)))
              : (c <= 43712 || (c < 43762
                ? (c < 43739
                  ? c == 43714
                  : (c <= 43741 || (c >= 43744 && c <= 43754)))
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 's'
                  ? (c >= 'f' && c <= 'q')
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2230
        ? (c < 1329
          ? (c < 736
            ? (c < 170
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 'o'
                  ? c == 'm'
                  : c <= 'z')))
              : (c <= 170 || (c < 216
                ? (c < 186
                  ? c == 181
                  : (c <= 186 || (c >= 192 && c <= 214)))
                : (c <= 246 || (c < 710
                  ? (c >= 248 && c <= 705)
                  : c <= 721)))))
            : (c <= 740 || (c < 902
              ? (c < 886
                ? (c < 750
                  ? c == 748
                  : (c <= 750 || (c >= 880 && c <= 884)))
                : (c <= 887 || (c < 895
                  ? (c >= 890 && c <= 893)
                  : c <= 895)))
              : (c <= 902 || (c < 931
                ? (c < 908
                  ? (c >= 904 && c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))
                : (c <= 1013 || (c < 1162
                  ? (c >= 1015 && c <= 1153)
                  : c <= 1327)))))))
          : (c <= 1366 || (c < 1810
            ? (c < 1649
              ? (c < 1519
                ? (c < 1376
                  ? c == 1369
                  : (c <= 1416 || (c >= 1488 && c <= 1514)))
                : (c <= 1522 || (c < 1646
                  ? (c >= 1568 && c <= 1610)
                  : c <= 1647)))
              : (c <= 1747 || (c < 1786
                ? (c < 1765
                  ? c == 1749
                  : (c <= 1766 || (c >= 1774 && c <= 1775)))
                : (c <= 1788 || (c < 1808
                  ? c == 1791
                  : c <= 1808)))))
            : (c <= 1839 || (c < 2074
              ? (c < 2036
                ? (c < 1969
                  ? (c >= 1869 && c <= 1957)
                  : (c <= 1969 || (c >= 1994 && c <= 2026)))
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))
              : (c <= 2074 || (c < 2112
                ? (c < 2088
                  ? c == 2084
                  : c <= 2088)
                : (c <= 2136 || (c < 2208
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2228)))))))))
        : (c <= 2247 || (c < 2674
          ? (c < 2524
            ? (c < 2447
              ? (c < 2392
                ? (c < 2365
                  ? (c >= 2308 && c <= 2361)
                  : (c <= 2365 || c == 2384))
                : (c <= 2401 || (c < 2437
                  ? (c >= 2417 && c <= 2432)
                  : c <= 2444)))
              : (c <= 2448 || (c < 2486
                ? (c < 2474
                  ? (c >= 2451 && c <= 2472)
                  : (c <= 2480 || c == 2482))
                : (c <= 2489 || (c < 2510
                  ? c == 2493
                  : c <= 2510)))))
            : (c <= 2525 || (c < 2602
              ? (c < 2565
                ? (c < 2544
                  ? (c >= 2527 && c <= 2529)
                  : (c <= 2545 || c == 2556))
                : (c <= 2570 || (c < 2579
                  ? (c >= 2575 && c <= 2576)
                  : c <= 2600)))
              : (c <= 2608 || (c < 2616
                ? (c < 2613
                  ? (c >= 2610 && c <= 2611)
                  : c <= 2614)
                : (c <= 2617 || (c < 2654
                  ? (c >= 2649 && c <= 2652)
                  : c <= 2654)))))))
          : (c <= 2676 || (c < 2858
            ? (c < 2749
              ? (c < 2730
                ? (c < 2703
                  ? (c >= 2693 && c <= 2701)
                  : (c <= 2705 || (c >= 2707 && c <= 2728)))
                : (c <= 2736 || (c < 2741
                  ? (c >= 2738 && c <= 2739)
                  : c <= 2745)))
              : (c <= 2749 || (c < 2821
                ? (c < 2784
                  ? c == 2768
                  : (c <= 2785 || c == 2809))
                : (c <= 2828 || (c < 2835
                  ? (c >= 2831 && c <= 2832)
                  : c <= 2856)))))
            : (c <= 2864 || (c < 2947
              ? (c < 2908
                ? (c < 2869
                  ? (c >= 2866 && c <= 2867)
                  : (c <= 2873 || c == 2877))
                : (c <= 2909 || (c < 2929
                  ? (c >= 2911 && c <= 2913)
                  : c <= 2929)))
              : (c <= 2947 || (c < 2962
                ? (c < 2958
                  ? (c >= 2949 && c <= 2954)
                  : c <= 2960)
                : (c <= 2965 || (c < 2972
                  ? (c >= 2969 && c <= 2970)
                  : c <= 2972)))))))))))
      : (c <= 2975 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3168
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? c == 3294
                  : c <= 3297)))
              : (c <= 3314 || (c < 3346
                ? (c < 3342
                  ? (c >= 3332 && c <= 3340)
                  : c <= 3344)
                : (c <= 3386 || (c < 3406
                  ? c == 3389
                  : c <= 3406)))))))
          : (c <= 3414 || (c < 3724
            ? (c < 3520
              ? (c < 3482
                ? (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : (c <= 3455 || (c >= 3461 && c <= 3478)))
                : (c <= 3505 || (c < 3517
                  ? (c >= 3507 && c <= 3515)
                  : c <= 3517)))
              : (c <= 3526 || (c < 3713
                ? (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : (c <= 3635 || (c >= 3648 && c <= 3654)))
                : (c <= 3714 || (c < 3718
                  ? c == 3716
                  : c <= 3722)))))
            : (c <= 3747 || (c < 3804
              ? (c < 3773
                ? (c < 3751
                  ? c == 3749
                  : (c <= 3760 || (c >= 3762 && c <= 3763)))
                : (c <= 3773 || (c < 3782
                  ? (c >= 3776 && c <= 3780)
                  : c <= 3782)))
              : (c <= 3807 || (c < 3913
                ? (c < 3904
                  ? c == 3840
                  : c <= 3911)
                : (c <= 3948 || (c < 4096
                  ? (c >= 3976 && c <= 3980)
                  : c <= 4138)))))))))
        : (c <= 4159 || (c < 4888
          ? (c < 4688
            ? (c < 4238
              ? (c < 4197
                ? (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : (c <= 4189 || c == 4193))
                : (c <= 4198 || (c < 4213
                  ? (c >= 4206 && c <= 4208)
                  : c <= 4225)))
              : (c <= 4238 || (c < 4304
                ? (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : (c <= 4295 || c == 4301))
                : (c <= 4346 || (c < 4682
                  ? (c >= 4348 && c <= 4680)
                  : c <= 4685)))))
            : (c <= 4694 || (c < 4792
              ? (c < 4746
                ? (c < 4698
                  ? c == 4696
                  : (c <= 4701 || (c >= 4704 && c <= 4744)))
                : (c <= 4749 || (c < 4786
                  ? (c >= 4752 && c <= 4784)
                  : c <= 4789)))
              : (c <= 4798 || (c < 4808
                ? (c < 4802
                  ? c == 4800
                  : c <= 4805)
                : (c <= 4822 || (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : c <= 4885)))))))
          : (c <= 4954 || (c < 5998
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5920
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5900 || (c >= 5902 && c <= 5905)))
                : (c <= 5937 || (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : c <= 5996)))))
            : (c <= 6000 || (c < 6314
              ? (c < 6176
                ? (c < 6103
                  ? (c >= 6016 && c <= 6067)
                  : (c <= 6103 || c == 6108))
                : (c <= 6264 || (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)))
              : (c <= 6314 || (c < 6480
                ? (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)
                : (c <= 6509 || (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : c <= 6571)))))))))))))
    : (c <= 6601 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6987)
                  : c <= 7072)))
              : (c <= 7087 || (c < 7258
                ? (c < 7168
                  ? (c >= 7098 && c <= 7141)
                  : (c <= 7203 || (c >= 7245 && c <= 7247)))
                : (c <= 7293 || (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : c <= 7354)))))
            : (c <= 7359 || (c < 7960
              ? (c < 7418
                ? (c < 7406
                  ? (c >= 7401 && c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : c <= 7957)))
              : (c <= 7965 || (c < 8025
                ? (c < 8008
                  ? (c >= 7968 && c <= 8005)
                  : (c <= 8013 || (c >= 8016 && c <= 8023)))
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'b' || (c < 170
                  ? (c >= 'd' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'c' || (c < 170
                  ? (c >= 'e' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'd' || (c < 170
                  ? (c >= 'f' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'e' || (c < 170
                  ? (c >= 'g' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'f' || (c < 170
                  ? (c >= 'h' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'g' || (c < 170
                  ? (c >= 'i' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'h' || (c < 170
                  ? (c >= 'j' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'j' || (c < 170
                  ? (c >= 'l' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'k' || (c < 170
                  ? (c >= 'm' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'l' || (c < 170
                  ? (c >= 'n' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'm' || (c < 170
                  ? (c >= 'o' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'n' || (c < 170
                  ? (c >= 'p' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'o' || (c < 170
                  ? (c >= 'q' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_22(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'q' || (c < 170
                  ? (c >= 's' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_23(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'r' || (c < 170
                  ? (c >= 't' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_24(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 's' || (c < 170
                  ? (c >= 'u' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_25(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 748
            ? (c < 181
              ? (c < 'a'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 't' || (c < 170
                  ? (c >= 'v' && c <= 'z')
                  : c <= 170)))
              : (c <= 181 || (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))))
            : (c <= 748 || (c < 904
              ? (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))
              : (c <= 906 || (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_identifier_character_set_26(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1369
          ? (c < 750
            ? (c < 186
              ? (c < 'b'
                ? (c < 'A'
                  ? (c >= '0' && c <= '9')
                  : (c <= 'Z' || c == '_'))
                : (c <= 'z' || (c < 181
                  ? c == 170
                  : c <= 181)))
              : (c <= 186 || (c < 710
                ? (c < 216
                  ? (c >= 192 && c <= 214)
                  : (c <= 246 || (c >= 248 && c <= 705)))
                : (c <= 721 || (c < 748
                  ? (c >= 736 && c <= 740)
                  : c <= 748)))))
            : (c <= 750 || (c < 908
              ? (c < 895
                ? (c < 886
                  ? (c >= 880 && c <= 884)
                  : (c <= 887 || (c >= 890 && c <= 893)))
                : (c <= 895 || (c < 904
                  ? c == 902
                  : c <= 906)))
              : (c <= 908 || (c < 1015
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : c <= 1013)
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))))))
          : (c <= 1369 || (c < 1869
            ? (c < 1749
              ? (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))
              : (c <= 1749 || (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))))
            : (c <= 1957 || (c < 2084
              ? (c < 2042
                ? (c < 1994
                  ? c == 1969
                  : (c <= 2026 || (c >= 2036 && c <= 2037)))
                : (c <= 2042 || (c < 2074
                  ? (c >= 2048 && c <= 2069)
                  : c <= 2074)))
              : (c <= 2084 || (c < 2144
                ? (c < 2112
                  ? c == 2088
                  : c <= 2136)
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))))))))
        : (c <= 2361 || (c < 2693
          ? (c < 2527
            ? (c < 2451
              ? (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))
              : (c <= 2472 || (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))))
            : (c <= 2529 || (c < 2610
              ? (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))
              : (c <= 2611 || (c < 2649
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : c <= 2617)
                : (c <= 2652 || (c < 2674
                  ? c == 2654
                  : c <= 2676)))))))
          : (c <= 2701 || (c < 2866
            ? (c < 2768
              ? (c < 2738
                ? (c < 2707
                  ? (c >= 2703 && c <= 2705)
                  : (c <= 2728 || (c >= 2730 && c <= 2736)))
                : (c <= 2739 || (c < 2749
                  ? (c >= 2741 && c <= 2745)
                  : c <= 2749)))
              : (c <= 2768 || (c < 2831
                ? (c < 2809
                  ? (c >= 2784 && c <= 2785)
                  : (c <= 2809 || (c >= 2821 && c <= 2828)))
                : (c <= 2832 || (c < 2858
                  ? (c >= 2835 && c <= 2856)
                  : c <= 2864)))))
            : (c <= 2867 || (c < 2949
              ? (c < 2911
                ? (c < 2877
                  ? (c >= 2869 && c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))
              : (c <= 2954 || (c < 2969
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : c <= 2965)
                : (c <= 2970 || (c < 2974
                  ? c == 2972
                  : c <= 2975)))))))))))
      : (c <= 2980 || (c < 4176
        ? (c < 3423
          ? (c < 3218
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3200
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))))
            : (c <= 3240 || (c < 3332
              ? (c < 3294
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))
              : (c <= 3340 || (c < 3389
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : c <= 3386)
                : (c <= 3389 || (c < 3412
                  ? c == 3406
                  : c <= 3414)))))))
          : (c <= 3425 || (c < 3749
            ? (c < 3585
              ? (c < 3507
                ? (c < 3461
                  ? (c >= 3450 && c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3520
                  ? c == 3517
                  : c <= 3526)))
              : (c <= 3632 || (c < 3716
                ? (c < 3648
                  ? (c >= 3634 && c <= 3635)
                  : (c <= 3654 || (c >= 3713 && c <= 3714)))
                : (c <= 3716 || (c < 3724
                  ? (c >= 3718 && c <= 3722)
                  : c <= 3747)))))
            : (c <= 3749 || (c < 3840
              ? (c < 3776
                ? (c < 3762
                  ? (c >= 3751 && c <= 3760)
                  : (c <= 3763 || c == 3773))
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))
              : (c <= 3840 || (c < 3976
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : c <= 3948)
                : (c <= 3980 || (c < 4159
                  ? (c >= 4096 && c <= 4138)
                  : c <= 4159)))))))))
        : (c <= 4181 || (c < 4992
          ? (c < 4696
            ? (c < 4256
              ? (c < 4206
                ? (c < 4193
                  ? (c >= 4186 && c <= 4189)
                  : (c <= 4193 || (c >= 4197 && c <= 4198)))
                : (c <= 4208 || (c < 4238
                  ? (c >= 4213 && c <= 4225)
                  : c <= 4238)))
              : (c <= 4293 || (c < 4348
                ? (c < 4301
                  ? c == 4295
                  : (c <= 4301 || (c >= 4304 && c <= 4346)))
                : (c <= 4680 || (c < 4688
                  ? (c >= 4682 && c <= 4685)
                  : c <= 4694)))))
            : (c <= 4696 || (c < 4800
              ? (c < 4752
                ? (c < 4704
                  ? (c >= 4698 && c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4792
                  ? (c >= 4786 && c <= 4789)
                  : c <= 4798)))
              : (c <= 4800 || (c < 4824
                ? (c < 4808
                  ? (c >= 4802 && c <= 4805)
                  : c <= 4822)
                : (c <= 4880 || (c < 4888
                  ? (c >= 4882 && c <= 4885)
                  : c <= 4954)))))))
          : (c <= 5007 || (c < 6016
            ? (c < 5873
              ? (c < 5743
                ? (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : (c <= 5117 || (c >= 5121 && c <= 5740)))
                : (c <= 5759 || (c < 5792
                  ? (c >= 5761 && c <= 5786)
                  : c <= 5866)))
              : (c <= 5880 || (c < 5952
                ? (c < 5902
                  ? (c >= 5888 && c <= 5900)
                  : (c <= 5905 || (c >= 5920 && c <= 5937)))
                : (c <= 5969 || (c < 5998
                  ? (c >= 5984 && c <= 5996)
                  : c <= 6000)))))
            : (c <= 6067 || (c < 6320
              ? (c < 6272
                ? (c < 6108
                  ? c == 6103
                  : (c <= 6108 || (c >= 6176 && c <= 6264)))
                : (c <= 6276 || (c < 6314
                  ? (c >= 6279 && c <= 6312)
                  : c <= 6314)))
              : (c <= 6389 || (c < 6512
                ? (c < 6480
                  ? (c >= 6400 && c <= 6430)
                  : c <= 6509)
                : (c <= 6516 || (c < 6576
                  ? (c >= 6528 && c <= 6571)
                  : c <= 6601)))))))))))))
    : (c <= 6678 || (c < 43250
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6987 || (c < 7086
                  ? (c >= 7043 && c <= 7072)
                  : c <= 7087)))
              : (c <= 7141 || (c < 7296
                ? (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : (c <= 7247 || (c >= 7258 && c <= 7293)))
                : (c <= 7304 || (c < 7357
                  ? (c >= 7312 && c <= 7354)
                  : c <= 7359)))))
            : (c <= 7404 || (c < 7968
              ? (c < 7424
                ? (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : (c <= 7414 || c == 7418))
                : (c <= 7615 || (c < 7960
                  ? (c >= 7680 && c <= 7957)
                  : c <= 7965)))
              : (c <= 8005 || (c < 8025
                ? (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)
                : (c <= 8025 || (c < 8029
                  ? c == 8027
                  : c <= 8029)))))))
          : (c <= 8061 || (c < 8450
            ? (c < 8150
              ? (c < 8130
                ? (c < 8118
                  ? (c >= 8064 && c <= 8116)
                  : (c <= 8124 || c == 8126))
                : (c <= 8132 || (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : c <= 8147)))
              : (c <= 8155 || (c < 8305
                ? (c < 8178
                  ? (c >= 8160 && c <= 8172)
                  : (c <= 8180 || (c >= 8182 && c <= 8188)))
                : (c <= 8305 || (c < 8336
                  ? c == 8319
                  : c <= 8348)))))
            : (c <= 8450 || (c < 8488
              ? (c < 8473
                ? (c < 8458
                  ? c == 8455
                  : (c <= 8467 || c == 8469))
                : (c <= 8477 || (c < 8486
                  ? c == 8484
                  : c <= 8486)))
              : (c <= 8488 || (c < 8508
                ? (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)
                : (c <= 8511 || (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : c <= 8526)))))))))
        : (c <= 8580 || (c < 12540
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 11312
                  ? (c >= 11264 && c <= 11310)
                  : (c <= 11358 || (c >= 11360 && c <= 11492)))
                : (c <= 11502 || (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : c <= 11557)))
              : (c <= 11559 || (c < 11648
                ? (c < 11568
                  ? c == 11565
                  : (c <= 11623 || c == 11631))
                : (c <= 11670 || (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : c <= 11694)))))
            : (c <= 11702 || (c < 12293
              ? (c < 11728
                ? (c < 11712
                  ? (c >= 11704 && c <= 11710)
                  : (c <= 11718 || (c >= 11720 && c <= 11726)))
                : (c <= 11734 || (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : c <= 11823)))
              : (c <= 12294 || (c < 12353
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : c <= 12348)
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42560
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42240
                ? (c < 40960
                  ? c == 40956
                  : (c <= 42124 || (c >= 42192 && c <= 42237)))
                : (c <= 42508 || (c < 42538
                  ? (c >= 42512 && c <= 42527)
                  : c <= 42539)))))
            : (c <= 42606 || (c < 42997
              ? (c < 42786
                ? (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : (c <= 42725 || (c >= 42775 && c <= 42783)))
                : (c <= 42888 || (c < 42946
                  ? (c >= 42891 && c <= 42943)
                  : c <= 42954)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65142
        ? (c < 43793
          ? (c < 43616
            ? (c < 43471
              ? (c < 43312
                ? (c < 43261
                  ? c == 43259
                  : (c <= 43262 || (c >= 43274 && c <= 43301)))
                : (c <= 43334 || (c < 43396
                  ? (c >= 43360 && c <= 43388)
                  : c <= 43442)))
              : (c <= 43471 || (c < 43520
                ? (c < 43494
                  ? (c >= 43488 && c <= 43492)
                  : (c <= 43503 || (c >= 43514 && c <= 43518)))
                : (c <= 43560 || (c < 43588
                  ? (c >= 43584 && c <= 43586)
                  : c <= 43595)))))
            : (c <= 43638 || (c < 43714
              ? (c < 43701
                ? (c < 43646
                  ? c == 43642
                  : (c <= 43695 || c == 43697))
                : (c <= 43702 || (c < 43712
                  ? (c >= 43705 && c <= 43709)
                  : c <= 43712)))
              : (c <= 43714 || (c < 43762
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : c <= 43754)
                : (c <= 43764 || (c < 43785
                  ? (c >= 43777 && c <= 43782)
                  : c <= 43790)))))))
          : (c <= 43798 || (c < 64285
            ? (c < 55203
              ? (c < 43868
                ? (c < 43816
                  ? (c >= 43808 && c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))
                : (c <= 43881 || (c < 44032
                  ? (c >= 43888 && c <= 44002)
                  : c <= 44032)))
              : (c <= 55203 || (c < 64112
                ? (c < 55243
                  ? (c >= 55216 && c <= 55238)
                  : (c <= 55291 || (c >= 63744 && c <= 64109)))
                : (c <= 64217 || (c < 64275
                  ? (c >= 64256 && c <= 64262)
                  : c <= 64279)))))
            : (c <= 64285 || (c < 64326
              ? (c < 64318
                ? (c < 64298
                  ? (c >= 64287 && c <= 64296)
                  : (c <= 64310 || (c >= 64312 && c <= 64316)))
                : (c <= 64318 || (c < 64323
                  ? (c >= 64320 && c <= 64321)
                  : c <= 64324)))
              : (c <= 64433 || (c < 64914
                ? (c < 64848
                  ? (c >= 64467 && c <= 64829)
                  : c <= 64911)
                : (c <= 64967 || (c < 65136
                  ? (c >= 65008 && c <= 65019)
                  : c <= 65140)))))))))
        : (c <= 65276 || (c < 66816
          ? (c < 65664
            ? (c < 65498
              ? (c < 65474
                ? (c < 65345
                  ? (c >= 65313 && c <= 65338)
                  : (c <= 65370 || (c >= 65382 && c <= 65470)))
                : (c <= 65479 || (c < 65490
                  ? (c >= 65482 && c <= 65487)
                  : c <= 65495)))
              : (c <= 65500 || (c < 65596
                ? (c < 65549
                  ? (c >= 65536 && c <= 65547)
                  : (c <= 65574 || (c >= 65576 && c <= 65594)))
                : (c <= 65597 || (c < 65616
                  ? (c >= 65599 && c <= 65613)
                  : c <= 65629)))))
            : (c <= 65786 || (c < 66432
              ? (c < 66349
                ? (c < 66208
                  ? (c >= 66176 && c <= 66204)
                  : (c <= 66256 || (c >= 66304 && c <= 66335)))
                : (c <= 66368 || (c < 66384
                  ? (c >= 66370 && c <= 66377)
                  : c <= 66421)))
              : (c <= 66461 || (c < 66560
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : c <= 66511)
                : (c <= 66717 || (c < 66776
                  ? (c >= 66736 && c <= 66771)
                  : c <= 66811)))))))
          : (c <= 66855 || (c < 67828
            ? (c < 67594
              ? (c < 67424
                ? (c < 67072
                  ? (c >= 66864 && c <= 66915)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : c <= 67592)))
              : (c <= 67637 || (c < 67680
                ? (c < 67644
                  ? (c >= 67639 && c <= 67640)
                  : (c <= 67644 || (c >= 67647 && c <= 67669)))
                : (c <= 67702 || (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)))))
            : (c <= 67829 || (c < 68117
              ? (c < 68030
                ? (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : (c <= 67897 || (c >= 67968 && c <= 68023)))
                : (c <= 68031 || (c < 68112
                  ? c == 68096
                  : c <= 68115)))
              : (c <= 68119 || (c < 68224
                ? (c < 68192
                  ? (c >= 68121 && c <= 68149)
                  : c <= 68220)
                : (c <= 68252 || (c < 68297
                  ? (c >= 68288 && c <= 68295)
                  : c <= 68309)))))))))))))));
}

static inline bool sym_rune_literal_character_set_1(int32_t c) {
  return (c < 'f'
    ? (c < '\\'
      ? (c < '\''
        ? c == '"'
        : c <= '\'')
      : (c <= '\\' || (c >= 'a' && c <= 'b')))
    : (c <= 'f' || (c < 't'
      ? (c < 'r'
        ? c == 'n'
        : c <= 'r')
      : (c <= 't' || c == 'v'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (lookahead == '\\') ADVANCE(23);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(63)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0) ADVANCE(155);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(162);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(84);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(137);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(7);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '-') ADVANCE(163);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(137);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(9);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(137);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(120);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '\'') ADVANCE(148);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '/') ADVANCE(160);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(159);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 23:
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      if (lookahead != 0) ADVANCE(156);
      END_STATE();
    case 24:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 26:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 27:
      if (lookahead == '`') ADVANCE(152);
      if (lookahead != 0) ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(69);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(161);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(164);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 33:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 36:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(16);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      END_STATE();
    case 40:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(16);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(16);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 51:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 55:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(53);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(153);
      if (lookahead == '$') ADVANCE(88);
      if (lookahead == '\'') ADVANCE(24);
      if (lookahead == '(') ADVANCE(82);
      if (lookahead == ')') ADVANCE(83);
      if (lookahead == ',') ADVANCE(73);
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '/') ADVANCE(17);
      if (lookahead == '0') ADVANCE(138);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '=') ADVANCE(80);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(137);
      if (lookahead == '`') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(114);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(90);
      if (lookahead == 'f') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(104);
      if (lookahead == 'n') ADVANCE(111);
      if (lookahead == 'p') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(134);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead == 'w') ADVANCE(109);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '|') ADVANCE(81);
      if (lookahead == '}') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(63)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '{') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(29);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_end);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_template);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_define);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_block);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_with);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(137);
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(137);
      if (lookahead == 'd') ADVANCE(72);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(149);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(150);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(137);
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(137);
      if (lookahead == 'f') ADVANCE(68);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(137);
      if (lookahead == 'f') ADVANCE(110);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(137);
      if (lookahead == 'g') ADVANCE(97);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(137);
      if (lookahead == 'h') ADVANCE(79);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(137);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(137);
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(137);
      if (lookahead == 'i') ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(137);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(137);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(137);
      if (lookahead == 'k') ADVANCE(78);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(151);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(136);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(129);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(137);
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(137);
      if (lookahead == 'm') ADVANCE(126);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(137);
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(137);
      if (lookahead == 'n') ADVANCE(106);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(137);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(137);
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(137);
      if (lookahead == 'o') ADVANCE(92);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(137);
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(137);
      if (lookahead == 'p') ADVANCE(116);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(137);
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(137);
      if (lookahead == 's') ADVANCE(94);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(137);
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(137);
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(137);
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(137);
      if (lookahead == 't') ADVANCE(100);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(137);
      if (lookahead == 'u') ADVANCE(95);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(137);
      if (lookahead == 'a') ADVANCE(121);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(137);
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(137);
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(26);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(146);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(147);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_nil);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(137);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 12},
  [21] = {.lex_state = 12},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 12},
  [24] = {.lex_state = 12},
  [25] = {.lex_state = 12},
  [26] = {.lex_state = 12},
  [27] = {.lex_state = 12},
  [28] = {.lex_state = 12},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 12},
  [32] = {.lex_state = 12},
  [33] = {.lex_state = 12},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 12},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 12},
  [41] = {.lex_state = 12},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 12},
  [44] = {.lex_state = 12},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 12},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 12},
  [49] = {.lex_state = 12},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 12},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 12},
  [59] = {.lex_state = 12},
  [60] = {.lex_state = 12},
  [61] = {.lex_state = 12},
  [62] = {.lex_state = 12},
  [63] = {.lex_state = 12},
  [64] = {.lex_state = 12},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 12},
  [67] = {.lex_state = 12},
  [68] = {.lex_state = 12},
  [69] = {.lex_state = 12},
  [70] = {.lex_state = 14},
  [71] = {.lex_state = 14},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 5},
  [75] = {.lex_state = 5},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 8},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 8},
  [90] = {.lex_state = 8},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 11},
  [102] = {.lex_state = 13},
  [103] = {.lex_state = 11},
  [104] = {.lex_state = 12},
  [105] = {.lex_state = 13},
  [106] = {.lex_state = 12},
  [107] = {.lex_state = 14},
  [108] = {.lex_state = 14},
  [109] = {.lex_state = 5},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 5},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 64},
  [118] = {.lex_state = 64},
  [119] = {.lex_state = 64},
  [120] = {.lex_state = 64},
  [121] = {.lex_state = 64},
  [122] = {.lex_state = 64},
  [123] = {.lex_state = 64},
  [124] = {.lex_state = 64},
  [125] = {.lex_state = 64},
  [126] = {.lex_state = 64},
  [127] = {.lex_state = 64},
  [128] = {.lex_state = 64},
  [129] = {.lex_state = 64},
  [130] = {.lex_state = 64},
  [131] = {.lex_state = 64},
  [132] = {.lex_state = 64},
  [133] = {.lex_state = 64},
  [134] = {.lex_state = 64},
  [135] = {.lex_state = 64},
  [136] = {.lex_state = 64},
  [137] = {.lex_state = 64},
  [138] = {.lex_state = 64},
  [139] = {.lex_state = 64},
  [140] = {.lex_state = 64},
  [141] = {.lex_state = 64},
  [142] = {.lex_state = 64},
  [143] = {.lex_state = 64},
  [144] = {.lex_state = 64},
  [145] = {.lex_state = 64},
  [146] = {.lex_state = 64},
  [147] = {.lex_state = 64},
  [148] = {.lex_state = 64},
  [149] = {.lex_state = 64},
  [150] = {.lex_state = 64},
  [151] = {.lex_state = 64},
  [152] = {.lex_state = 64},
  [153] = {.lex_state = 64},
  [154] = {.lex_state = 64},
  [155] = {.lex_state = 64},
  [156] = {.lex_state = 64},
  [157] = {.lex_state = 64},
  [158] = {.lex_state = 64},
  [159] = {.lex_state = 64},
  [160] = {.lex_state = 64},
  [161] = {.lex_state = 64},
  [162] = {.lex_state = 64},
  [163] = {.lex_state = 64},
  [164] = {.lex_state = 64},
  [165] = {.lex_state = 64},
  [166] = {.lex_state = 64},
  [167] = {.lex_state = 64},
  [168] = {.lex_state = 64},
  [169] = {.lex_state = 64},
  [170] = {.lex_state = 64},
  [171] = {.lex_state = 64},
  [172] = {.lex_state = 64},
  [173] = {.lex_state = 64},
  [174] = {.lex_state = 64},
  [175] = {.lex_state = 64},
  [176] = {.lex_state = 64},
  [177] = {.lex_state = 64},
  [178] = {.lex_state = 64},
  [179] = {.lex_state = 64},
  [180] = {.lex_state = 64},
  [181] = {.lex_state = 64},
  [182] = {.lex_state = 64},
  [183] = {.lex_state = 64},
  [184] = {.lex_state = 64},
  [185] = {.lex_state = 64},
  [186] = {.lex_state = 64},
  [187] = {.lex_state = 64},
  [188] = {.lex_state = 64},
  [189] = {.lex_state = 64},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 6},
  [192] = {.lex_state = 5},
  [193] = {.lex_state = 5},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 5},
  [196] = {.lex_state = 5},
  [197] = {.lex_state = 6},
  [198] = {.lex_state = 5},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 5},
  [202] = {.lex_state = 5},
  [203] = {.lex_state = 5},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 5},
  [208] = {.lex_state = 5},
  [209] = {.lex_state = 5},
  [210] = {.lex_state = 5},
  [211] = {.lex_state = 5},
  [212] = {.lex_state = 5},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 0},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 1},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 1},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 1},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 64},
  [247] = {.lex_state = 64},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 64},
  [250] = {.lex_state = 64},
  [251] = {.lex_state = 64},
  [252] = {.lex_state = 64},
  [253] = {.lex_state = 64},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 64},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 64},
  [285] = {.lex_state = 64},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 64},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 64},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 64},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 64},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 64},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 64},
  [335] = {.lex_state = 64},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 64},
  [339] = {.lex_state = 64},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 64},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 64},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 64},
  [348] = {.lex_state = 64},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 64},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 64},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 64},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 64},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 64},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 64},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 64},
  [371] = {.lex_state = 64},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 64},
  [374] = {.lex_state = 64},
  [375] = {.lex_state = 64},
  [376] = {.lex_state = 64},
  [377] = {.lex_state = 64},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 64},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 64},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 64},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 64},
  [392] = {.lex_state = 64},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 64},
  [395] = {.lex_state = 64},
  [396] = {.lex_state = 64},
  [397] = {.lex_state = 64},
  [398] = {.lex_state = 64},
  [399] = {.lex_state = 64},
  [400] = {.lex_state = 64},
  [401] = {.lex_state = 64},
  [402] = {.lex_state = 64},
  [403] = {.lex_state = 64},
  [404] = {.lex_state = 64},
  [405] = {.lex_state = 64},
  [406] = {.lex_state = 64},
  [407] = {.lex_state = 64},
  [408] = {.lex_state = 64},
  [409] = {.lex_state = 64},
  [410] = {.lex_state = 64},
  [411] = {.lex_state = 64},
  [412] = {.lex_state = 64},
  [413] = {.lex_state = 64},
  [414] = {.lex_state = 64},
  [415] = {.lex_state = 64},
  [416] = {.lex_state = 64},
  [417] = {.lex_state = 64},
  [418] = {.lex_state = 64},
  [419] = {.lex_state = 10},
  [420] = {.lex_state = 64},
  [421] = {.lex_state = 64},
  [422] = {.lex_state = 64},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 64},
  [425] = {.lex_state = 64},
  [426] = {.lex_state = 10},
  [427] = {.lex_state = 64},
  [428] = {.lex_state = 64},
  [429] = {.lex_state = 64},
  [430] = {.lex_state = 64},
  [431] = {.lex_state = 64},
  [432] = {.lex_state = 64},
  [433] = {.lex_state = 64},
  [434] = {.lex_state = 64},
  [435] = {.lex_state = 64},
  [436] = {.lex_state = 64},
  [437] = {.lex_state = 64},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_pipeline_stub] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_imaginary_literal] = ACTIONS(1),
    [sym_rune_literal] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_nil] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(439),
    [sym__block] = STATE(118),
    [sym__action] = STATE(118),
    [sym__comment_action] = STATE(118),
    [sym__pipeline_action] = STATE(118),
    [sym_if_action] = STATE(118),
    [sym_range_action] = STATE(118),
    [sym_template_action] = STATE(118),
    [sym_define_action] = STATE(118),
    [sym_block_action] = STATE(118),
    [sym_with_action] = STATE(118),
    [sym__left_delimiter] = STATE(70),
    [aux_sym_template_repeat1] = STATE(118),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [3] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [4] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [5] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [6] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(57),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [7] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(61),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [8] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [9] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(69),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [10] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_end] = ACTIONS(73),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [11] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [12] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [13] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(85),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [14] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(87),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [15] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(91),
    [anon_sym_end] = ACTIONS(93),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [16] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(95),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
  [17] = {
    [sym__pipeline] = STATE(223),
    [sym_variable_definition] = STATE(223),
    [sym_assignment] = STATE(223),
    [sym_chained_pipeline] = STATE(223),
    [sym_parenthesized_pipeline] = STATE(223),
    [sym_method_call] = STATE(223),
    [sym_function_call] = STATE(223),
    [sym__expression] = STATE(223),
    [sym_selector_expression] = STATE(76),
    [sym_field] = STATE(76),
    [sym_variable] = STATE(199),
    [sym__literal] = STATE(223),
    [sym__boolean_literal] = STATE(223),
    [sym_dot] = STATE(223),
    [sym__string_literal] = STATE(223),
    [sym_interpreted_string_literal] = STATE(223),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(99),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_identifier] = ACTIONS(33),
    [sym_int_literal] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(35),
    [sym_imaginary_literal] = ACTIONS(37),
    [sym_rune_literal] = ACTIONS(37),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(37),
    [anon_sym_DQUOTE] = ACTIONS(39),
    [sym_comment] = ACTIONS(41),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(103), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [74] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [148] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [222] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [296] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [370] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [444] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [518] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [592] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [666] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [740] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [814] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [888] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [962] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1036] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1110] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1184] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1258] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1332] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1406] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1480] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1554] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1628] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1702] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1776] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1850] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1924] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1998] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2072] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2146] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2220] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2294] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2368] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2442] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2516] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2590] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2664] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2738] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2812] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2886] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2960] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3034] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3108] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3182] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3256] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3330] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3404] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3478] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3552] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3626] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3700] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3774] = 18,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3848] = 17,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(207), 1,
      anon_sym_if,
    ACTIONS(209), 1,
      anon_sym_range,
    ACTIONS(211), 1,
      anon_sym_template,
    ACTIONS(213), 1,
      anon_sym_define,
    ACTIONS(215), 1,
      anon_sym_block,
    ACTIONS(217), 1,
      anon_sym_with,
    ACTIONS(223), 1,
      sym_comment,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(221), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(219), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(230), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3919] = 17,
    ACTIONS(9), 1,
      anon_sym_if,
    ACTIONS(17), 1,
      anon_sym_range,
    ACTIONS(19), 1,
      anon_sym_template,
    ACTIONS(21), 1,
      anon_sym_define,
    ACTIONS(23), 1,
      anon_sym_block,
    ACTIONS(25), 1,
      anon_sym_with,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      sym_comment,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(223), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3990] = 12,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(229), 1,
      anon_sym_,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(204), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(225), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(237), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(202), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4050] = 11,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(243), 1,
      anon_sym_,
    STATE(193), 1,
      sym_variable,
    STATE(205), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(237), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(202), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4108] = 11,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(245), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(249), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(212), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4165] = 11,
    ACTIONS(227), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(253), 1,
      anon_sym_,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(251), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(249), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(212), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4222] = 12,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DOT,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(218), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(261), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(243), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(259), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(201), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4281] = 12,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(215), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(261), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(229), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(259), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(201), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4340] = 11,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(265), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(249), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(212), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4396] = 11,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(265), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(253), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(249), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(212), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4452] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(273), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(125), 1,
      sym__right_delimiter,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(269), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(267), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(224), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4511] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(279), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(199), 1,
      sym_variable,
    STATE(400), 1,
      sym__right_delimiter,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(277), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(275), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(222), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4570] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(285), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      sym__right_delimiter,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(283), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(281), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(231), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4629] = 13,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(293), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(199), 1,
      sym_variable,
    STATE(289), 1,
      sym__right_delimiter,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(289), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(287), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(217), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4688] = 11,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_variable,
    STATE(255), 1,
      sym_range_variable_definition,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(297), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(295), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(220), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4741] = 11,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(200), 1,
      sym_variable,
    STATE(288), 1,
      sym_range_variable_definition,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(301), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(299), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(227), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4794] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(305), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(303), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(229), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4844] = 10,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(309), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(307), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(203), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4894] = 10,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(313), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(311), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(207), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4944] = 10,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(317), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(315), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(211), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4994] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(321), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(319), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(257), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5044] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(325), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(323), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(340), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5094] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(329), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(327), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(225), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5144] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(333), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(331), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(214), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5194] = 10,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      sym_identifier,
    ACTIONS(255), 1,
      anon_sym_LPAREN,
    ACTIONS(257), 1,
      anon_sym_DOLLAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(265), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(249), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(212), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5244] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(337), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(335), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(226), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5294] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(341), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(339), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(219), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5344] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(345), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(343), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(228), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5394] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(349), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(347), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(236), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5444] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(353), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(351), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(213), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5494] = 10,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(199), 1,
      sym_variable,
    STATE(76), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(357), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(355), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(216), 13,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_parenthesized_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5544] = 3,
    ACTIONS(363), 1,
      anon_sym_DASH,
    ACTIONS(361), 8,
      anon_sym_elseif,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(359), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5575] = 3,
    ACTIONS(365), 1,
      anon_sym_DASH,
    ACTIONS(361), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(359), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5605] = 2,
    ACTIONS(369), 8,
      anon_sym_elseif,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(367), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5633] = 3,
    ACTIONS(371), 1,
      anon_sym_DASH,
    ACTIONS(361), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(359), 14,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5662] = 2,
    ACTIONS(369), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(367), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5689] = 2,
    ACTIONS(369), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(367), 14,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5715] = 3,
    ACTIONS(373), 1,
      anon_sym_DASH,
    ACTIONS(361), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(359), 13,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5743] = 2,
    ACTIONS(369), 7,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(367), 13,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5768] = 2,
    ACTIONS(377), 1,
      anon_sym_,
    ACTIONS(375), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5791] = 2,
    ACTIONS(381), 1,
      anon_sym_,
    ACTIONS(379), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5814] = 2,
    ACTIONS(385), 1,
      anon_sym_,
    ACTIONS(383), 17,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOLLAR,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5837] = 2,
    ACTIONS(389), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(387), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5859] = 2,
    ACTIONS(383), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(385), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5881] = 2,
    ACTIONS(393), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(391), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5903] = 2,
    ACTIONS(379), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(381), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5925] = 2,
    ACTIONS(375), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(377), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [5947] = 5,
    ACTIONS(395), 1,
      sym_text,
    ACTIONS(397), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(294), 1,
      aux_sym_if_action_repeat1,
    STATE(121), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [5973] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(399), 1,
      ts_builtin_sym_end,
    ACTIONS(401), 1,
      sym_text,
    STATE(70), 1,
      sym__left_delimiter,
    STATE(120), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [5999] = 5,
    ACTIONS(397), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(403), 1,
      sym_text,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(245), 1,
      aux_sym_if_action_repeat1,
    STATE(122), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6025] = 5,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
    ACTIONS(407), 1,
      sym_text,
    ACTIONS(410), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(70), 1,
      sym__left_delimiter,
    STATE(120), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6051] = 5,
    ACTIONS(397), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(413), 1,
      sym_text,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(306), 1,
      aux_sym_if_action_repeat1,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6077] = 5,
    ACTIONS(397), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(413), 1,
      sym_text,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(330), 1,
      aux_sym_if_action_repeat1,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6103] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6126] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(47), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6149] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(419), 1,
      sym_text,
    STATE(52), 1,
      sym__left_delimiter,
    STATE(142), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6172] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(421), 1,
      sym_text,
    STATE(51), 1,
      sym__left_delimiter,
    STATE(137), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6195] = 4,
    ACTIONS(410), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(423), 1,
      sym_text,
    STATE(71), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6218] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 1,
      sym_text,
    STATE(6), 1,
      sym__left_delimiter,
    STATE(135), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6241] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(428), 1,
      sym_text,
    STATE(17), 1,
      sym__left_delimiter,
    STATE(123), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6264] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(430), 1,
      sym_text,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(186), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6287] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(432), 1,
      sym_text,
    STATE(37), 1,
      sym__left_delimiter,
    STATE(152), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6310] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(434), 1,
      sym_text,
    STATE(11), 1,
      sym__left_delimiter,
    STATE(185), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6333] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6356] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(436), 1,
      sym_text,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(160), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6379] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6402] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(438), 1,
      sym_text,
    STATE(35), 1,
      sym__left_delimiter,
    STATE(148), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6425] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(56), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6448] = 4,
    ACTIONS(440), 1,
      sym_text,
    ACTIONS(442), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(71), 1,
      sym__left_delimiter,
    STATE(163), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6471] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(445), 1,
      sym_text,
    STATE(58), 1,
      sym__left_delimiter,
    STATE(144), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6494] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6517] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(447), 1,
      sym_text,
    STATE(63), 1,
      sym__left_delimiter,
    STATE(167), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6540] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(61), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6563] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6586] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(69), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6609] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(449), 1,
      sym_text,
    STATE(64), 1,
      sym__left_delimiter,
    STATE(171), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6632] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(451), 1,
      sym_text,
    STATE(57), 1,
      sym__left_delimiter,
    STATE(156), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6655] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(453), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(162), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6678] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(67), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6701] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 1,
      sym_text,
    STATE(68), 1,
      sym__left_delimiter,
    STATE(175), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6724] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(457), 1,
      sym_text,
    STATE(29), 1,
      sym__left_delimiter,
    STATE(140), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6747] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(459), 1,
      sym_text,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(181), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6770] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(21), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6793] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(461), 1,
      sym_text,
    STATE(23), 1,
      sym__left_delimiter,
    STATE(179), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6816] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 1,
      sym_text,
    STATE(24), 1,
      sym__left_delimiter,
    STATE(165), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6839] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(465), 1,
      sym_text,
    STATE(49), 1,
      sym__left_delimiter,
    STATE(169), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6862] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(66), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6885] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6908] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(467), 1,
      sym_text,
    STATE(18), 1,
      sym__left_delimiter,
    STATE(172), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6931] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(469), 1,
      sym_text,
    STATE(55), 1,
      sym__left_delimiter,
    STATE(182), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6954] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [6977] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(471), 1,
      sym_text,
    STATE(46), 1,
      sym__left_delimiter,
    STATE(124), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7000] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(50), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7023] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(473), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(71), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7046] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(475), 1,
      sym_text,
    STATE(48), 1,
      sym__left_delimiter,
    STATE(183), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7069] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(45), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7092] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(477), 1,
      sym_text,
    STATE(41), 1,
      sym__left_delimiter,
    STATE(187), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7115] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(65), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7138] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 1,
      sym_text,
    STATE(62), 1,
      sym__left_delimiter,
    STATE(189), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7161] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(40), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7184] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(481), 1,
      sym_text,
    STATE(38), 1,
      sym__left_delimiter,
    STATE(188), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7207] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(60), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7230] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7253] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(483), 1,
      sym_text,
    STATE(34), 1,
      sym__left_delimiter,
    STATE(133), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7276] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(485), 1,
      sym_text,
    STATE(22), 1,
      sym__left_delimiter,
    STATE(178), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7299] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(54), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7322] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(487), 1,
      sym_text,
    STATE(10), 1,
      sym__left_delimiter,
    STATE(177), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7345] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(7), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7368] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7391] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(53), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7414] = 4,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(489), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(157), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7437] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(43), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7460] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(33), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7483] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7506] = 4,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(491), 1,
      sym_text,
    STATE(15), 1,
      sym__left_delimiter,
    STATE(143), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7529] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7552] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(415), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(9), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7575] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(30), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7598] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(26), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7621] = 4,
    ACTIONS(413), 1,
      sym_text,
    ACTIONS(417), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(44), 1,
      sym__left_delimiter,
    STATE(127), 11,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      sym_define_action,
      sym_block_action,
      sym_with_action,
      aux_sym_template_repeat1,
  [7644] = 2,
    ACTIONS(495), 1,
      sym_identifier,
    ACTIONS(493), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7658] = 3,
    ACTIONS(493), 1,
      anon_sym_,
    ACTIONS(499), 1,
      sym_identifier,
    ACTIONS(497), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7674] = 2,
    ACTIONS(503), 1,
      anon_sym_,
    ACTIONS(501), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7687] = 4,
    ACTIONS(243), 1,
      anon_sym_,
    ACTIONS(505), 1,
      anon_sym_COLON_EQ,
    ACTIONS(507), 1,
      anon_sym_EQ,
    ACTIONS(241), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7704] = 1,
    ACTIONS(503), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7715] = 3,
    ACTIONS(509), 1,
      anon_sym_,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(251), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7729] = 3,
    ACTIONS(511), 1,
      anon_sym_,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(251), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7743] = 3,
    ACTIONS(515), 1,
      anon_sym_,
    ACTIONS(517), 1,
      sym_identifier,
    ACTIONS(513), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7757] = 3,
    ACTIONS(521), 1,
      anon_sym_,
    STATE(198), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(519), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7771] = 3,
    ACTIONS(524), 1,
      anon_sym_COLON_EQ,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(243), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7785] = 4,
    ACTIONS(524), 1,
      anon_sym_COLON_EQ,
    ACTIONS(526), 1,
      anon_sym_EQ,
    ACTIONS(528), 1,
      anon_sym_COMMA,
    ACTIONS(243), 4,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7801] = 5,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(534), 1,
      anon_sym_,
    ACTIONS(536), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(532), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7819] = 5,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      anon_sym_,
    STATE(195), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(532), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7837] = 2,
    ACTIONS(542), 1,
      anon_sym_,
    ACTIONS(540), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7848] = 2,
    ACTIONS(546), 1,
      anon_sym_,
    ACTIONS(544), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7859] = 2,
    ACTIONS(550), 1,
      anon_sym_,
    ACTIONS(548), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7870] = 2,
    ACTIONS(552), 1,
      sym_identifier,
    ACTIONS(515), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7881] = 4,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      anon_sym_,
    ACTIONS(554), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7896] = 2,
    ACTIONS(391), 1,
      anon_sym_,
    ACTIONS(393), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7907] = 2,
    ACTIONS(387), 1,
      anon_sym_,
    ACTIONS(389), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7918] = 2,
    ACTIONS(560), 1,
      anon_sym_,
    ACTIONS(558), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7929] = 4,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(564), 1,
      anon_sym_,
    ACTIONS(562), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7944] = 4,
    ACTIONS(530), 1,
      anon_sym_PIPE,
    ACTIONS(536), 1,
      anon_sym_DOT,
    ACTIONS(566), 1,
      anon_sym_,
    ACTIONS(519), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7959] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(572), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      sym__right_delimiter,
  [7975] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      sym__right_delimiter,
  [7991] = 1,
    ACTIONS(546), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [7999] = 1,
    ACTIONS(542), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8007] = 5,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(296), 1,
      sym__right_delimiter,
  [8023] = 1,
    ACTIONS(550), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8031] = 3,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(556), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8043] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(578), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(132), 1,
      sym__right_delimiter,
  [8059] = 1,
    ACTIONS(560), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8067] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(580), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(437), 1,
      sym__right_delimiter,
  [8083] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(582), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(397), 1,
      sym__right_delimiter,
  [8099] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(584), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      sym__right_delimiter,
  [8115] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(586), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(117), 1,
      sym__right_delimiter,
  [8131] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(588), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(184), 1,
      sym__right_delimiter,
  [8147] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(590), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(128), 1,
      sym__right_delimiter,
  [8163] = 3,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(564), 3,
      anon_sym_RPAREN,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8175] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(592), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(138), 1,
      sym__right_delimiter,
  [8191] = 5,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(594), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(285), 1,
      sym__right_delimiter,
  [8207] = 5,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(596), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(180), 1,
      sym__right_delimiter,
  [8223] = 3,
    ACTIONS(598), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(600), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8234] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(602), 1,
      sym_raw_string_literal,
    STATE(80), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8245] = 3,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    STATE(232), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(606), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8256] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(608), 1,
      sym_raw_string_literal,
    STATE(83), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8267] = 3,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(610), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [8278] = 3,
    ACTIONS(612), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(614), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8289] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(617), 1,
      sym_raw_string_literal,
    STATE(286), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8300] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(619), 1,
      sym_raw_string_literal,
    STATE(81), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8311] = 3,
    ACTIONS(621), 1,
      anon_sym_DQUOTE,
    STATE(241), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(623), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8322] = 3,
    ACTIONS(625), 1,
      anon_sym_DQUOTE,
    STATE(237), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(600), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [8333] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(627), 1,
      sym_raw_string_literal,
    STATE(82), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8344] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(629), 1,
      sym_raw_string_literal,
    STATE(256), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [8355] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(631), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(252), 1,
      sym__right_delimiter,
  [8365] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_if_action_repeat1,
    STATE(353), 1,
      sym__left_delimiter,
  [8375] = 2,
    ACTIONS(637), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      sym_text,
  [8383] = 2,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(639), 2,
      ts_builtin_sym_end,
      sym_text,
  [8391] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(643), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(253), 1,
      sym__right_delimiter,
  [8401] = 2,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(645), 2,
      ts_builtin_sym_end,
      sym_text,
  [8409] = 2,
    ACTIONS(651), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(649), 2,
      ts_builtin_sym_end,
      sym_text,
  [8417] = 2,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(653), 2,
      ts_builtin_sym_end,
      sym_text,
  [8425] = 2,
    ACTIONS(659), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      sym_text,
  [8433] = 2,
    ACTIONS(663), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(661), 2,
      ts_builtin_sym_end,
      sym_text,
  [8441] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(665), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(284), 1,
      sym__right_delimiter,
  [8451] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(667), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(130), 1,
      sym__right_delimiter,
  [8461] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(669), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(151), 1,
      sym__right_delimiter,
  [8471] = 3,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(671), 1,
      anon_sym_RPAREN,
  [8481] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(673), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(173), 1,
      sym__right_delimiter,
  [8491] = 2,
    ACTIONS(677), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(675), 2,
      ts_builtin_sym_end,
      sym_text,
  [8499] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(679), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(436), 1,
      sym__right_delimiter,
  [8509] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(681), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(435), 1,
      sym__right_delimiter,
  [8519] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(683), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(434), 1,
      sym__right_delimiter,
  [8529] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(685), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(395), 1,
      sym__right_delimiter,
  [8539] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(687), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(432), 1,
      sym__right_delimiter,
  [8549] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(689), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(431), 1,
      sym__right_delimiter,
  [8559] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(691), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(170), 1,
      sym__right_delimiter,
  [8569] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(693), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(394), 1,
      sym__right_delimiter,
  [8579] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(695), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(429), 1,
      sym__right_delimiter,
  [8589] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(697), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      sym__right_delimiter,
  [8599] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(699), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(428), 1,
      sym__right_delimiter,
  [8609] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(701), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(164), 1,
      sym__right_delimiter,
  [8619] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(703), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(427), 1,
      sym__right_delimiter,
  [8629] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(705), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(159), 1,
      sym__right_delimiter,
  [8639] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(707), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(425), 1,
      sym__right_delimiter,
  [8649] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(709), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(420), 1,
      sym__right_delimiter,
  [8659] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(711), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(158), 1,
      sym__right_delimiter,
  [8669] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(713), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(422), 1,
      sym__right_delimiter,
  [8679] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(715), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(155), 1,
      sym__right_delimiter,
  [8689] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(717), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(421), 1,
      sym__right_delimiter,
  [8699] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(719), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(154), 1,
      sym__right_delimiter,
  [8709] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(721), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(424), 1,
      sym__right_delimiter,
  [8719] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(723), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(147), 1,
      sym__right_delimiter,
  [8729] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(725), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(146), 1,
      sym__right_delimiter,
  [8739] = 2,
    ACTIONS(729), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      sym_text,
  [8747] = 2,
    ACTIONS(733), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      sym_text,
  [8755] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(735), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(126), 1,
      sym__right_delimiter,
  [8765] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(737), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(433), 1,
      sym__right_delimiter,
  [8775] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(739), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(129), 1,
      sym__right_delimiter,
  [8785] = 2,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(741), 2,
      ts_builtin_sym_end,
      sym_text,
  [8793] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(745), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(417), 1,
      sym__right_delimiter,
  [8803] = 2,
    ACTIONS(749), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(747), 2,
      ts_builtin_sym_end,
      sym_text,
  [8811] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(751), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(416), 1,
      sym__right_delimiter,
  [8821] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(753), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(415), 1,
      sym__right_delimiter,
  [8831] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(309), 1,
      sym__left_delimiter,
    STATE(310), 1,
      aux_sym_if_action_repeat1,
  [8841] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(755), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(414), 1,
      sym__right_delimiter,
  [8851] = 2,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      sym_text,
  [8859] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(761), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(413), 1,
      sym__right_delimiter,
  [8869] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(763), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(412), 1,
      sym__right_delimiter,
  [8879] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(765), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(411), 1,
      sym__right_delimiter,
  [8889] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(767), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(150), 1,
      sym__right_delimiter,
  [8899] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(769), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(410), 1,
      sym__right_delimiter,
  [8909] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(771), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(409), 1,
      sym__right_delimiter,
  [8919] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(773), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(325), 1,
      sym__right_delimiter,
  [8929] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(775), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(408), 1,
      sym__right_delimiter,
  [8939] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(777), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(407), 1,
      sym__right_delimiter,
  [8949] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_if_action_repeat1,
    STATE(329), 1,
      sym__left_delimiter,
  [8959] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(779), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(406), 1,
      sym__right_delimiter,
  [8969] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(781), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(405), 1,
      sym__right_delimiter,
  [8979] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(783), 1,
      anon_sym_else,
    ACTIONS(785), 1,
      anon_sym_end,
  [8989] = 3,
    ACTIONS(787), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_if_action_repeat1,
    STATE(442), 1,
      sym__left_delimiter,
  [8999] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(790), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(404), 1,
      sym__right_delimiter,
  [9009] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(792), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(403), 1,
      sym__right_delimiter,
  [9019] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(794), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(136), 1,
      sym__right_delimiter,
  [9029] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(796), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(402), 1,
      sym__right_delimiter,
  [9039] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(798), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(344), 1,
      sym__right_delimiter,
  [9049] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(800), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(131), 1,
      sym__right_delimiter,
  [9059] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(802), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(401), 1,
      sym__right_delimiter,
  [9069] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(804), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(391), 1,
      sym__right_delimiter,
  [9079] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(806), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(388), 1,
      sym__right_delimiter,
  [9089] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(808), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(418), 1,
      sym__right_delimiter,
  [9099] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(810), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(332), 1,
      sym__right_delimiter,
  [9109] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(812), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(134), 1,
      sym__right_delimiter,
  [9119] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(814), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(399), 1,
      sym__right_delimiter,
  [9129] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(816), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(383), 1,
      sym__right_delimiter,
  [9139] = 2,
    ACTIONS(820), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      sym_text,
  [9147] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(822), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(398), 1,
      sym__right_delimiter,
  [9157] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(824), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(141), 1,
      sym__right_delimiter,
  [9167] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(826), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(380), 1,
      sym__right_delimiter,
  [9177] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(828), 1,
      anon_sym_else,
    ACTIONS(830), 1,
      anon_sym_end,
  [9187] = 3,
    ACTIONS(633), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(310), 1,
      aux_sym_if_action_repeat1,
    STATE(360), 1,
      sym__left_delimiter,
  [9197] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(832), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(145), 1,
      sym__right_delimiter,
  [9207] = 2,
    ACTIONS(836), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(834), 2,
      ts_builtin_sym_end,
      sym_text,
  [9215] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(838), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(251), 1,
      sym__right_delimiter,
  [9225] = 2,
    ACTIONS(842), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(840), 2,
      ts_builtin_sym_end,
      sym_text,
  [9233] = 2,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(844), 2,
      ts_builtin_sym_end,
      sym_text,
  [9241] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(848), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(250), 1,
      sym__right_delimiter,
  [9251] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(850), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(396), 1,
      sym__right_delimiter,
  [9261] = 2,
    ACTIONS(854), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(852), 2,
      ts_builtin_sym_end,
      sym_text,
  [9269] = 2,
    ACTIONS(858), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(856), 2,
      ts_builtin_sym_end,
      sym_text,
  [9277] = 3,
    ACTIONS(568), 1,
      anon_sym_PIPE,
    ACTIONS(570), 1,
      anon_sym_DOT,
    ACTIONS(860), 1,
      anon_sym_RPAREN,
  [9287] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(862), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(249), 1,
      sym__right_delimiter,
  [9297] = 2,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 2,
      ts_builtin_sym_end,
      sym_text,
  [9305] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(868), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(377), 1,
      sym__right_delimiter,
  [9315] = 2,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(870), 2,
      ts_builtin_sym_end,
      sym_text,
  [9323] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(874), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(247), 1,
      sym__right_delimiter,
  [9333] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(876), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(246), 1,
      sym__right_delimiter,
  [9343] = 2,
    ACTIONS(880), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(878), 2,
      ts_builtin_sym_end,
      sym_text,
  [9351] = 2,
    ACTIONS(884), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(882), 2,
      ts_builtin_sym_end,
      sym_text,
  [9359] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(886), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(392), 1,
      sym__right_delimiter,
  [9369] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(888), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(259), 1,
      sym__right_delimiter,
  [9379] = 2,
    ACTIONS(892), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(890), 2,
      ts_builtin_sym_end,
      sym_text,
  [9387] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(894), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(334), 1,
      sym__right_delimiter,
  [9397] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(896), 1,
      anon_sym_else,
    ACTIONS(898), 1,
      anon_sym_end,
  [9407] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(900), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(335), 1,
      sym__right_delimiter,
  [9417] = 2,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(902), 2,
      ts_builtin_sym_end,
      sym_text,
  [9425] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(906), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(338), 1,
      sym__right_delimiter,
  [9435] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(908), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(339), 1,
      sym__right_delimiter,
  [9445] = 2,
    ACTIONS(912), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(910), 2,
      ts_builtin_sym_end,
      sym_text,
  [9453] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(914), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(342), 1,
      sym__right_delimiter,
  [9463] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(916), 1,
      anon_sym_else,
    ACTIONS(918), 1,
      anon_sym_end,
  [9473] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(920), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(347), 1,
      sym__right_delimiter,
  [9483] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(922), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(348), 1,
      sym__right_delimiter,
  [9493] = 2,
    ACTIONS(926), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(924), 2,
      ts_builtin_sym_end,
      sym_text,
  [9501] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(928), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(351), 1,
      sym__right_delimiter,
  [9511] = 2,
    ACTIONS(932), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(930), 2,
      ts_builtin_sym_end,
      sym_text,
  [9519] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(934), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(355), 1,
      sym__right_delimiter,
  [9529] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(936), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(358), 1,
      sym__right_delimiter,
  [9539] = 2,
    ACTIONS(940), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(938), 2,
      ts_builtin_sym_end,
      sym_text,
  [9547] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(942), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(363), 1,
      sym__right_delimiter,
  [9557] = 2,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(944), 2,
      ts_builtin_sym_end,
      sym_text,
  [9565] = 2,
    ACTIONS(950), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(948), 2,
      ts_builtin_sym_end,
      sym_text,
  [9573] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(952), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(365), 1,
      sym__right_delimiter,
  [9583] = 2,
    ACTIONS(956), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(954), 2,
      ts_builtin_sym_end,
      sym_text,
  [9591] = 2,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(958), 2,
      ts_builtin_sym_end,
      sym_text,
  [9599] = 2,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(962), 2,
      ts_builtin_sym_end,
      sym_text,
  [9607] = 2,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(966), 2,
      ts_builtin_sym_end,
      sym_text,
  [9615] = 2,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(970), 2,
      ts_builtin_sym_end,
      sym_text,
  [9623] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(974), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(368), 1,
      sym__right_delimiter,
  [9633] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(976), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      sym__right_delimiter,
  [9643] = 2,
    ACTIONS(980), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(978), 2,
      ts_builtin_sym_end,
      sym_text,
  [9651] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(982), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(370), 1,
      sym__right_delimiter,
  [9661] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(984), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(161), 1,
      sym__right_delimiter,
  [9671] = 2,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(986), 2,
      ts_builtin_sym_end,
      sym_text,
  [9679] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(990), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(371), 1,
      sym__right_delimiter,
  [9689] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(992), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(149), 1,
      sym__right_delimiter,
  [9699] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(994), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(373), 1,
      sym__right_delimiter,
  [9709] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(996), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(374), 1,
      sym__right_delimiter,
  [9719] = 2,
    ACTIONS(1000), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(998), 2,
      ts_builtin_sym_end,
      sym_text,
  [9727] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(1002), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(375), 1,
      sym__right_delimiter,
  [9737] = 3,
    ACTIONS(271), 1,
      anon_sym_DASH2,
    ACTIONS(1004), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(153), 1,
      sym__right_delimiter,
  [9747] = 2,
    ACTIONS(1008), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1006), 2,
      ts_builtin_sym_end,
      sym_text,
  [9755] = 2,
    ACTIONS(1012), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(1010), 2,
      ts_builtin_sym_end,
      sym_text,
  [9763] = 3,
    ACTIONS(291), 1,
      anon_sym_DASH2,
    ACTIONS(1014), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(376), 1,
      sym__right_delimiter,
  [9773] = 2,
    ACTIONS(978), 1,
      sym_text,
    ACTIONS(980), 1,
      anon_sym_LBRACE_LBRACE,
  [9780] = 2,
    ACTIONS(998), 1,
      sym_text,
    ACTIONS(1000), 1,
      anon_sym_LBRACE_LBRACE,
  [9787] = 2,
    ACTIONS(727), 1,
      sym_text,
    ACTIONS(729), 1,
      anon_sym_LBRACE_LBRACE,
  [9794] = 2,
    ACTIONS(731), 1,
      sym_text,
    ACTIONS(733), 1,
      anon_sym_LBRACE_LBRACE,
  [9801] = 2,
    ACTIONS(661), 1,
      sym_text,
    ACTIONS(663), 1,
      anon_sym_LBRACE_LBRACE,
  [9808] = 2,
    ACTIONS(657), 1,
      sym_text,
    ACTIONS(659), 1,
      anon_sym_LBRACE_LBRACE,
  [9815] = 2,
    ACTIONS(741), 1,
      sym_text,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
  [9822] = 2,
    ACTIONS(649), 1,
      sym_text,
    ACTIONS(651), 1,
      anon_sym_LBRACE_LBRACE,
  [9829] = 2,
    ACTIONS(645), 1,
      sym_text,
    ACTIONS(647), 1,
      anon_sym_LBRACE_LBRACE,
  [9836] = 2,
    ACTIONS(639), 1,
      sym_text,
    ACTIONS(641), 1,
      anon_sym_LBRACE_LBRACE,
  [9843] = 2,
    ACTIONS(635), 1,
      sym_text,
    ACTIONS(637), 1,
      anon_sym_LBRACE_LBRACE,
  [9850] = 2,
    ACTIONS(1010), 1,
      sym_text,
    ACTIONS(1012), 1,
      anon_sym_LBRACE_LBRACE,
  [9857] = 2,
    ACTIONS(675), 1,
      sym_text,
    ACTIONS(677), 1,
      anon_sym_LBRACE_LBRACE,
  [9864] = 2,
    ACTIONS(840), 1,
      sym_text,
    ACTIONS(842), 1,
      anon_sym_LBRACE_LBRACE,
  [9871] = 2,
    ACTIONS(844), 1,
      sym_text,
    ACTIONS(846), 1,
      anon_sym_LBRACE_LBRACE,
  [9878] = 2,
    ACTIONS(852), 1,
      sym_text,
    ACTIONS(854), 1,
      anon_sym_LBRACE_LBRACE,
  [9885] = 2,
    ACTIONS(856), 1,
      sym_text,
    ACTIONS(858), 1,
      anon_sym_LBRACE_LBRACE,
  [9892] = 2,
    ACTIONS(864), 1,
      sym_text,
    ACTIONS(866), 1,
      anon_sym_LBRACE_LBRACE,
  [9899] = 2,
    ACTIONS(878), 1,
      sym_text,
    ACTIONS(880), 1,
      anon_sym_LBRACE_LBRACE,
  [9906] = 2,
    ACTIONS(882), 1,
      sym_text,
    ACTIONS(884), 1,
      anon_sym_LBRACE_LBRACE,
  [9913] = 2,
    ACTIONS(890), 1,
      sym_text,
    ACTIONS(892), 1,
      anon_sym_LBRACE_LBRACE,
  [9920] = 2,
    ACTIONS(902), 1,
      sym_text,
    ACTIONS(904), 1,
      anon_sym_LBRACE_LBRACE,
  [9927] = 2,
    ACTIONS(910), 1,
      sym_text,
    ACTIONS(912), 1,
      anon_sym_LBRACE_LBRACE,
  [9934] = 2,
    ACTIONS(924), 1,
      sym_text,
    ACTIONS(926), 1,
      anon_sym_LBRACE_LBRACE,
  [9941] = 2,
    ACTIONS(653), 1,
      sym_text,
    ACTIONS(655), 1,
      anon_sym_LBRACE_LBRACE,
  [9948] = 2,
    ACTIONS(1016), 1,
      sym_identifier,
    STATE(109), 1,
      sym__field_identifier,
  [9955] = 2,
    ACTIONS(954), 1,
      sym_text,
    ACTIONS(956), 1,
      anon_sym_LBRACE_LBRACE,
  [9962] = 2,
    ACTIONS(944), 1,
      sym_text,
    ACTIONS(946), 1,
      anon_sym_LBRACE_LBRACE,
  [9969] = 2,
    ACTIONS(948), 1,
      sym_text,
    ACTIONS(950), 1,
      anon_sym_LBRACE_LBRACE,
  [9976] = 2,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    STATE(440), 1,
      sym_variable,
  [9983] = 2,
    ACTIONS(938), 1,
      sym_text,
    ACTIONS(940), 1,
      anon_sym_LBRACE_LBRACE,
  [9990] = 2,
    ACTIONS(958), 1,
      sym_text,
    ACTIONS(960), 1,
      anon_sym_LBRACE_LBRACE,
  [9997] = 2,
    ACTIONS(1018), 1,
      sym_identifier,
    STATE(116), 1,
      sym__field_identifier,
  [10004] = 2,
    ACTIONS(962), 1,
      sym_text,
    ACTIONS(964), 1,
      anon_sym_LBRACE_LBRACE,
  [10011] = 2,
    ACTIONS(966), 1,
      sym_text,
    ACTIONS(968), 1,
      anon_sym_LBRACE_LBRACE,
  [10018] = 2,
    ACTIONS(970), 1,
      sym_text,
    ACTIONS(972), 1,
      anon_sym_LBRACE_LBRACE,
  [10025] = 2,
    ACTIONS(747), 1,
      sym_text,
    ACTIONS(749), 1,
      anon_sym_LBRACE_LBRACE,
  [10032] = 2,
    ACTIONS(986), 1,
      sym_text,
    ACTIONS(988), 1,
      anon_sym_LBRACE_LBRACE,
  [10039] = 2,
    ACTIONS(834), 1,
      sym_text,
    ACTIONS(836), 1,
      anon_sym_LBRACE_LBRACE,
  [10046] = 2,
    ACTIONS(930), 1,
      sym_text,
    ACTIONS(932), 1,
      anon_sym_LBRACE_LBRACE,
  [10053] = 2,
    ACTIONS(1006), 1,
      sym_text,
    ACTIONS(1008), 1,
      anon_sym_LBRACE_LBRACE,
  [10060] = 2,
    ACTIONS(870), 1,
      sym_text,
    ACTIONS(872), 1,
      anon_sym_LBRACE_LBRACE,
  [10067] = 2,
    ACTIONS(818), 1,
      sym_text,
    ACTIONS(820), 1,
      anon_sym_LBRACE_LBRACE,
  [10074] = 2,
    ACTIONS(757), 1,
      sym_text,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
  [10081] = 1,
    ACTIONS(1020), 1,
      anon_sym_RBRACE_RBRACE,
  [10085] = 1,
    ACTIONS(1022), 1,
      ts_builtin_sym_end,
  [10089] = 1,
    ACTIONS(1024), 1,
      anon_sym_COLON_EQ,
  [10093] = 1,
    ACTIONS(1026), 1,
      anon_sym_RBRACE_RBRACE,
  [10097] = 1,
    ACTIONS(11), 1,
      anon_sym_elseif,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 74,
  [SMALL_STATE(20)] = 148,
  [SMALL_STATE(21)] = 222,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 370,
  [SMALL_STATE(24)] = 444,
  [SMALL_STATE(25)] = 518,
  [SMALL_STATE(26)] = 592,
  [SMALL_STATE(27)] = 666,
  [SMALL_STATE(28)] = 740,
  [SMALL_STATE(29)] = 814,
  [SMALL_STATE(30)] = 888,
  [SMALL_STATE(31)] = 962,
  [SMALL_STATE(32)] = 1036,
  [SMALL_STATE(33)] = 1110,
  [SMALL_STATE(34)] = 1184,
  [SMALL_STATE(35)] = 1258,
  [SMALL_STATE(36)] = 1332,
  [SMALL_STATE(37)] = 1406,
  [SMALL_STATE(38)] = 1480,
  [SMALL_STATE(39)] = 1554,
  [SMALL_STATE(40)] = 1628,
  [SMALL_STATE(41)] = 1702,
  [SMALL_STATE(42)] = 1776,
  [SMALL_STATE(43)] = 1850,
  [SMALL_STATE(44)] = 1924,
  [SMALL_STATE(45)] = 1998,
  [SMALL_STATE(46)] = 2072,
  [SMALL_STATE(47)] = 2146,
  [SMALL_STATE(48)] = 2220,
  [SMALL_STATE(49)] = 2294,
  [SMALL_STATE(50)] = 2368,
  [SMALL_STATE(51)] = 2442,
  [SMALL_STATE(52)] = 2516,
  [SMALL_STATE(53)] = 2590,
  [SMALL_STATE(54)] = 2664,
  [SMALL_STATE(55)] = 2738,
  [SMALL_STATE(56)] = 2812,
  [SMALL_STATE(57)] = 2886,
  [SMALL_STATE(58)] = 2960,
  [SMALL_STATE(59)] = 3034,
  [SMALL_STATE(60)] = 3108,
  [SMALL_STATE(61)] = 3182,
  [SMALL_STATE(62)] = 3256,
  [SMALL_STATE(63)] = 3330,
  [SMALL_STATE(64)] = 3404,
  [SMALL_STATE(65)] = 3478,
  [SMALL_STATE(66)] = 3552,
  [SMALL_STATE(67)] = 3626,
  [SMALL_STATE(68)] = 3700,
  [SMALL_STATE(69)] = 3774,
  [SMALL_STATE(70)] = 3848,
  [SMALL_STATE(71)] = 3919,
  [SMALL_STATE(72)] = 3990,
  [SMALL_STATE(73)] = 4050,
  [SMALL_STATE(74)] = 4108,
  [SMALL_STATE(75)] = 4165,
  [SMALL_STATE(76)] = 4222,
  [SMALL_STATE(77)] = 4281,
  [SMALL_STATE(78)] = 4340,
  [SMALL_STATE(79)] = 4396,
  [SMALL_STATE(80)] = 4452,
  [SMALL_STATE(81)] = 4511,
  [SMALL_STATE(82)] = 4570,
  [SMALL_STATE(83)] = 4629,
  [SMALL_STATE(84)] = 4688,
  [SMALL_STATE(85)] = 4741,
  [SMALL_STATE(86)] = 4794,
  [SMALL_STATE(87)] = 4844,
  [SMALL_STATE(88)] = 4894,
  [SMALL_STATE(89)] = 4944,
  [SMALL_STATE(90)] = 4994,
  [SMALL_STATE(91)] = 5044,
  [SMALL_STATE(92)] = 5094,
  [SMALL_STATE(93)] = 5144,
  [SMALL_STATE(94)] = 5194,
  [SMALL_STATE(95)] = 5244,
  [SMALL_STATE(96)] = 5294,
  [SMALL_STATE(97)] = 5344,
  [SMALL_STATE(98)] = 5394,
  [SMALL_STATE(99)] = 5444,
  [SMALL_STATE(100)] = 5494,
  [SMALL_STATE(101)] = 5544,
  [SMALL_STATE(102)] = 5575,
  [SMALL_STATE(103)] = 5605,
  [SMALL_STATE(104)] = 5633,
  [SMALL_STATE(105)] = 5662,
  [SMALL_STATE(106)] = 5689,
  [SMALL_STATE(107)] = 5715,
  [SMALL_STATE(108)] = 5743,
  [SMALL_STATE(109)] = 5768,
  [SMALL_STATE(110)] = 5791,
  [SMALL_STATE(111)] = 5814,
  [SMALL_STATE(112)] = 5837,
  [SMALL_STATE(113)] = 5859,
  [SMALL_STATE(114)] = 5881,
  [SMALL_STATE(115)] = 5903,
  [SMALL_STATE(116)] = 5925,
  [SMALL_STATE(117)] = 5947,
  [SMALL_STATE(118)] = 5973,
  [SMALL_STATE(119)] = 5999,
  [SMALL_STATE(120)] = 6025,
  [SMALL_STATE(121)] = 6051,
  [SMALL_STATE(122)] = 6077,
  [SMALL_STATE(123)] = 6103,
  [SMALL_STATE(124)] = 6126,
  [SMALL_STATE(125)] = 6149,
  [SMALL_STATE(126)] = 6172,
  [SMALL_STATE(127)] = 6195,
  [SMALL_STATE(128)] = 6218,
  [SMALL_STATE(129)] = 6241,
  [SMALL_STATE(130)] = 6264,
  [SMALL_STATE(131)] = 6287,
  [SMALL_STATE(132)] = 6310,
  [SMALL_STATE(133)] = 6333,
  [SMALL_STATE(134)] = 6356,
  [SMALL_STATE(135)] = 6379,
  [SMALL_STATE(136)] = 6402,
  [SMALL_STATE(137)] = 6425,
  [SMALL_STATE(138)] = 6448,
  [SMALL_STATE(139)] = 6471,
  [SMALL_STATE(140)] = 6494,
  [SMALL_STATE(141)] = 6517,
  [SMALL_STATE(142)] = 6540,
  [SMALL_STATE(143)] = 6563,
  [SMALL_STATE(144)] = 6586,
  [SMALL_STATE(145)] = 6609,
  [SMALL_STATE(146)] = 6632,
  [SMALL_STATE(147)] = 6655,
  [SMALL_STATE(148)] = 6678,
  [SMALL_STATE(149)] = 6701,
  [SMALL_STATE(150)] = 6724,
  [SMALL_STATE(151)] = 6747,
  [SMALL_STATE(152)] = 6770,
  [SMALL_STATE(153)] = 6793,
  [SMALL_STATE(154)] = 6816,
  [SMALL_STATE(155)] = 6839,
  [SMALL_STATE(156)] = 6862,
  [SMALL_STATE(157)] = 6885,
  [SMALL_STATE(158)] = 6908,
  [SMALL_STATE(159)] = 6931,
  [SMALL_STATE(160)] = 6954,
  [SMALL_STATE(161)] = 6977,
  [SMALL_STATE(162)] = 7000,
  [SMALL_STATE(163)] = 7023,
  [SMALL_STATE(164)] = 7046,
  [SMALL_STATE(165)] = 7069,
  [SMALL_STATE(166)] = 7092,
  [SMALL_STATE(167)] = 7115,
  [SMALL_STATE(168)] = 7138,
  [SMALL_STATE(169)] = 7161,
  [SMALL_STATE(170)] = 7184,
  [SMALL_STATE(171)] = 7207,
  [SMALL_STATE(172)] = 7230,
  [SMALL_STATE(173)] = 7253,
  [SMALL_STATE(174)] = 7276,
  [SMALL_STATE(175)] = 7299,
  [SMALL_STATE(176)] = 7322,
  [SMALL_STATE(177)] = 7345,
  [SMALL_STATE(178)] = 7368,
  [SMALL_STATE(179)] = 7391,
  [SMALL_STATE(180)] = 7414,
  [SMALL_STATE(181)] = 7437,
  [SMALL_STATE(182)] = 7460,
  [SMALL_STATE(183)] = 7483,
  [SMALL_STATE(184)] = 7506,
  [SMALL_STATE(185)] = 7529,
  [SMALL_STATE(186)] = 7552,
  [SMALL_STATE(187)] = 7575,
  [SMALL_STATE(188)] = 7598,
  [SMALL_STATE(189)] = 7621,
  [SMALL_STATE(190)] = 7644,
  [SMALL_STATE(191)] = 7658,
  [SMALL_STATE(192)] = 7674,
  [SMALL_STATE(193)] = 7687,
  [SMALL_STATE(194)] = 7704,
  [SMALL_STATE(195)] = 7715,
  [SMALL_STATE(196)] = 7729,
  [SMALL_STATE(197)] = 7743,
  [SMALL_STATE(198)] = 7757,
  [SMALL_STATE(199)] = 7771,
  [SMALL_STATE(200)] = 7785,
  [SMALL_STATE(201)] = 7801,
  [SMALL_STATE(202)] = 7819,
  [SMALL_STATE(203)] = 7837,
  [SMALL_STATE(204)] = 7848,
  [SMALL_STATE(205)] = 7859,
  [SMALL_STATE(206)] = 7870,
  [SMALL_STATE(207)] = 7881,
  [SMALL_STATE(208)] = 7896,
  [SMALL_STATE(209)] = 7907,
  [SMALL_STATE(210)] = 7918,
  [SMALL_STATE(211)] = 7929,
  [SMALL_STATE(212)] = 7944,
  [SMALL_STATE(213)] = 7959,
  [SMALL_STATE(214)] = 7975,
  [SMALL_STATE(215)] = 7991,
  [SMALL_STATE(216)] = 7999,
  [SMALL_STATE(217)] = 8007,
  [SMALL_STATE(218)] = 8023,
  [SMALL_STATE(219)] = 8031,
  [SMALL_STATE(220)] = 8043,
  [SMALL_STATE(221)] = 8059,
  [SMALL_STATE(222)] = 8067,
  [SMALL_STATE(223)] = 8083,
  [SMALL_STATE(224)] = 8099,
  [SMALL_STATE(225)] = 8115,
  [SMALL_STATE(226)] = 8131,
  [SMALL_STATE(227)] = 8147,
  [SMALL_STATE(228)] = 8163,
  [SMALL_STATE(229)] = 8175,
  [SMALL_STATE(230)] = 8191,
  [SMALL_STATE(231)] = 8207,
  [SMALL_STATE(232)] = 8223,
  [SMALL_STATE(233)] = 8234,
  [SMALL_STATE(234)] = 8245,
  [SMALL_STATE(235)] = 8256,
  [SMALL_STATE(236)] = 8267,
  [SMALL_STATE(237)] = 8278,
  [SMALL_STATE(238)] = 8289,
  [SMALL_STATE(239)] = 8300,
  [SMALL_STATE(240)] = 8311,
  [SMALL_STATE(241)] = 8322,
  [SMALL_STATE(242)] = 8333,
  [SMALL_STATE(243)] = 8344,
  [SMALL_STATE(244)] = 8355,
  [SMALL_STATE(245)] = 8365,
  [SMALL_STATE(246)] = 8375,
  [SMALL_STATE(247)] = 8383,
  [SMALL_STATE(248)] = 8391,
  [SMALL_STATE(249)] = 8401,
  [SMALL_STATE(250)] = 8409,
  [SMALL_STATE(251)] = 8417,
  [SMALL_STATE(252)] = 8425,
  [SMALL_STATE(253)] = 8433,
  [SMALL_STATE(254)] = 8441,
  [SMALL_STATE(255)] = 8451,
  [SMALL_STATE(256)] = 8461,
  [SMALL_STATE(257)] = 8471,
  [SMALL_STATE(258)] = 8481,
  [SMALL_STATE(259)] = 8491,
  [SMALL_STATE(260)] = 8499,
  [SMALL_STATE(261)] = 8509,
  [SMALL_STATE(262)] = 8519,
  [SMALL_STATE(263)] = 8529,
  [SMALL_STATE(264)] = 8539,
  [SMALL_STATE(265)] = 8549,
  [SMALL_STATE(266)] = 8559,
  [SMALL_STATE(267)] = 8569,
  [SMALL_STATE(268)] = 8579,
  [SMALL_STATE(269)] = 8589,
  [SMALL_STATE(270)] = 8599,
  [SMALL_STATE(271)] = 8609,
  [SMALL_STATE(272)] = 8619,
  [SMALL_STATE(273)] = 8629,
  [SMALL_STATE(274)] = 8639,
  [SMALL_STATE(275)] = 8649,
  [SMALL_STATE(276)] = 8659,
  [SMALL_STATE(277)] = 8669,
  [SMALL_STATE(278)] = 8679,
  [SMALL_STATE(279)] = 8689,
  [SMALL_STATE(280)] = 8699,
  [SMALL_STATE(281)] = 8709,
  [SMALL_STATE(282)] = 8719,
  [SMALL_STATE(283)] = 8729,
  [SMALL_STATE(284)] = 8739,
  [SMALL_STATE(285)] = 8747,
  [SMALL_STATE(286)] = 8755,
  [SMALL_STATE(287)] = 8765,
  [SMALL_STATE(288)] = 8775,
  [SMALL_STATE(289)] = 8785,
  [SMALL_STATE(290)] = 8793,
  [SMALL_STATE(291)] = 8803,
  [SMALL_STATE(292)] = 8811,
  [SMALL_STATE(293)] = 8821,
  [SMALL_STATE(294)] = 8831,
  [SMALL_STATE(295)] = 8841,
  [SMALL_STATE(296)] = 8851,
  [SMALL_STATE(297)] = 8859,
  [SMALL_STATE(298)] = 8869,
  [SMALL_STATE(299)] = 8879,
  [SMALL_STATE(300)] = 8889,
  [SMALL_STATE(301)] = 8899,
  [SMALL_STATE(302)] = 8909,
  [SMALL_STATE(303)] = 8919,
  [SMALL_STATE(304)] = 8929,
  [SMALL_STATE(305)] = 8939,
  [SMALL_STATE(306)] = 8949,
  [SMALL_STATE(307)] = 8959,
  [SMALL_STATE(308)] = 8969,
  [SMALL_STATE(309)] = 8979,
  [SMALL_STATE(310)] = 8989,
  [SMALL_STATE(311)] = 8999,
  [SMALL_STATE(312)] = 9009,
  [SMALL_STATE(313)] = 9019,
  [SMALL_STATE(314)] = 9029,
  [SMALL_STATE(315)] = 9039,
  [SMALL_STATE(316)] = 9049,
  [SMALL_STATE(317)] = 9059,
  [SMALL_STATE(318)] = 9069,
  [SMALL_STATE(319)] = 9079,
  [SMALL_STATE(320)] = 9089,
  [SMALL_STATE(321)] = 9099,
  [SMALL_STATE(322)] = 9109,
  [SMALL_STATE(323)] = 9119,
  [SMALL_STATE(324)] = 9129,
  [SMALL_STATE(325)] = 9139,
  [SMALL_STATE(326)] = 9147,
  [SMALL_STATE(327)] = 9157,
  [SMALL_STATE(328)] = 9167,
  [SMALL_STATE(329)] = 9177,
  [SMALL_STATE(330)] = 9187,
  [SMALL_STATE(331)] = 9197,
  [SMALL_STATE(332)] = 9207,
  [SMALL_STATE(333)] = 9215,
  [SMALL_STATE(334)] = 9225,
  [SMALL_STATE(335)] = 9233,
  [SMALL_STATE(336)] = 9241,
  [SMALL_STATE(337)] = 9251,
  [SMALL_STATE(338)] = 9261,
  [SMALL_STATE(339)] = 9269,
  [SMALL_STATE(340)] = 9277,
  [SMALL_STATE(341)] = 9287,
  [SMALL_STATE(342)] = 9297,
  [SMALL_STATE(343)] = 9305,
  [SMALL_STATE(344)] = 9315,
  [SMALL_STATE(345)] = 9323,
  [SMALL_STATE(346)] = 9333,
  [SMALL_STATE(347)] = 9343,
  [SMALL_STATE(348)] = 9351,
  [SMALL_STATE(349)] = 9359,
  [SMALL_STATE(350)] = 9369,
  [SMALL_STATE(351)] = 9379,
  [SMALL_STATE(352)] = 9387,
  [SMALL_STATE(353)] = 9397,
  [SMALL_STATE(354)] = 9407,
  [SMALL_STATE(355)] = 9417,
  [SMALL_STATE(356)] = 9425,
  [SMALL_STATE(357)] = 9435,
  [SMALL_STATE(358)] = 9445,
  [SMALL_STATE(359)] = 9453,
  [SMALL_STATE(360)] = 9463,
  [SMALL_STATE(361)] = 9473,
  [SMALL_STATE(362)] = 9483,
  [SMALL_STATE(363)] = 9493,
  [SMALL_STATE(364)] = 9501,
  [SMALL_STATE(365)] = 9511,
  [SMALL_STATE(366)] = 9519,
  [SMALL_STATE(367)] = 9529,
  [SMALL_STATE(368)] = 9539,
  [SMALL_STATE(369)] = 9547,
  [SMALL_STATE(370)] = 9557,
  [SMALL_STATE(371)] = 9565,
  [SMALL_STATE(372)] = 9573,
  [SMALL_STATE(373)] = 9583,
  [SMALL_STATE(374)] = 9591,
  [SMALL_STATE(375)] = 9599,
  [SMALL_STATE(376)] = 9607,
  [SMALL_STATE(377)] = 9615,
  [SMALL_STATE(378)] = 9623,
  [SMALL_STATE(379)] = 9633,
  [SMALL_STATE(380)] = 9643,
  [SMALL_STATE(381)] = 9651,
  [SMALL_STATE(382)] = 9661,
  [SMALL_STATE(383)] = 9671,
  [SMALL_STATE(384)] = 9679,
  [SMALL_STATE(385)] = 9689,
  [SMALL_STATE(386)] = 9699,
  [SMALL_STATE(387)] = 9709,
  [SMALL_STATE(388)] = 9719,
  [SMALL_STATE(389)] = 9727,
  [SMALL_STATE(390)] = 9737,
  [SMALL_STATE(391)] = 9747,
  [SMALL_STATE(392)] = 9755,
  [SMALL_STATE(393)] = 9763,
  [SMALL_STATE(394)] = 9773,
  [SMALL_STATE(395)] = 9780,
  [SMALL_STATE(396)] = 9787,
  [SMALL_STATE(397)] = 9794,
  [SMALL_STATE(398)] = 9801,
  [SMALL_STATE(399)] = 9808,
  [SMALL_STATE(400)] = 9815,
  [SMALL_STATE(401)] = 9822,
  [SMALL_STATE(402)] = 9829,
  [SMALL_STATE(403)] = 9836,
  [SMALL_STATE(404)] = 9843,
  [SMALL_STATE(405)] = 9850,
  [SMALL_STATE(406)] = 9857,
  [SMALL_STATE(407)] = 9864,
  [SMALL_STATE(408)] = 9871,
  [SMALL_STATE(409)] = 9878,
  [SMALL_STATE(410)] = 9885,
  [SMALL_STATE(411)] = 9892,
  [SMALL_STATE(412)] = 9899,
  [SMALL_STATE(413)] = 9906,
  [SMALL_STATE(414)] = 9913,
  [SMALL_STATE(415)] = 9920,
  [SMALL_STATE(416)] = 9927,
  [SMALL_STATE(417)] = 9934,
  [SMALL_STATE(418)] = 9941,
  [SMALL_STATE(419)] = 9948,
  [SMALL_STATE(420)] = 9955,
  [SMALL_STATE(421)] = 9962,
  [SMALL_STATE(422)] = 9969,
  [SMALL_STATE(423)] = 9976,
  [SMALL_STATE(424)] = 9983,
  [SMALL_STATE(425)] = 9990,
  [SMALL_STATE(426)] = 9997,
  [SMALL_STATE(427)] = 10004,
  [SMALL_STATE(428)] = 10011,
  [SMALL_STATE(429)] = 10018,
  [SMALL_STATE(430)] = 10025,
  [SMALL_STATE(431)] = 10032,
  [SMALL_STATE(432)] = 10039,
  [SMALL_STATE(433)] = 10046,
  [SMALL_STATE(434)] = 10053,
  [SMALL_STATE(435)] = 10060,
  [SMALL_STATE(436)] = 10067,
  [SMALL_STATE(437)] = 10074,
  [SMALL_STATE(438)] = 10081,
  [SMALL_STATE(439)] = 10085,
  [SMALL_STATE(440)] = 10089,
  [SMALL_STATE(441)] = 10093,
  [SMALL_STATE(442)] = 10097,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(264),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [249] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [355] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 2),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 2),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [397] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [407] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(120),
  [410] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(107),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(127),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 11), SHIFT_REPEAT(107),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [457] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [463] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 19),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [497] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [521] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(94),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [532] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [540] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_pipeline, 3),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_pipeline, 3),
  [544] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [558] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pipeline, 3),
  [560] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pipeline, 3),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [604] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_variable_definition, 5, .production_id = 13),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [614] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(237),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [625] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 25),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 25),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 20),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 20),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [645] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 27),
  [651] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 27),
  [653] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [655] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 25),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 25),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 29),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 29),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [669] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 22),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 22),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [715] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [723] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [725] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [743] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [747] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_delimiter, 2),
  [749] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_delimiter, 2),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 9),
  [759] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 9),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [787] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 10), SHIFT_REPEAT(101),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 11),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 11),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [828] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [836] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [840] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [842] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [844] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [846] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 16),
  [854] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 16),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [858] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [864] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [866] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7),
  [872] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 14),
  [880] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 14),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 22),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 22),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 11),
  [892] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 11),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [896] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 12),
  [904] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 12),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10),
  [912] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [916] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [924] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 10, .production_id = 11),
  [926] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 10, .production_id = 11),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [930] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 21),
  [932] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 21),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 20),
  [940] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 20),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [944] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 14),
  [946] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 14),
  [948] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 18),
  [950] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 18),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [954] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 9),
  [956] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 9),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 18),
  [960] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 18),
  [962] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [964] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [966] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 16),
  [968] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 16),
  [970] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [972] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [978] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 14),
  [980] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 14),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [986] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 11),
  [988] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 11),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [998] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [1000] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1006] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 12),
  [1008] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 12),
  [1010] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 14),
  [1012] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 14),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1022] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_gotmpl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
