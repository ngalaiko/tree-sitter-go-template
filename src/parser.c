#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 433
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 77
#define ALIAS_COUNT 1
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 30

enum {
  aux_sym_text_token1 = 1,
  aux_sym_text_token2 = 2,
  aux_sym_text_token3 = 3,
  anon_sym_if = 4,
  anon_sym_elseif = 5,
  anon_sym_else = 6,
  anon_sym_end = 7,
  anon_sym_COMMA = 8,
  anon_sym_COLON_EQ = 9,
  anon_sym_range = 10,
  anon_sym_template = 11,
  anon_sym_define = 12,
  anon_sym_block = 13,
  anon_sym_with = 14,
  anon_sym_EQ = 15,
  anon_sym_PIPE = 16,
  anon_sym_LPAREN = 17,
  anon_sym_RPAREN = 18,
  anon_sym_ = 19,
  sym_pipeline_stub = 20,
  anon_sym_DOT = 21,
  anon_sym_DOLLAR = 22,
  sym_identifier = 23,
  sym_int_literal = 24,
  sym_float_literal = 25,
  sym_imaginary_literal = 26,
  sym_rune_literal = 27,
  sym_true = 28,
  sym_false = 29,
  sym_nil = 30,
  sym_raw_string_literal = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_interpreted_string_literal_token1 = 33,
  sym_escape_sequence = 34,
  sym_comment = 35,
  anon_sym_LBRACE_LBRACE = 36,
  anon_sym_LBRACE_LBRACE_DASH = 37,
  anon_sym_RBRACE_RBRACE = 38,
  anon_sym_DASH_RBRACE_RBRACE = 39,
  sym_template = 40,
  sym__block = 41,
  sym_text = 42,
  sym__action = 43,
  sym__comment_action = 44,
  sym__pipeline_action = 45,
  sym_if_action = 46,
  sym_range_variable_definition = 47,
  sym_range_action = 48,
  sym_template_action = 49,
  sym_define_action = 50,
  sym_block_action = 51,
  sym_with_action = 52,
  sym__pipeline = 53,
  sym_variable_definition = 54,
  sym_assignment = 55,
  sym_chained_pipeline = 56,
  sym_parenthesized_pipeline = 57,
  sym_method_call = 58,
  sym_function_call = 59,
  sym_argument_list = 60,
  sym__expression = 61,
  sym_selector_expression = 62,
  sym__field_identifier = 63,
  sym_field = 64,
  sym_variable = 65,
  sym__literal = 66,
  sym__boolean_literal = 67,
  sym_dot = 68,
  sym__string_literal = 69,
  sym_interpreted_string_literal = 70,
  sym__left_delimiter = 71,
  sym__right_delimiter = 72,
  aux_sym_template_repeat1 = 73,
  aux_sym_if_action_repeat1 = 74,
  aux_sym_argument_list_repeat1 = 75,
  aux_sym_interpreted_string_literal_repeat1 = 76,
  alias_sym_field_identifier = 77,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [aux_sym_text_token3] = "text_token3",
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
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym_text] = "text",
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
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [aux_sym_text_token3] = aux_sym_text_token3,
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
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym_text] = sym_text,
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
  [aux_sym_text_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_token3] = {
    .visible = false,
    .named = false,
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
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE] = {
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
  [sym_text] = {
    .visible = true,
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
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(83);
      if (lookahead == '\\') ADVANCE(20);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\\') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0) ADVANCE(158);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(83);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(87);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(123);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '\'') ADVANCE(151);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(83);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(140);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(16);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 15:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead == '/') ADVANCE(162);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(15);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(43);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '_') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(77);
      END_STATE();
    case 20:
      if (lookahead == 'U') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(53);
      if (lookahead == 'x') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (lookahead != 0) ADVANCE(159);
      END_STATE();
    case 21:
      if (lookahead == '\\') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(12);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 24:
      if (lookahead == '`') ADVANCE(155);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(72);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '{') ADVANCE(164);
      if (lookahead == '}') ADVANCE(68);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 28:
      if (lookahead == '}') ADVANCE(166);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(167);
      END_STATE();
    case 30:
      if (lookahead == '}') ADVANCE(69);
      END_STATE();
    case 31:
      if (lookahead == '}') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
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
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 36:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(12);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      END_STATE();
    case 40:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead == 'U') ADVANCE(62);
      if (lookahead == 'u') ADVANCE(54);
      if (lookahead == 'x') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(39);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(12);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
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
      if (lookahead == '"') ADVANCE(156);
      if (lookahead == '$') ADVANCE(91);
      if (lookahead == '\'') ADVANCE(21);
      if (lookahead == '(') ADVANCE(85);
      if (lookahead == ')') ADVANCE(86);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '0') ADVANCE(141);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == '=') ADVANCE(83);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(140);
      if (lookahead == '`') ADVANCE(24);
      if (lookahead == 'b') ADVANCE(117);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(138);
      if (lookahead == 'i') ADVANCE(107);
      if (lookahead == 'n') ADVANCE(114);
      if (lookahead == 'p') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(137);
      if (lookahead == 't') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(112);
      if (lookahead == '{') ADVANCE(27);
      if (lookahead == '|') ADVANCE(84);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '{') ADVANCE(27);
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
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_text_token3);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_text_token3);
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '}') ADVANCE(2);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(26);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_end);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_template);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_define);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_block);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_with);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(140);
      if (lookahead == 'c') ADVANCE(116);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(140);
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(153);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(140);
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(140);
      if (lookahead == 'f') ADVANCE(71);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(140);
      if (lookahead == 'f') ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(140);
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(140);
      if (lookahead == 'h') ADVANCE(82);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(125);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(140);
      if (lookahead == 'i') ADVANCE(126);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(140);
      if (lookahead == 'k') ADVANCE(81);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(139);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(140);
      if (lookahead == 'l') ADVANCE(115);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(140);
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(140);
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(140);
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(140);
      if (lookahead == 'p') ADVANCE(106);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(140);
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(140);
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(97);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(140);
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(140);
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(140);
      if (lookahead == 't') ADVANCE(103);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(140);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_26(lookahead)) ADVANCE(140);
      if (lookahead == 'a') ADVANCE(135);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(23);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(18);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(149);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(34);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(32);
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'i') ADVANCE(150);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_nil);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(140);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 7},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 8},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 8},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 8},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 8},
  [56] = {.lex_state = 8},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 10},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 4},
  [73] = {.lex_state = 4},
  [74] = {.lex_state = 4},
  [75] = {.lex_state = 4},
  [76] = {.lex_state = 6},
  [77] = {.lex_state = 6},
  [78] = {.lex_state = 6},
  [79] = {.lex_state = 6},
  [80] = {.lex_state = 6},
  [81] = {.lex_state = 6},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 6},
  [100] = {.lex_state = 6},
  [101] = {.lex_state = 64},
  [102] = {.lex_state = 64},
  [103] = {.lex_state = 64},
  [104] = {.lex_state = 64},
  [105] = {.lex_state = 64},
  [106] = {.lex_state = 64},
  [107] = {.lex_state = 64},
  [108] = {.lex_state = 64},
  [109] = {.lex_state = 64},
  [110] = {.lex_state = 64},
  [111] = {.lex_state = 64},
  [112] = {.lex_state = 64},
  [113] = {.lex_state = 64},
  [114] = {.lex_state = 64},
  [115] = {.lex_state = 64},
  [116] = {.lex_state = 64},
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
  [147] = {.lex_state = 4},
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
  [161] = {.lex_state = 4},
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
  [175] = {.lex_state = 4},
  [176] = {.lex_state = 64},
  [177] = {.lex_state = 6},
  [178] = {.lex_state = 6},
  [179] = {.lex_state = 6},
  [180] = {.lex_state = 6},
  [181] = {.lex_state = 6},
  [182] = {.lex_state = 13},
  [183] = {.lex_state = 5},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 4},
  [186] = {.lex_state = 4},
  [187] = {.lex_state = 4},
  [188] = {.lex_state = 4},
  [189] = {.lex_state = 4},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 4},
  [192] = {.lex_state = 4},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 5},
  [195] = {.lex_state = 64},
  [196] = {.lex_state = 64},
  [197] = {.lex_state = 64},
  [198] = {.lex_state = 64},
  [199] = {.lex_state = 64},
  [200] = {.lex_state = 64},
  [201] = {.lex_state = 64},
  [202] = {.lex_state = 64},
  [203] = {.lex_state = 64},
  [204] = {.lex_state = 64},
  [205] = {.lex_state = 64},
  [206] = {.lex_state = 64},
  [207] = {.lex_state = 64},
  [208] = {.lex_state = 64},
  [209] = {.lex_state = 64},
  [210] = {.lex_state = 64},
  [211] = {.lex_state = 64},
  [212] = {.lex_state = 13},
  [213] = {.lex_state = 64},
  [214] = {.lex_state = 64},
  [215] = {.lex_state = 64},
  [216] = {.lex_state = 64},
  [217] = {.lex_state = 4},
  [218] = {.lex_state = 64},
  [219] = {.lex_state = 64},
  [220] = {.lex_state = 64},
  [221] = {.lex_state = 64},
  [222] = {.lex_state = 64},
  [223] = {.lex_state = 64},
  [224] = {.lex_state = 4},
  [225] = {.lex_state = 64},
  [226] = {.lex_state = 64},
  [227] = {.lex_state = 64},
  [228] = {.lex_state = 64},
  [229] = {.lex_state = 64},
  [230] = {.lex_state = 64},
  [231] = {.lex_state = 64},
  [232] = {.lex_state = 4},
  [233] = {.lex_state = 64},
  [234] = {.lex_state = 64},
  [235] = {.lex_state = 4},
  [236] = {.lex_state = 64},
  [237] = {.lex_state = 64},
  [238] = {.lex_state = 64},
  [239] = {.lex_state = 64},
  [240] = {.lex_state = 64},
  [241] = {.lex_state = 4},
  [242] = {.lex_state = 4},
  [243] = {.lex_state = 4},
  [244] = {.lex_state = 4},
  [245] = {.lex_state = 4},
  [246] = {.lex_state = 64},
  [247] = {.lex_state = 64},
  [248] = {.lex_state = 64},
  [249] = {.lex_state = 64},
  [250] = {.lex_state = 64},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 64},
  [254] = {.lex_state = 64},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 64},
  [260] = {.lex_state = 64},
  [261] = {.lex_state = 64},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 64},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 64},
  [267] = {.lex_state = 64},
  [268] = {.lex_state = 64},
  [269] = {.lex_state = 64},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 64},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 64},
  [274] = {.lex_state = 64},
  [275] = {.lex_state = 64},
  [276] = {.lex_state = 64},
  [277] = {.lex_state = 64},
  [278] = {.lex_state = 64},
  [279] = {.lex_state = 64},
  [280] = {.lex_state = 64},
  [281] = {.lex_state = 64},
  [282] = {.lex_state = 64},
  [283] = {.lex_state = 64},
  [284] = {.lex_state = 64},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 64},
  [289] = {.lex_state = 64},
  [290] = {.lex_state = 64},
  [291] = {.lex_state = 64},
  [292] = {.lex_state = 64},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 64},
  [295] = {.lex_state = 64},
  [296] = {.lex_state = 64},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 64},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 64},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 64},
  [304] = {.lex_state = 64},
  [305] = {.lex_state = 64},
  [306] = {.lex_state = 1},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 1},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 1},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 1},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 13},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 13},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [aux_sym_text_token3] = ACTIONS(1),
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
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(432),
    [sym__block] = STATE(101),
    [sym_text] = STATE(101),
    [sym__action] = STATE(101),
    [sym__comment_action] = STATE(101),
    [sym__pipeline_action] = STATE(101),
    [sym_if_action] = STATE(101),
    [sym_range_action] = STATE(101),
    [sym_template_action] = STATE(101),
    [sym_define_action] = STATE(101),
    [sym_block_action] = STATE(101),
    [sym_with_action] = STATE(101),
    [sym__left_delimiter] = STATE(70),
    [aux_sym_template_repeat1] = STATE(101),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_text_token1] = ACTIONS(5),
    [aux_sym_text_token2] = ACTIONS(7),
    [aux_sym_text_token3] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(9),
  },
  [2] = {
    [sym__pipeline] = STATE(302),
    [sym_variable_definition] = STATE(302),
    [sym_assignment] = STATE(302),
    [sym_chained_pipeline] = STATE(302),
    [sym_parenthesized_pipeline] = STATE(302),
    [sym_method_call] = STATE(302),
    [sym_function_call] = STATE(302),
    [sym__expression] = STATE(302),
    [sym_selector_expression] = STATE(77),
    [sym_field] = STATE(77),
    [sym_variable] = STATE(193),
    [sym__literal] = STATE(302),
    [sym__boolean_literal] = STATE(302),
    [sym_dot] = STATE(302),
    [sym__string_literal] = STATE(302),
    [sym_interpreted_string_literal] = STATE(302),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(15),
    [anon_sym_end] = ACTIONS(17),
    [anon_sym_range] = ACTIONS(19),
    [anon_sym_template] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_block] = ACTIONS(25),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_int_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(37),
    [sym_imaginary_literal] = ACTIONS(39),
    [sym_rune_literal] = ACTIONS(39),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [3] = {
    [sym__pipeline] = STATE(302),
    [sym_variable_definition] = STATE(302),
    [sym_assignment] = STATE(302),
    [sym_chained_pipeline] = STATE(302),
    [sym_parenthesized_pipeline] = STATE(302),
    [sym_method_call] = STATE(302),
    [sym_function_call] = STATE(302),
    [sym__expression] = STATE(302),
    [sym_selector_expression] = STATE(77),
    [sym_field] = STATE(77),
    [sym_variable] = STATE(193),
    [sym__literal] = STATE(302),
    [sym__boolean_literal] = STATE(302),
    [sym_dot] = STATE(302),
    [sym__string_literal] = STATE(302),
    [sym_interpreted_string_literal] = STATE(302),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_range] = ACTIONS(19),
    [anon_sym_template] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_block] = ACTIONS(25),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_int_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(37),
    [sym_imaginary_literal] = ACTIONS(39),
    [sym_rune_literal] = ACTIONS(39),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [4] = {
    [sym__pipeline] = STATE(302),
    [sym_variable_definition] = STATE(302),
    [sym_assignment] = STATE(302),
    [sym_chained_pipeline] = STATE(302),
    [sym_parenthesized_pipeline] = STATE(302),
    [sym_method_call] = STATE(302),
    [sym_function_call] = STATE(302),
    [sym__expression] = STATE(302),
    [sym_selector_expression] = STATE(77),
    [sym_field] = STATE(77),
    [sym_variable] = STATE(193),
    [sym__literal] = STATE(302),
    [sym__boolean_literal] = STATE(302),
    [sym_dot] = STATE(302),
    [sym__string_literal] = STATE(302),
    [sym_interpreted_string_literal] = STATE(302),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(51),
    [anon_sym_range] = ACTIONS(19),
    [anon_sym_template] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_block] = ACTIONS(25),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_int_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(37),
    [sym_imaginary_literal] = ACTIONS(39),
    [sym_rune_literal] = ACTIONS(39),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
  [5] = {
    [sym__pipeline] = STATE(302),
    [sym_variable_definition] = STATE(302),
    [sym_assignment] = STATE(302),
    [sym_chained_pipeline] = STATE(302),
    [sym_parenthesized_pipeline] = STATE(302),
    [sym_method_call] = STATE(302),
    [sym_function_call] = STATE(302),
    [sym__expression] = STATE(302),
    [sym_selector_expression] = STATE(77),
    [sym_field] = STATE(77),
    [sym_variable] = STATE(193),
    [sym__literal] = STATE(302),
    [sym__boolean_literal] = STATE(302),
    [sym_dot] = STATE(302),
    [sym__string_literal] = STATE(302),
    [sym_interpreted_string_literal] = STATE(302),
    [anon_sym_if] = ACTIONS(11),
    [anon_sym_elseif] = ACTIONS(13),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(55),
    [anon_sym_range] = ACTIONS(19),
    [anon_sym_template] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(23),
    [anon_sym_block] = ACTIONS(25),
    [anon_sym_with] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_DOLLAR] = ACTIONS(33),
    [sym_identifier] = ACTIONS(35),
    [sym_int_literal] = ACTIONS(37),
    [sym_float_literal] = ACTIONS(37),
    [sym_imaginary_literal] = ACTIONS(39),
    [sym_rune_literal] = ACTIONS(39),
    [sym_true] = ACTIONS(37),
    [sym_false] = ACTIONS(37),
    [sym_nil] = ACTIONS(37),
    [sym_raw_string_literal] = ACTIONS(39),
    [anon_sym_DQUOTE] = ACTIONS(41),
    [sym_comment] = ACTIONS(43),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(57), 1,
      anon_sym_else,
    ACTIONS(59), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [77] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(61), 1,
      anon_sym_else,
    ACTIONS(63), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [154] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(65), 1,
      anon_sym_else,
    ACTIONS(67), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [231] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(69), 1,
      anon_sym_else,
    ACTIONS(71), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [308] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(73), 1,
      anon_sym_else,
    ACTIONS(75), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [385] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(77), 1,
      anon_sym_else,
    ACTIONS(79), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [462] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(81), 1,
      anon_sym_else,
    ACTIONS(83), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [539] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(85), 1,
      anon_sym_else,
    ACTIONS(87), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [616] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(89), 1,
      anon_sym_else,
    ACTIONS(91), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [693] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(93), 1,
      anon_sym_else,
    ACTIONS(95), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [770] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_else,
    ACTIONS(99), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [847] = 19,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_else,
    ACTIONS(103), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [924] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [998] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1072] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1146] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1220] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1294] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(115), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1368] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1442] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(119), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1516] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1590] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1664] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1738] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1812] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1886] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [1960] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(133), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2034] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2108] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2182] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2256] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2330] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2404] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2478] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2552] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2626] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2700] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2774] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2848] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2922] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [2996] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3070] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3144] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3218] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3292] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3366] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3440] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3514] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3588] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3662] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3736] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3810] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3884] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [3958] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4032] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4106] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4180] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4254] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4328] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(197), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4402] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4476] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4550] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(203), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4624] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4698] = 18,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_end,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4772] = 17,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(209), 1,
      anon_sym_if,
    ACTIONS(211), 1,
      anon_sym_range,
    ACTIONS(213), 1,
      anon_sym_template,
    ACTIONS(215), 1,
      anon_sym_define,
    ACTIONS(217), 1,
      anon_sym_block,
    ACTIONS(219), 1,
      anon_sym_with,
    ACTIONS(225), 1,
      sym_comment,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(223), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(221), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(287), 13,
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
  [4843] = 17,
    ACTIONS(11), 1,
      anon_sym_if,
    ACTIONS(19), 1,
      anon_sym_range,
    ACTIONS(21), 1,
      anon_sym_template,
    ACTIONS(23), 1,
      anon_sym_define,
    ACTIONS(25), 1,
      anon_sym_block,
    ACTIONS(27), 1,
      anon_sym_with,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      sym_comment,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(39), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(37), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 13,
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
  [4914] = 12,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(231), 1,
      anon_sym_,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(242), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(227), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(239), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(188), 13,
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
  [4974] = 11,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(245), 1,
      anon_sym_,
    STATE(186), 1,
      sym_variable,
    STATE(245), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(243), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(239), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(188), 13,
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
  [5032] = 11,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(249), 1,
      anon_sym_,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(247), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(251), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
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
  [5089] = 11,
    ACTIONS(229), 1,
      anon_sym_LPAREN,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(235), 1,
      anon_sym_DOLLAR,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(241), 1,
      anon_sym_DQUOTE,
    ACTIONS(255), 1,
      anon_sym_,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(253), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(251), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
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
  [5146] = 12,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(255), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(263), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(231), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(261), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(187), 13,
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
  [5205] = 12,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(243), 1,
      anon_sym_DOT,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(252), 1,
      sym_argument_list,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(263), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(245), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(261), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(187), 13,
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
  [5264] = 11,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(267), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(255), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(251), 5,
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
  [5320] = 11,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(267), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(249), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    ACTIONS(251), 5,
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
  [5376] = 12,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(248), 1,
      sym__right_delimiter,
    ACTIONS(273), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(271), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(269), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(285), 13,
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
  [5433] = 12,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(115), 1,
      sym__right_delimiter,
    STATE(193), 1,
      sym_variable,
    ACTIONS(279), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(77), 2,
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
    STATE(299), 13,
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
  [5490] = 12,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(143), 1,
      sym__right_delimiter,
    STATE(193), 1,
      sym_variable,
    ACTIONS(285), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(77), 2,
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
  [5547] = 12,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(221), 1,
      sym__right_delimiter,
    ACTIONS(291), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
    STATE(77), 2,
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
    STATE(251), 13,
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
  [5604] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_variable,
    STATE(403), 1,
      sym_range_variable_definition,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(295), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(293), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(270), 13,
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
  [5657] = 11,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(190), 1,
      sym_variable,
    STATE(410), 1,
      sym_range_variable_definition,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(299), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(297), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(286), 13,
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
  [5710] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(303), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(301), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(293), 13,
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
  [5760] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(307), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(305), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(272), 13,
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
  [5810] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(311), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(309), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(256), 13,
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
  [5860] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(315), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(313), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 13,
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
  [5910] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(319), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(317), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(297), 13,
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
  [5960] = 10,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(323), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(321), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(232), 13,
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
  [6010] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(327), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(325), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(331), 13,
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
  [6060] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(331), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(329), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(399), 13,
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
  [6110] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(335), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(333), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(265), 13,
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
  [6160] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(339), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(337), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(263), 13,
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
  [6210] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(343), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(341), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(262), 13,
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
  [6260] = 10,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(347), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(345), 5,
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
  [6310] = 10,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      anon_sym_DOT,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_variable,
    STATE(77), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(351), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(349), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(313), 13,
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
  [6360] = 10,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(355), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(353), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(235), 13,
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
  [6410] = 10,
    ACTIONS(233), 1,
      anon_sym_DOT,
    ACTIONS(237), 1,
      sym_identifier,
    ACTIONS(257), 1,
      anon_sym_LPAREN,
    ACTIONS(259), 1,
      anon_sym_DOLLAR,
    ACTIONS(265), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym_variable,
    STATE(73), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(267), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(251), 5,
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
  [6460] = 6,
    ACTIONS(5), 1,
      aux_sym_text_token1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
    STATE(70), 1,
      sym__left_delimiter,
    ACTIONS(7), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(9), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(102), 12,
      sym__block,
      sym_text,
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
  [6492] = 6,
    ACTIONS(359), 1,
      ts_builtin_sym_end,
    ACTIONS(361), 1,
      aux_sym_text_token1,
    STATE(70), 1,
      sym__left_delimiter,
    ACTIONS(364), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(367), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(102), 12,
      sym__block,
      sym_text,
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
  [6524] = 6,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(319), 1,
      aux_sym_if_action_repeat1,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(374), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(104), 12,
      sym__block,
      sym_text,
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
  [6556] = 6,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(317), 1,
      aux_sym_if_action_repeat1,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(376), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6588] = 6,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(318), 1,
      aux_sym_if_action_repeat1,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(378), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(106), 12,
      sym__block,
      sym_text,
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
  [6620] = 6,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(321), 1,
      aux_sym_if_action_repeat1,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(380), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6652] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(7), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(382), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(124), 12,
      sym__block,
      sym_text,
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
  [6681] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(36), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(384), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(176), 12,
      sym__block,
      sym_text,
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
  [6710] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(42), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(386), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6739] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(20), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(388), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6768] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(46), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(390), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6797] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(8), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(392), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(125), 12,
      sym__block,
      sym_text,
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
  [6826] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(58), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(394), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(126), 12,
      sym__block,
      sym_text,
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
  [6855] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(18), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(396), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(145), 12,
      sym__block,
      sym_text,
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
  [6884] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(61), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(398), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(131), 12,
      sym__block,
      sym_text,
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
  [6913] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(60), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(400), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(135), 12,
      sym__block,
      sym_text,
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
  [6942] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(25), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(402), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [6971] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(53), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(404), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(149), 12,
      sym__block,
      sym_text,
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
  [7000] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(30), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(406), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(110), 12,
      sym__block,
      sym_text,
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
  [7029] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(32), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(408), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7058] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(9), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(410), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(140), 12,
      sym__block,
      sym_text,
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
  [7087] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(14), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(412), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7116] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(15), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(414), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7145] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(10), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(416), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7174] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(11), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(418), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7203] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(66), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(420), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7232] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(48), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(422), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7261] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(49), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(424), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(157), 12,
      sym__block,
      sym_text,
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
  [7290] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(67), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(426), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(144), 12,
      sym__block,
      sym_text,
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
  [7319] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(35), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(428), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7348] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(69), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(430), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7377] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(71), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(432), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(160), 12,
      sym__block,
      sym_text,
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
  [7406] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(26), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(435), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7435] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(23), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(437), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(127), 12,
      sym__block,
      sym_text,
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
  [7464] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(45), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(439), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7493] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(44), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(441), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(164), 12,
      sym__block,
      sym_text,
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
  [7522] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(22), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(443), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7551] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(31), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(445), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7580] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(50), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(447), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(111), 12,
      sym__block,
      sym_text,
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
  [7609] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(12), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(449), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7638] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(17), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(451), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(150), 12,
      sym__block,
      sym_text,
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
  [7667] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(41), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(453), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(168), 12,
      sym__block,
      sym_text,
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
  [7696] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(59), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(455), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(117), 12,
      sym__block,
      sym_text,
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
  [7725] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(68), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(457), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7754] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(40), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(459), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7783] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(39), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(461), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(172), 12,
      sym__block,
      sym_text,
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
  [7812] = 2,
    ACTIONS(465), 1,
      anon_sym_,
    ACTIONS(463), 17,
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
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [7835] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(64), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(467), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(120), 12,
      sym__block,
      sym_text,
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
  [7864] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(37), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(469), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7893] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(13), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(471), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7922] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(29), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(473), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [7951] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(65), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(475), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(166), 12,
      sym__block,
      sym_text,
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
  [7980] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(38), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(477), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(109), 12,
      sym__block,
      sym_text,
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
  [8009] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(63), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(479), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(171), 12,
      sym__block,
      sym_text,
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
  [8038] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(62), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(481), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(173), 12,
      sym__block,
      sym_text,
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
  [8067] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(6), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(483), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(122), 12,
      sym__block,
      sym_text,
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
  [8096] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(34), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(485), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8125] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(33), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(487), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(169), 12,
      sym__block,
      sym_text,
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
  [8154] = 5,
    ACTIONS(489), 1,
      aux_sym_text_token1,
    STATE(71), 1,
      sym__left_delimiter,
    ACTIONS(492), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(495), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8183] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(71), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(498), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8212] = 2,
    ACTIONS(502), 1,
      anon_sym_,
    ACTIONS(500), 17,
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
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8235] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(16), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(504), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(123), 12,
      sym__block,
      sym_text,
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
  [8264] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(57), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(506), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(151), 12,
      sym__block,
      sym_text,
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
  [8293] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(28), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(508), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8322] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(27), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(510), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(138), 12,
      sym__block,
      sym_text,
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
  [8351] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(512), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8380] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(55), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(514), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(137), 12,
      sym__block,
      sym_text,
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
  [8409] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(24), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(516), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8438] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(43), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(518), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8467] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(54), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(520), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(133), 12,
      sym__block,
      sym_text,
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
  [8496] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(52), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(522), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8525] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(21), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(524), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8554] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(47), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(526), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8583] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(19), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(528), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(130), 12,
      sym__block,
      sym_text,
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
  [8612] = 2,
    ACTIONS(532), 1,
      anon_sym_,
    ACTIONS(530), 17,
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
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8635] = 5,
    ACTIONS(370), 1,
      aux_sym_text_token1,
    STATE(51), 1,
      sym__left_delimiter,
    ACTIONS(372), 2,
      aux_sym_text_token2,
      aux_sym_text_token3,
    ACTIONS(534), 2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(159), 12,
      sym__block,
      sym_text,
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
  [8664] = 2,
    ACTIONS(500), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(502), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8686] = 2,
    ACTIONS(538), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(536), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8708] = 2,
    ACTIONS(542), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(540), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8730] = 2,
    ACTIONS(463), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(465), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8752] = 2,
    ACTIONS(530), 7,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(532), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8774] = 2,
    ACTIONS(546), 1,
      sym_identifier,
    ACTIONS(544), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8788] = 3,
    ACTIONS(544), 1,
      anon_sym_,
    ACTIONS(550), 1,
      sym_identifier,
    ACTIONS(548), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8804] = 1,
    ACTIONS(552), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8815] = 2,
    ACTIONS(552), 1,
      anon_sym_,
    ACTIONS(554), 7,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8828] = 4,
    ACTIONS(245), 1,
      anon_sym_,
    ACTIONS(556), 1,
      anon_sym_COLON_EQ,
    ACTIONS(558), 1,
      anon_sym_EQ,
    ACTIONS(243), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8845] = 5,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(564), 1,
      anon_sym_,
    ACTIONS(566), 1,
      anon_sym_DOT,
    STATE(191), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(562), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8863] = 5,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_DOT,
    ACTIONS(568), 1,
      anon_sym_,
    STATE(189), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(562), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8881] = 3,
    ACTIONS(570), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(247), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8895] = 4,
    ACTIONS(572), 1,
      anon_sym_COMMA,
    ACTIONS(574), 1,
      anon_sym_COLON_EQ,
    ACTIONS(576), 1,
      anon_sym_EQ,
    ACTIONS(245), 4,
      anon_sym_PIPE,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8911] = 3,
    ACTIONS(578), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(247), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8925] = 3,
    ACTIONS(582), 1,
      anon_sym_,
    STATE(192), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(580), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8939] = 3,
    ACTIONS(574), 1,
      anon_sym_COLON_EQ,
    ACTIONS(576), 1,
      anon_sym_EQ,
    ACTIONS(245), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8953] = 3,
    ACTIONS(587), 1,
      anon_sym_,
    ACTIONS(589), 1,
      sym_identifier,
    ACTIONS(585), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [8967] = 2,
    ACTIONS(591), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(593), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8978] = 2,
    ACTIONS(595), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(597), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8989] = 2,
    ACTIONS(599), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(601), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9000] = 2,
    ACTIONS(603), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(605), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9011] = 2,
    ACTIONS(607), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(609), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9022] = 2,
    ACTIONS(611), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(613), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9033] = 2,
    ACTIONS(615), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(617), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9044] = 2,
    ACTIONS(619), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(621), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9055] = 2,
    ACTIONS(623), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(625), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9066] = 2,
    ACTIONS(627), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(629), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9077] = 2,
    ACTIONS(631), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(633), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9088] = 2,
    ACTIONS(635), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(637), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9099] = 2,
    ACTIONS(639), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(641), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9110] = 2,
    ACTIONS(643), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(645), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9121] = 2,
    ACTIONS(647), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(649), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9132] = 2,
    ACTIONS(651), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(653), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9143] = 2,
    ACTIONS(655), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(657), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9154] = 2,
    ACTIONS(659), 1,
      sym_identifier,
    ACTIONS(587), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9165] = 2,
    ACTIONS(661), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(663), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9176] = 2,
    ACTIONS(665), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(667), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9187] = 2,
    ACTIONS(669), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(671), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9198] = 2,
    ACTIONS(673), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(675), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9209] = 4,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_DOT,
    ACTIONS(677), 1,
      anon_sym_,
    ACTIONS(580), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9224] = 2,
    ACTIONS(679), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(681), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9235] = 2,
    ACTIONS(683), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(685), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9246] = 2,
    ACTIONS(687), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(689), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9257] = 2,
    ACTIONS(691), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(693), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9268] = 2,
    ACTIONS(695), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(697), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9279] = 2,
    ACTIONS(699), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(701), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9290] = 4,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_DOT,
    ACTIONS(705), 1,
      anon_sym_,
    ACTIONS(703), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9305] = 2,
    ACTIONS(707), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(709), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9316] = 2,
    ACTIONS(711), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(713), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9327] = 2,
    ACTIONS(715), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(717), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9338] = 2,
    ACTIONS(719), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(721), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9349] = 2,
    ACTIONS(723), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(725), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9360] = 2,
    ACTIONS(727), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(729), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9371] = 2,
    ACTIONS(731), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(733), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9382] = 4,
    ACTIONS(560), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_DOT,
    ACTIONS(737), 1,
      anon_sym_,
    ACTIONS(735), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9397] = 2,
    ACTIONS(739), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(741), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9408] = 2,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(745), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9419] = 2,
    ACTIONS(749), 1,
      anon_sym_,
    ACTIONS(747), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9430] = 2,
    ACTIONS(751), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(753), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9441] = 2,
    ACTIONS(755), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(757), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9452] = 2,
    ACTIONS(759), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(761), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9463] = 2,
    ACTIONS(763), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(765), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9474] = 2,
    ACTIONS(767), 2,
      ts_builtin_sym_end,
      aux_sym_text_token1,
    ACTIONS(769), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9485] = 2,
    ACTIONS(540), 1,
      anon_sym_,
    ACTIONS(542), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9496] = 2,
    ACTIONS(773), 1,
      anon_sym_,
    ACTIONS(771), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9507] = 2,
    ACTIONS(536), 1,
      anon_sym_,
    ACTIONS(538), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9518] = 2,
    ACTIONS(777), 1,
      anon_sym_,
    ACTIONS(775), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9529] = 2,
    ACTIONS(781), 1,
      anon_sym_,
    ACTIONS(779), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9540] = 2,
    ACTIONS(607), 1,
      aux_sym_text_token1,
    ACTIONS(609), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9550] = 2,
    ACTIONS(707), 1,
      aux_sym_text_token1,
    ACTIONS(709), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9560] = 2,
    ACTIONS(691), 1,
      aux_sym_text_token1,
    ACTIONS(693), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9570] = 2,
    ACTIONS(715), 1,
      aux_sym_text_token1,
    ACTIONS(717), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9580] = 2,
    ACTIONS(643), 1,
      aux_sym_text_token1,
    ACTIONS(645), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9590] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(218), 1,
      sym__right_delimiter,
    ACTIONS(787), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9604] = 1,
    ACTIONS(781), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9612] = 2,
    ACTIONS(763), 1,
      aux_sym_text_token1,
    ACTIONS(765), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9622] = 2,
    ACTIONS(679), 1,
      aux_sym_text_token1,
    ACTIONS(681), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9632] = 1,
    ACTIONS(773), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9640] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(141), 1,
      sym__right_delimiter,
    ACTIONS(789), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9654] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(119), 1,
      sym__right_delimiter,
    ACTIONS(791), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9668] = 1,
    ACTIONS(777), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9676] = 2,
    ACTIONS(759), 1,
      aux_sym_text_token1,
    ACTIONS(761), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9686] = 2,
    ACTIONS(755), 1,
      aux_sym_text_token1,
    ACTIONS(757), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9696] = 2,
    ACTIONS(669), 1,
      aux_sym_text_token1,
    ACTIONS(671), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9706] = 1,
    ACTIONS(749), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9714] = 3,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(737), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9726] = 2,
    ACTIONS(665), 1,
      aux_sym_text_token1,
    ACTIONS(667), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9736] = 3,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(705), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9748] = 2,
    ACTIONS(595), 1,
      aux_sym_text_token1,
    ACTIONS(597), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9758] = 2,
    ACTIONS(751), 1,
      aux_sym_text_token1,
    ACTIONS(753), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9768] = 2,
    ACTIONS(655), 1,
      aux_sym_text_token1,
    ACTIONS(657), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9778] = 2,
    ACTIONS(743), 1,
      aux_sym_text_token1,
    ACTIONS(745), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9788] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(156), 1,
      sym__right_delimiter,
    ACTIONS(793), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9802] = 2,
    ACTIONS(647), 1,
      aux_sym_text_token1,
    ACTIONS(649), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9812] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(103), 1,
      sym__right_delimiter,
    ACTIONS(795), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9826] = 2,
    ACTIONS(639), 1,
      aux_sym_text_token1,
    ACTIONS(641), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9836] = 2,
    ACTIONS(739), 1,
      aux_sym_text_token1,
    ACTIONS(741), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9846] = 2,
    ACTIONS(631), 1,
      aux_sym_text_token1,
    ACTIONS(633), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9856] = 2,
    ACTIONS(591), 1,
      aux_sym_text_token1,
    ACTIONS(593), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9866] = 2,
    ACTIONS(623), 1,
      aux_sym_text_token1,
    ACTIONS(625), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9876] = 2,
    ACTIONS(619), 1,
      aux_sym_text_token1,
    ACTIONS(621), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9886] = 2,
    ACTIONS(611), 1,
      aux_sym_text_token1,
    ACTIONS(613), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9896] = 2,
    ACTIONS(599), 1,
      aux_sym_text_token1,
    ACTIONS(601), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9906] = 2,
    ACTIONS(695), 1,
      aux_sym_text_token1,
    ACTIONS(697), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9916] = 2,
    ACTIONS(731), 1,
      aux_sym_text_token1,
    ACTIONS(733), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9926] = 2,
    ACTIONS(603), 1,
      aux_sym_text_token1,
    ACTIONS(605), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9936] = 2,
    ACTIONS(711), 1,
      aux_sym_text_token1,
    ACTIONS(713), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9946] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(254), 1,
      sym__right_delimiter,
    ACTIONS(797), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9960] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(112), 1,
      sym__right_delimiter,
    ACTIONS(799), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9974] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(230), 1,
      sym__right_delimiter,
    ACTIONS(801), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [9988] = 2,
    ACTIONS(723), 1,
      aux_sym_text_token1,
    ACTIONS(725), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [9998] = 2,
    ACTIONS(627), 1,
      aux_sym_text_token1,
    ACTIONS(629), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10008] = 2,
    ACTIONS(767), 1,
      aux_sym_text_token1,
    ACTIONS(769), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10018] = 2,
    ACTIONS(635), 1,
      aux_sym_text_token1,
    ACTIONS(637), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10028] = 2,
    ACTIONS(719), 1,
      aux_sym_text_token1,
    ACTIONS(721), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10038] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(105), 1,
      sym__right_delimiter,
    ACTIONS(803), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10052] = 2,
    ACTIONS(615), 1,
      aux_sym_text_token1,
    ACTIONS(617), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10062] = 2,
    ACTIONS(651), 1,
      aux_sym_text_token1,
    ACTIONS(653), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10072] = 2,
    ACTIONS(727), 1,
      aux_sym_text_token1,
    ACTIONS(729), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10082] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(121), 1,
      sym__right_delimiter,
    ACTIONS(805), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10096] = 2,
    ACTIONS(661), 1,
      aux_sym_text_token1,
    ACTIONS(663), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10106] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(129), 1,
      sym__right_delimiter,
    ACTIONS(807), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10120] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(132), 1,
      sym__right_delimiter,
    ACTIONS(809), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10134] = 2,
    ACTIONS(673), 1,
      aux_sym_text_token1,
    ACTIONS(675), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10144] = 4,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    STATE(296), 1,
      sym__right_delimiter,
    ACTIONS(811), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10158] = 2,
    ACTIONS(699), 1,
      aux_sym_text_token1,
    ACTIONS(701), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10168] = 2,
    ACTIONS(683), 1,
      aux_sym_text_token1,
    ACTIONS(685), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10178] = 2,
    ACTIONS(687), 1,
      aux_sym_text_token1,
    ACTIONS(689), 4,
      aux_sym_text_token2,
      aux_sym_text_token3,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [10188] = 3,
    ACTIONS(813), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(815), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [10199] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(817), 1,
      sym_raw_string_literal,
    STATE(81), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10210] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(819), 1,
      sym_raw_string_literal,
    STATE(412), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10221] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(821), 1,
      sym_raw_string_literal,
    STATE(83), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10232] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(823), 1,
      sym_raw_string_literal,
    STATE(401), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10243] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(825), 1,
      sym_raw_string_literal,
    STATE(82), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10254] = 3,
    ACTIONS(827), 1,
      anon_sym_DQUOTE,
    STATE(306), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(829), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [10265] = 3,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(831), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10276] = 3,
    ACTIONS(833), 1,
      anon_sym_DQUOTE,
    STATE(322), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(835), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [10287] = 3,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    ACTIONS(837), 1,
      sym_raw_string_literal,
    STATE(80), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [10298] = 4,
    ACTIONS(839), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(842), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(316), 1,
      aux_sym_if_action_repeat1,
    STATE(430), 1,
      sym__left_delimiter,
  [10311] = 4,
    ACTIONS(845), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(847), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(316), 1,
      aux_sym_if_action_repeat1,
    STATE(359), 1,
      sym__left_delimiter,
  [10324] = 4,
    ACTIONS(849), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(851), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(316), 1,
      aux_sym_if_action_repeat1,
    STATE(342), 1,
      sym__left_delimiter,
  [10337] = 4,
    ACTIONS(853), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(855), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(316), 1,
      aux_sym_if_action_repeat1,
    STATE(374), 1,
      sym__left_delimiter,
  [10350] = 3,
    ACTIONS(857), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(859), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [10361] = 4,
    ACTIONS(862), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(864), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(316), 1,
      aux_sym_if_action_repeat1,
    STATE(349), 1,
      sym__left_delimiter,
  [10374] = 3,
    ACTIONS(866), 1,
      anon_sym_DQUOTE,
    STATE(320), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(815), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [10385] = 2,
    STATE(261), 1,
      sym__right_delimiter,
    ACTIONS(868), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10393] = 2,
    STATE(246), 1,
      sym__right_delimiter,
    ACTIONS(870), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10401] = 2,
    STATE(259), 1,
      sym__right_delimiter,
    ACTIONS(872), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10409] = 2,
    STATE(253), 1,
      sym__right_delimiter,
    ACTIONS(874), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10417] = 2,
    STATE(204), 1,
      sym__right_delimiter,
    ACTIONS(876), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10425] = 2,
    STATE(249), 1,
      sym__right_delimiter,
    ACTIONS(878), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10433] = 2,
    STATE(260), 1,
      sym__right_delimiter,
    ACTIONS(880), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10441] = 2,
    STATE(198), 1,
      sym__right_delimiter,
    ACTIONS(882), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10449] = 3,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      anon_sym_RPAREN,
  [10459] = 2,
    STATE(267), 1,
      sym__right_delimiter,
    ACTIONS(886), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10467] = 2,
    STATE(269), 1,
      sym__right_delimiter,
    ACTIONS(888), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10475] = 2,
    STATE(274), 1,
      sym__right_delimiter,
    ACTIONS(890), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10483] = 2,
    STATE(276), 1,
      sym__right_delimiter,
    ACTIONS(892), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10491] = 2,
    STATE(282), 1,
      sym__right_delimiter,
    ACTIONS(894), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10499] = 2,
    STATE(201), 1,
      sym__right_delimiter,
    ACTIONS(896), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10507] = 2,
    STATE(165), 1,
      sym__right_delimiter,
    ACTIONS(898), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10515] = 2,
    STATE(288), 1,
      sym__right_delimiter,
    ACTIONS(900), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10523] = 2,
    STATE(199), 1,
      sym__right_delimiter,
    ACTIONS(902), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10531] = 2,
    STATE(158), 1,
      sym__right_delimiter,
    ACTIONS(904), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10539] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(906), 1,
      anon_sym_else,
    ACTIONS(908), 1,
      anon_sym_end,
  [10549] = 2,
    STATE(292), 1,
      sym__right_delimiter,
    ACTIONS(910), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10557] = 2,
    STATE(284), 1,
      sym__right_delimiter,
    ACTIONS(912), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10565] = 2,
    STATE(247), 1,
      sym__right_delimiter,
    ACTIONS(914), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10573] = 2,
    STATE(222), 1,
      sym__right_delimiter,
    ACTIONS(916), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10581] = 2,
    STATE(197), 1,
      sym__right_delimiter,
    ACTIONS(918), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10589] = 2,
    STATE(303), 1,
      sym__right_delimiter,
    ACTIONS(920), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10597] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(922), 1,
      anon_sym_else,
    ACTIONS(924), 1,
      anon_sym_end,
  [10607] = 2,
    STATE(305), 1,
      sym__right_delimiter,
    ACTIONS(926), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10615] = 2,
    STATE(200), 1,
      sym__right_delimiter,
    ACTIONS(928), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10623] = 2,
    STATE(108), 1,
      sym__right_delimiter,
    ACTIONS(930), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10631] = 2,
    STATE(304), 1,
      sym__right_delimiter,
    ACTIONS(932), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10639] = 2,
    STATE(202), 1,
      sym__right_delimiter,
    ACTIONS(934), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10647] = 2,
    STATE(146), 1,
      sym__right_delimiter,
    ACTIONS(936), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10655] = 2,
    STATE(301), 1,
      sym__right_delimiter,
    ACTIONS(938), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10663] = 2,
    STATE(203), 1,
      sym__right_delimiter,
    ACTIONS(940), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10671] = 2,
    STATE(142), 1,
      sym__right_delimiter,
    ACTIONS(942), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10679] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(944), 1,
      anon_sym_else,
    ACTIONS(946), 1,
      anon_sym_end,
  [10689] = 2,
    STATE(205), 1,
      sym__right_delimiter,
    ACTIONS(948), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10697] = 2,
    STATE(136), 1,
      sym__right_delimiter,
    ACTIONS(950), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10705] = 2,
    STATE(298), 1,
      sym__right_delimiter,
    ACTIONS(952), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10713] = 2,
    STATE(295), 1,
      sym__right_delimiter,
    ACTIONS(954), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10721] = 2,
    STATE(207), 1,
      sym__right_delimiter,
    ACTIONS(956), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10729] = 2,
    STATE(128), 1,
      sym__right_delimiter,
    ACTIONS(958), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10737] = 2,
    STATE(209), 1,
      sym__right_delimiter,
    ACTIONS(960), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10745] = 2,
    STATE(211), 1,
      sym__right_delimiter,
    ACTIONS(962), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10753] = 2,
    STATE(196), 1,
      sym__right_delimiter,
    ACTIONS(964), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10761] = 2,
    STATE(118), 1,
      sym__right_delimiter,
    ACTIONS(966), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10769] = 2,
    STATE(214), 1,
      sym__right_delimiter,
    ACTIONS(968), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10777] = 2,
    STATE(291), 1,
      sym__right_delimiter,
    ACTIONS(970), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10785] = 2,
    STATE(114), 1,
      sym__right_delimiter,
    ACTIONS(972), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10793] = 2,
    STATE(289), 1,
      sym__right_delimiter,
    ACTIONS(974), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10801] = 3,
    ACTIONS(13), 1,
      anon_sym_elseif,
    ACTIONS(976), 1,
      anon_sym_else,
    ACTIONS(978), 1,
      anon_sym_end,
  [10811] = 2,
    STATE(294), 1,
      sym__right_delimiter,
    ACTIONS(980), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10819] = 2,
    STATE(215), 1,
      sym__right_delimiter,
    ACTIONS(982), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10827] = 2,
    STATE(116), 1,
      sym__right_delimiter,
    ACTIONS(984), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10835] = 2,
    STATE(290), 1,
      sym__right_delimiter,
    ACTIONS(986), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10843] = 2,
    STATE(283), 1,
      sym__right_delimiter,
    ACTIONS(988), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10851] = 2,
    STATE(281), 1,
      sym__right_delimiter,
    ACTIONS(990), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10859] = 2,
    STATE(280), 1,
      sym__right_delimiter,
    ACTIONS(992), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10867] = 2,
    STATE(279), 1,
      sym__right_delimiter,
    ACTIONS(994), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10875] = 2,
    STATE(206), 1,
      sym__right_delimiter,
    ACTIONS(996), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10883] = 2,
    STATE(278), 1,
      sym__right_delimiter,
    ACTIONS(998), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10891] = 2,
    STATE(277), 1,
      sym__right_delimiter,
    ACTIONS(1000), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10899] = 2,
    STATE(275), 1,
      sym__right_delimiter,
    ACTIONS(1002), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10907] = 2,
    STATE(273), 1,
      sym__right_delimiter,
    ACTIONS(1004), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10915] = 2,
    STATE(271), 1,
      sym__right_delimiter,
    ACTIONS(1006), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10923] = 2,
    STATE(268), 1,
      sym__right_delimiter,
    ACTIONS(1008), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10931] = 2,
    STATE(266), 1,
      sym__right_delimiter,
    ACTIONS(1010), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10939] = 2,
    STATE(264), 1,
      sym__right_delimiter,
    ACTIONS(1012), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10947] = 2,
    STATE(210), 1,
      sym__right_delimiter,
    ACTIONS(1014), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10955] = 2,
    STATE(240), 1,
      sym__right_delimiter,
    ACTIONS(1016), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10963] = 2,
    STATE(239), 1,
      sym__right_delimiter,
    ACTIONS(1018), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10971] = 2,
    STATE(213), 1,
      sym__right_delimiter,
    ACTIONS(1020), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10979] = 2,
    STATE(238), 1,
      sym__right_delimiter,
    ACTIONS(1022), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10987] = 2,
    STATE(237), 1,
      sym__right_delimiter,
    ACTIONS(1024), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [10995] = 2,
    STATE(236), 1,
      sym__right_delimiter,
    ACTIONS(1026), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11003] = 3,
    ACTIONS(783), 1,
      anon_sym_PIPE,
    ACTIONS(785), 1,
      anon_sym_DOT,
    ACTIONS(1028), 1,
      anon_sym_RPAREN,
  [11013] = 2,
    STATE(234), 1,
      sym__right_delimiter,
    ACTIONS(1030), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11021] = 2,
    STATE(148), 1,
      sym__right_delimiter,
    ACTIONS(1032), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11029] = 2,
    STATE(233), 1,
      sym__right_delimiter,
    ACTIONS(1034), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11037] = 2,
    STATE(162), 1,
      sym__right_delimiter,
    ACTIONS(1036), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11045] = 2,
    STATE(195), 1,
      sym__right_delimiter,
    ACTIONS(1038), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11053] = 2,
    STATE(231), 1,
      sym__right_delimiter,
    ACTIONS(1040), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11061] = 2,
    STATE(227), 1,
      sym__right_delimiter,
    ACTIONS(1042), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11069] = 2,
    STATE(229), 1,
      sym__right_delimiter,
    ACTIONS(1044), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11077] = 2,
    STATE(228), 1,
      sym__right_delimiter,
    ACTIONS(1046), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11085] = 2,
    STATE(226), 1,
      sym__right_delimiter,
    ACTIONS(1048), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11093] = 2,
    STATE(107), 1,
      sym__right_delimiter,
    ACTIONS(1050), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11101] = 2,
    STATE(225), 1,
      sym__right_delimiter,
    ACTIONS(1052), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11109] = 2,
    STATE(113), 1,
      sym__right_delimiter,
    ACTIONS(1054), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11117] = 2,
    STATE(223), 1,
      sym__right_delimiter,
    ACTIONS(1056), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11125] = 2,
    STATE(220), 1,
      sym__right_delimiter,
    ACTIONS(1058), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11133] = 2,
    STATE(219), 1,
      sym__right_delimiter,
    ACTIONS(1060), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11141] = 2,
    STATE(152), 1,
      sym__right_delimiter,
    ACTIONS(1062), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11149] = 2,
    STATE(154), 1,
      sym__right_delimiter,
    ACTIONS(1064), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11157] = 2,
    STATE(155), 1,
      sym__right_delimiter,
    ACTIONS(1066), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11165] = 2,
    STATE(163), 1,
      sym__right_delimiter,
    ACTIONS(1068), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11173] = 2,
    STATE(167), 1,
      sym__right_delimiter,
    ACTIONS(1070), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11181] = 2,
    STATE(170), 1,
      sym__right_delimiter,
    ACTIONS(1072), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11189] = 2,
    STATE(174), 1,
      sym__right_delimiter,
    ACTIONS(1074), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11197] = 2,
    STATE(153), 1,
      sym__right_delimiter,
    ACTIONS(1076), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11205] = 2,
    STATE(139), 1,
      sym__right_delimiter,
    ACTIONS(1078), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11213] = 2,
    STATE(134), 1,
      sym__right_delimiter,
    ACTIONS(1080), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11221] = 2,
    STATE(216), 1,
      sym__right_delimiter,
    ACTIONS(1082), 2,
      anon_sym_RBRACE_RBRACE,
      anon_sym_DASH_RBRACE_RBRACE,
  [11229] = 2,
    ACTIONS(1084), 1,
      sym_identifier,
    STATE(181), 1,
      sym__field_identifier,
  [11236] = 2,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    STATE(431), 1,
      sym_variable,
  [11243] = 2,
    ACTIONS(1086), 1,
      sym_identifier,
    STATE(175), 1,
      sym__field_identifier,
  [11250] = 1,
    ACTIONS(13), 1,
      anon_sym_elseif,
  [11254] = 1,
    ACTIONS(1088), 1,
      anon_sym_COLON_EQ,
  [11258] = 1,
    ACTIONS(1090), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 77,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 231,
  [SMALL_STATE(10)] = 308,
  [SMALL_STATE(11)] = 385,
  [SMALL_STATE(12)] = 462,
  [SMALL_STATE(13)] = 539,
  [SMALL_STATE(14)] = 616,
  [SMALL_STATE(15)] = 693,
  [SMALL_STATE(16)] = 770,
  [SMALL_STATE(17)] = 847,
  [SMALL_STATE(18)] = 924,
  [SMALL_STATE(19)] = 998,
  [SMALL_STATE(20)] = 1072,
  [SMALL_STATE(21)] = 1146,
  [SMALL_STATE(22)] = 1220,
  [SMALL_STATE(23)] = 1294,
  [SMALL_STATE(24)] = 1368,
  [SMALL_STATE(25)] = 1442,
  [SMALL_STATE(26)] = 1516,
  [SMALL_STATE(27)] = 1590,
  [SMALL_STATE(28)] = 1664,
  [SMALL_STATE(29)] = 1738,
  [SMALL_STATE(30)] = 1812,
  [SMALL_STATE(31)] = 1886,
  [SMALL_STATE(32)] = 1960,
  [SMALL_STATE(33)] = 2034,
  [SMALL_STATE(34)] = 2108,
  [SMALL_STATE(35)] = 2182,
  [SMALL_STATE(36)] = 2256,
  [SMALL_STATE(37)] = 2330,
  [SMALL_STATE(38)] = 2404,
  [SMALL_STATE(39)] = 2478,
  [SMALL_STATE(40)] = 2552,
  [SMALL_STATE(41)] = 2626,
  [SMALL_STATE(42)] = 2700,
  [SMALL_STATE(43)] = 2774,
  [SMALL_STATE(44)] = 2848,
  [SMALL_STATE(45)] = 2922,
  [SMALL_STATE(46)] = 2996,
  [SMALL_STATE(47)] = 3070,
  [SMALL_STATE(48)] = 3144,
  [SMALL_STATE(49)] = 3218,
  [SMALL_STATE(50)] = 3292,
  [SMALL_STATE(51)] = 3366,
  [SMALL_STATE(52)] = 3440,
  [SMALL_STATE(53)] = 3514,
  [SMALL_STATE(54)] = 3588,
  [SMALL_STATE(55)] = 3662,
  [SMALL_STATE(56)] = 3736,
  [SMALL_STATE(57)] = 3810,
  [SMALL_STATE(58)] = 3884,
  [SMALL_STATE(59)] = 3958,
  [SMALL_STATE(60)] = 4032,
  [SMALL_STATE(61)] = 4106,
  [SMALL_STATE(62)] = 4180,
  [SMALL_STATE(63)] = 4254,
  [SMALL_STATE(64)] = 4328,
  [SMALL_STATE(65)] = 4402,
  [SMALL_STATE(66)] = 4476,
  [SMALL_STATE(67)] = 4550,
  [SMALL_STATE(68)] = 4624,
  [SMALL_STATE(69)] = 4698,
  [SMALL_STATE(70)] = 4772,
  [SMALL_STATE(71)] = 4843,
  [SMALL_STATE(72)] = 4914,
  [SMALL_STATE(73)] = 4974,
  [SMALL_STATE(74)] = 5032,
  [SMALL_STATE(75)] = 5089,
  [SMALL_STATE(76)] = 5146,
  [SMALL_STATE(77)] = 5205,
  [SMALL_STATE(78)] = 5264,
  [SMALL_STATE(79)] = 5320,
  [SMALL_STATE(80)] = 5376,
  [SMALL_STATE(81)] = 5433,
  [SMALL_STATE(82)] = 5490,
  [SMALL_STATE(83)] = 5547,
  [SMALL_STATE(84)] = 5604,
  [SMALL_STATE(85)] = 5657,
  [SMALL_STATE(86)] = 5710,
  [SMALL_STATE(87)] = 5760,
  [SMALL_STATE(88)] = 5810,
  [SMALL_STATE(89)] = 5860,
  [SMALL_STATE(90)] = 5910,
  [SMALL_STATE(91)] = 5960,
  [SMALL_STATE(92)] = 6010,
  [SMALL_STATE(93)] = 6060,
  [SMALL_STATE(94)] = 6110,
  [SMALL_STATE(95)] = 6160,
  [SMALL_STATE(96)] = 6210,
  [SMALL_STATE(97)] = 6260,
  [SMALL_STATE(98)] = 6310,
  [SMALL_STATE(99)] = 6360,
  [SMALL_STATE(100)] = 6410,
  [SMALL_STATE(101)] = 6460,
  [SMALL_STATE(102)] = 6492,
  [SMALL_STATE(103)] = 6524,
  [SMALL_STATE(104)] = 6556,
  [SMALL_STATE(105)] = 6588,
  [SMALL_STATE(106)] = 6620,
  [SMALL_STATE(107)] = 6652,
  [SMALL_STATE(108)] = 6681,
  [SMALL_STATE(109)] = 6710,
  [SMALL_STATE(110)] = 6739,
  [SMALL_STATE(111)] = 6768,
  [SMALL_STATE(112)] = 6797,
  [SMALL_STATE(113)] = 6826,
  [SMALL_STATE(114)] = 6855,
  [SMALL_STATE(115)] = 6884,
  [SMALL_STATE(116)] = 6913,
  [SMALL_STATE(117)] = 6942,
  [SMALL_STATE(118)] = 6971,
  [SMALL_STATE(119)] = 7000,
  [SMALL_STATE(120)] = 7029,
  [SMALL_STATE(121)] = 7058,
  [SMALL_STATE(122)] = 7087,
  [SMALL_STATE(123)] = 7116,
  [SMALL_STATE(124)] = 7145,
  [SMALL_STATE(125)] = 7174,
  [SMALL_STATE(126)] = 7203,
  [SMALL_STATE(127)] = 7232,
  [SMALL_STATE(128)] = 7261,
  [SMALL_STATE(129)] = 7290,
  [SMALL_STATE(130)] = 7319,
  [SMALL_STATE(131)] = 7348,
  [SMALL_STATE(132)] = 7377,
  [SMALL_STATE(133)] = 7406,
  [SMALL_STATE(134)] = 7435,
  [SMALL_STATE(135)] = 7464,
  [SMALL_STATE(136)] = 7493,
  [SMALL_STATE(137)] = 7522,
  [SMALL_STATE(138)] = 7551,
  [SMALL_STATE(139)] = 7580,
  [SMALL_STATE(140)] = 7609,
  [SMALL_STATE(141)] = 7638,
  [SMALL_STATE(142)] = 7667,
  [SMALL_STATE(143)] = 7696,
  [SMALL_STATE(144)] = 7725,
  [SMALL_STATE(145)] = 7754,
  [SMALL_STATE(146)] = 7783,
  [SMALL_STATE(147)] = 7812,
  [SMALL_STATE(148)] = 7835,
  [SMALL_STATE(149)] = 7864,
  [SMALL_STATE(150)] = 7893,
  [SMALL_STATE(151)] = 7922,
  [SMALL_STATE(152)] = 7951,
  [SMALL_STATE(153)] = 7980,
  [SMALL_STATE(154)] = 8009,
  [SMALL_STATE(155)] = 8038,
  [SMALL_STATE(156)] = 8067,
  [SMALL_STATE(157)] = 8096,
  [SMALL_STATE(158)] = 8125,
  [SMALL_STATE(159)] = 8154,
  [SMALL_STATE(160)] = 8183,
  [SMALL_STATE(161)] = 8212,
  [SMALL_STATE(162)] = 8235,
  [SMALL_STATE(163)] = 8264,
  [SMALL_STATE(164)] = 8293,
  [SMALL_STATE(165)] = 8322,
  [SMALL_STATE(166)] = 8351,
  [SMALL_STATE(167)] = 8380,
  [SMALL_STATE(168)] = 8409,
  [SMALL_STATE(169)] = 8438,
  [SMALL_STATE(170)] = 8467,
  [SMALL_STATE(171)] = 8496,
  [SMALL_STATE(172)] = 8525,
  [SMALL_STATE(173)] = 8554,
  [SMALL_STATE(174)] = 8583,
  [SMALL_STATE(175)] = 8612,
  [SMALL_STATE(176)] = 8635,
  [SMALL_STATE(177)] = 8664,
  [SMALL_STATE(178)] = 8686,
  [SMALL_STATE(179)] = 8708,
  [SMALL_STATE(180)] = 8730,
  [SMALL_STATE(181)] = 8752,
  [SMALL_STATE(182)] = 8774,
  [SMALL_STATE(183)] = 8788,
  [SMALL_STATE(184)] = 8804,
  [SMALL_STATE(185)] = 8815,
  [SMALL_STATE(186)] = 8828,
  [SMALL_STATE(187)] = 8845,
  [SMALL_STATE(188)] = 8863,
  [SMALL_STATE(189)] = 8881,
  [SMALL_STATE(190)] = 8895,
  [SMALL_STATE(191)] = 8911,
  [SMALL_STATE(192)] = 8925,
  [SMALL_STATE(193)] = 8939,
  [SMALL_STATE(194)] = 8953,
  [SMALL_STATE(195)] = 8967,
  [SMALL_STATE(196)] = 8978,
  [SMALL_STATE(197)] = 8989,
  [SMALL_STATE(198)] = 9000,
  [SMALL_STATE(199)] = 9011,
  [SMALL_STATE(200)] = 9022,
  [SMALL_STATE(201)] = 9033,
  [SMALL_STATE(202)] = 9044,
  [SMALL_STATE(203)] = 9055,
  [SMALL_STATE(204)] = 9066,
  [SMALL_STATE(205)] = 9077,
  [SMALL_STATE(206)] = 9088,
  [SMALL_STATE(207)] = 9099,
  [SMALL_STATE(208)] = 9110,
  [SMALL_STATE(209)] = 9121,
  [SMALL_STATE(210)] = 9132,
  [SMALL_STATE(211)] = 9143,
  [SMALL_STATE(212)] = 9154,
  [SMALL_STATE(213)] = 9165,
  [SMALL_STATE(214)] = 9176,
  [SMALL_STATE(215)] = 9187,
  [SMALL_STATE(216)] = 9198,
  [SMALL_STATE(217)] = 9209,
  [SMALL_STATE(218)] = 9224,
  [SMALL_STATE(219)] = 9235,
  [SMALL_STATE(220)] = 9246,
  [SMALL_STATE(221)] = 9257,
  [SMALL_STATE(222)] = 9268,
  [SMALL_STATE(223)] = 9279,
  [SMALL_STATE(224)] = 9290,
  [SMALL_STATE(225)] = 9305,
  [SMALL_STATE(226)] = 9316,
  [SMALL_STATE(227)] = 9327,
  [SMALL_STATE(228)] = 9338,
  [SMALL_STATE(229)] = 9349,
  [SMALL_STATE(230)] = 9360,
  [SMALL_STATE(231)] = 9371,
  [SMALL_STATE(232)] = 9382,
  [SMALL_STATE(233)] = 9397,
  [SMALL_STATE(234)] = 9408,
  [SMALL_STATE(235)] = 9419,
  [SMALL_STATE(236)] = 9430,
  [SMALL_STATE(237)] = 9441,
  [SMALL_STATE(238)] = 9452,
  [SMALL_STATE(239)] = 9463,
  [SMALL_STATE(240)] = 9474,
  [SMALL_STATE(241)] = 9485,
  [SMALL_STATE(242)] = 9496,
  [SMALL_STATE(243)] = 9507,
  [SMALL_STATE(244)] = 9518,
  [SMALL_STATE(245)] = 9529,
  [SMALL_STATE(246)] = 9540,
  [SMALL_STATE(247)] = 9550,
  [SMALL_STATE(248)] = 9560,
  [SMALL_STATE(249)] = 9570,
  [SMALL_STATE(250)] = 9580,
  [SMALL_STATE(251)] = 9590,
  [SMALL_STATE(252)] = 9604,
  [SMALL_STATE(253)] = 9612,
  [SMALL_STATE(254)] = 9622,
  [SMALL_STATE(255)] = 9632,
  [SMALL_STATE(256)] = 9640,
  [SMALL_STATE(257)] = 9654,
  [SMALL_STATE(258)] = 9668,
  [SMALL_STATE(259)] = 9676,
  [SMALL_STATE(260)] = 9686,
  [SMALL_STATE(261)] = 9696,
  [SMALL_STATE(262)] = 9706,
  [SMALL_STATE(263)] = 9714,
  [SMALL_STATE(264)] = 9726,
  [SMALL_STATE(265)] = 9736,
  [SMALL_STATE(266)] = 9748,
  [SMALL_STATE(267)] = 9758,
  [SMALL_STATE(268)] = 9768,
  [SMALL_STATE(269)] = 9778,
  [SMALL_STATE(270)] = 9788,
  [SMALL_STATE(271)] = 9802,
  [SMALL_STATE(272)] = 9812,
  [SMALL_STATE(273)] = 9826,
  [SMALL_STATE(274)] = 9836,
  [SMALL_STATE(275)] = 9846,
  [SMALL_STATE(276)] = 9856,
  [SMALL_STATE(277)] = 9866,
  [SMALL_STATE(278)] = 9876,
  [SMALL_STATE(279)] = 9886,
  [SMALL_STATE(280)] = 9896,
  [SMALL_STATE(281)] = 9906,
  [SMALL_STATE(282)] = 9916,
  [SMALL_STATE(283)] = 9926,
  [SMALL_STATE(284)] = 9936,
  [SMALL_STATE(285)] = 9946,
  [SMALL_STATE(286)] = 9960,
  [SMALL_STATE(287)] = 9974,
  [SMALL_STATE(288)] = 9988,
  [SMALL_STATE(289)] = 9998,
  [SMALL_STATE(290)] = 10008,
  [SMALL_STATE(291)] = 10018,
  [SMALL_STATE(292)] = 10028,
  [SMALL_STATE(293)] = 10038,
  [SMALL_STATE(294)] = 10052,
  [SMALL_STATE(295)] = 10062,
  [SMALL_STATE(296)] = 10072,
  [SMALL_STATE(297)] = 10082,
  [SMALL_STATE(298)] = 10096,
  [SMALL_STATE(299)] = 10106,
  [SMALL_STATE(300)] = 10120,
  [SMALL_STATE(301)] = 10134,
  [SMALL_STATE(302)] = 10144,
  [SMALL_STATE(303)] = 10158,
  [SMALL_STATE(304)] = 10168,
  [SMALL_STATE(305)] = 10178,
  [SMALL_STATE(306)] = 10188,
  [SMALL_STATE(307)] = 10199,
  [SMALL_STATE(308)] = 10210,
  [SMALL_STATE(309)] = 10221,
  [SMALL_STATE(310)] = 10232,
  [SMALL_STATE(311)] = 10243,
  [SMALL_STATE(312)] = 10254,
  [SMALL_STATE(313)] = 10265,
  [SMALL_STATE(314)] = 10276,
  [SMALL_STATE(315)] = 10287,
  [SMALL_STATE(316)] = 10298,
  [SMALL_STATE(317)] = 10311,
  [SMALL_STATE(318)] = 10324,
  [SMALL_STATE(319)] = 10337,
  [SMALL_STATE(320)] = 10350,
  [SMALL_STATE(321)] = 10361,
  [SMALL_STATE(322)] = 10374,
  [SMALL_STATE(323)] = 10385,
  [SMALL_STATE(324)] = 10393,
  [SMALL_STATE(325)] = 10401,
  [SMALL_STATE(326)] = 10409,
  [SMALL_STATE(327)] = 10417,
  [SMALL_STATE(328)] = 10425,
  [SMALL_STATE(329)] = 10433,
  [SMALL_STATE(330)] = 10441,
  [SMALL_STATE(331)] = 10449,
  [SMALL_STATE(332)] = 10459,
  [SMALL_STATE(333)] = 10467,
  [SMALL_STATE(334)] = 10475,
  [SMALL_STATE(335)] = 10483,
  [SMALL_STATE(336)] = 10491,
  [SMALL_STATE(337)] = 10499,
  [SMALL_STATE(338)] = 10507,
  [SMALL_STATE(339)] = 10515,
  [SMALL_STATE(340)] = 10523,
  [SMALL_STATE(341)] = 10531,
  [SMALL_STATE(342)] = 10539,
  [SMALL_STATE(343)] = 10549,
  [SMALL_STATE(344)] = 10557,
  [SMALL_STATE(345)] = 10565,
  [SMALL_STATE(346)] = 10573,
  [SMALL_STATE(347)] = 10581,
  [SMALL_STATE(348)] = 10589,
  [SMALL_STATE(349)] = 10597,
  [SMALL_STATE(350)] = 10607,
  [SMALL_STATE(351)] = 10615,
  [SMALL_STATE(352)] = 10623,
  [SMALL_STATE(353)] = 10631,
  [SMALL_STATE(354)] = 10639,
  [SMALL_STATE(355)] = 10647,
  [SMALL_STATE(356)] = 10655,
  [SMALL_STATE(357)] = 10663,
  [SMALL_STATE(358)] = 10671,
  [SMALL_STATE(359)] = 10679,
  [SMALL_STATE(360)] = 10689,
  [SMALL_STATE(361)] = 10697,
  [SMALL_STATE(362)] = 10705,
  [SMALL_STATE(363)] = 10713,
  [SMALL_STATE(364)] = 10721,
  [SMALL_STATE(365)] = 10729,
  [SMALL_STATE(366)] = 10737,
  [SMALL_STATE(367)] = 10745,
  [SMALL_STATE(368)] = 10753,
  [SMALL_STATE(369)] = 10761,
  [SMALL_STATE(370)] = 10769,
  [SMALL_STATE(371)] = 10777,
  [SMALL_STATE(372)] = 10785,
  [SMALL_STATE(373)] = 10793,
  [SMALL_STATE(374)] = 10801,
  [SMALL_STATE(375)] = 10811,
  [SMALL_STATE(376)] = 10819,
  [SMALL_STATE(377)] = 10827,
  [SMALL_STATE(378)] = 10835,
  [SMALL_STATE(379)] = 10843,
  [SMALL_STATE(380)] = 10851,
  [SMALL_STATE(381)] = 10859,
  [SMALL_STATE(382)] = 10867,
  [SMALL_STATE(383)] = 10875,
  [SMALL_STATE(384)] = 10883,
  [SMALL_STATE(385)] = 10891,
  [SMALL_STATE(386)] = 10899,
  [SMALL_STATE(387)] = 10907,
  [SMALL_STATE(388)] = 10915,
  [SMALL_STATE(389)] = 10923,
  [SMALL_STATE(390)] = 10931,
  [SMALL_STATE(391)] = 10939,
  [SMALL_STATE(392)] = 10947,
  [SMALL_STATE(393)] = 10955,
  [SMALL_STATE(394)] = 10963,
  [SMALL_STATE(395)] = 10971,
  [SMALL_STATE(396)] = 10979,
  [SMALL_STATE(397)] = 10987,
  [SMALL_STATE(398)] = 10995,
  [SMALL_STATE(399)] = 11003,
  [SMALL_STATE(400)] = 11013,
  [SMALL_STATE(401)] = 11021,
  [SMALL_STATE(402)] = 11029,
  [SMALL_STATE(403)] = 11037,
  [SMALL_STATE(404)] = 11045,
  [SMALL_STATE(405)] = 11053,
  [SMALL_STATE(406)] = 11061,
  [SMALL_STATE(407)] = 11069,
  [SMALL_STATE(408)] = 11077,
  [SMALL_STATE(409)] = 11085,
  [SMALL_STATE(410)] = 11093,
  [SMALL_STATE(411)] = 11101,
  [SMALL_STATE(412)] = 11109,
  [SMALL_STATE(413)] = 11117,
  [SMALL_STATE(414)] = 11125,
  [SMALL_STATE(415)] = 11133,
  [SMALL_STATE(416)] = 11141,
  [SMALL_STATE(417)] = 11149,
  [SMALL_STATE(418)] = 11157,
  [SMALL_STATE(419)] = 11165,
  [SMALL_STATE(420)] = 11173,
  [SMALL_STATE(421)] = 11181,
  [SMALL_STATE(422)] = 11189,
  [SMALL_STATE(423)] = 11197,
  [SMALL_STATE(424)] = 11205,
  [SMALL_STATE(425)] = 11213,
  [SMALL_STATE(426)] = 11221,
  [SMALL_STATE(427)] = 11229,
  [SMALL_STATE(428)] = 11236,
  [SMALL_STATE(429)] = 11243,
  [SMALL_STATE(430)] = 11250,
  [SMALL_STATE(431)] = 11254,
  [SMALL_STATE(432)] = 11258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(416),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(420),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(377),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(417),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(391),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(418),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(390),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(419),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(387),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(422),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(384),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(423),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(382),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(424),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(365),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(397),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(398),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(400),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(402),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(393),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(404),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(405),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(407),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(408),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(409),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(411),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(413),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(414),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(415),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(378),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(426),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(396),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(395),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(389),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(388),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(367),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(381),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(380),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(194),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [237] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [239] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(285),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [275] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(399),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(208),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(208),
  [367] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(70),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [372] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [376] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [380] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [384] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [386] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [392] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [398] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [400] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [406] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [414] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [416] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [418] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [420] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [422] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [424] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [426] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [428] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 11), SHIFT_REPEAT(71),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [453] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [455] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [473] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [485] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(250),
  [492] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(250),
  [495] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(71),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 19),
  [500] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 2),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 2),
  [504] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [510] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [512] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [514] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [516] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [518] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [520] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [522] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [526] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [530] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [534] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [538] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [542] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [548] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [550] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [554] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [556] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [558] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [566] = {.entry = {.count = 1, .reusable = false}}, SHIFT(429),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(100),
  [585] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [589] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 14),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 14),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 12),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 12),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 18),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 18),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 18),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 18),
  [607] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 14),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 14),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 17),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 20),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 20),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 16),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 16),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [625] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 15),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 21),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 21),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 14),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 14),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 10, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 10, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 11),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 11),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [645] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [649] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10),
  [655] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 12),
  [663] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 12),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 11),
  [671] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 11),
  [673] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 11),
  [675] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 11),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 9),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 9),
  [683] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 22),
  [685] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 22),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 14),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 14),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [693] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 9),
  [697] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 9),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 15),
  [703] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [709] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 16),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 16),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [719] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [721] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [725] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [729] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 22),
  [733] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 22),
  [735] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 25),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 25),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 20),
  [745] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 20),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_pipeline, 3),
  [749] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_pipeline, 3),
  [751] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [753] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 26),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 27),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 27),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [761] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 28),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 25),
  [765] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 25),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 29),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 29),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [775] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pipeline, 3),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pipeline, 3),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [827] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_variable_definition, 5, .production_id = 13),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [839] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 10), SHIFT_REPEAT(430),
  [842] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 10), SHIFT_REPEAT(430),
  [845] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [849] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [853] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [857] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [859] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(320),
  [862] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [866] = {.entry = {.count = 1, .reusable = false}}, SHIFT(179),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [906] = {.entry = {.count = 1, .reusable = false}}, SHIFT(421),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [922] = {.entry = {.count = 1, .reusable = false}}, SHIFT(425),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [944] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [976] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [1090] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
