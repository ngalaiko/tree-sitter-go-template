#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 399
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 86
#define ALIAS_COUNT 1
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 17
#define MAX_ALIAS_SEQUENCE_LENGTH 12
#define PRODUCTION_ID_COUNT 34

enum {
  sym_yaml_no_injection_text = 1,
  aux_sym_text_token1 = 2,
  aux_sym_text_token2 = 3,
  anon_sym_LBRACE_LBRACE = 4,
  anon_sym_LBRACE_LBRACE_DASH = 5,
  anon_sym_ = 6,
  anon_sym_RBRACE_RBRACE = 7,
  anon_sym_DASH_RBRACE_RBRACE = 8,
  anon_sym_if = 9,
  anon_sym_elseif = 10,
  anon_sym_else = 11,
  anon_sym_end = 12,
  anon_sym_COMMA = 13,
  anon_sym_COLON_EQ = 14,
  anon_sym_range = 15,
  anon_sym_template = 16,
  anon_sym_define = 17,
  anon_sym_block = 18,
  anon_sym_with = 19,
  anon_sym_EQ = 20,
  anon_sym_PIPE = 21,
  anon_sym_LPAREN = 22,
  anon_sym_RPAREN = 23,
  anon_sym_2 = 24,
  sym_pipeline_stub = 25,
  anon_sym_DOT = 26,
  anon_sym_DOT2 = 27,
  anon_sym_DOLLAR = 28,
  aux_sym_variable_token1 = 29,
  sym_identifier = 30,
  sym_int_literal = 31,
  sym_float_literal = 32,
  sym_imaginary_literal = 33,
  sym_rune_literal = 34,
  sym_true = 35,
  sym_false = 36,
  sym_nil = 37,
  sym_raw_string_literal = 38,
  anon_sym_DQUOTE = 39,
  aux_sym_interpreted_string_literal_token1 = 40,
  anon_sym_DQUOTE2 = 41,
  sym_escape_sequence = 42,
  sym_comment = 43,
  anon_sym_RBRACE_RBRACE2 = 44,
  anon_sym_DASH_RBRACE_RBRACE2 = 45,
  sym_template = 46,
  sym__block = 47,
  sym_text = 48,
  sym__action = 49,
  sym__comment_action = 50,
  sym__pipeline_action = 51,
  sym_if_action = 52,
  sym__else_if_clause = 53,
  sym__else_clause = 54,
  sym__if_actions_end = 55,
  sym_range_variable_definition = 56,
  sym_range_action = 57,
  sym_template_action = 58,
  sym_define_action = 59,
  sym_block_action = 60,
  sym_with_action = 61,
  sym__pipeline = 62,
  sym_variable_definition = 63,
  sym_assignment = 64,
  sym_chained_pipeline = 65,
  sym_parenthesized_pipeline = 66,
  sym_method_call = 67,
  sym_function_call = 68,
  sym_argument_list = 69,
  sym__expression = 70,
  sym_selector_expression = 71,
  sym__field_identifier = 72,
  sym_field = 73,
  sym_variable = 74,
  sym__literal = 75,
  sym__boolean_literal = 76,
  sym_dot = 77,
  sym__string_literal = 78,
  sym_interpreted_string_literal = 79,
  sym__left_delimiter = 80,
  sym__right_delimiter = 81,
  aux_sym_template_repeat1 = 82,
  aux_sym_if_action_repeat1 = 83,
  aux_sym_argument_list_repeat1 = 84,
  aux_sym_interpreted_string_literal_repeat1 = 85,
  alias_sym_field_identifier = 86,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_yaml_no_injection_text] = "yaml_no_injection_text",
  [aux_sym_text_token1] = "text_token1",
  [aux_sym_text_token2] = "text_token2",
  [anon_sym_LBRACE_LBRACE] = "{{",
  [anon_sym_LBRACE_LBRACE_DASH] = "{{-",
  [anon_sym_] = " ",
  [anon_sym_RBRACE_RBRACE] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE] = "-}}",
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
  [anon_sym_2] = " ",
  [sym_pipeline_stub] = "pipeline_stub",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT2] = ".",
  [anon_sym_DOLLAR] = "$",
  [aux_sym_variable_token1] = "identifier",
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
  [anon_sym_DQUOTE2] = "\"",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [anon_sym_RBRACE_RBRACE2] = "}}",
  [anon_sym_DASH_RBRACE_RBRACE2] = "-}}",
  [sym_template] = "template",
  [sym__block] = "_block",
  [sym_text] = "text",
  [sym__action] = "_action",
  [sym__comment_action] = "_comment_action",
  [sym__pipeline_action] = "_pipeline_action",
  [sym_if_action] = "if_action",
  [sym__else_if_clause] = "_else_if_clause",
  [sym__else_clause] = "_else_clause",
  [sym__if_actions_end] = "_if_actions_end",
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
  [sym_yaml_no_injection_text] = sym_yaml_no_injection_text,
  [aux_sym_text_token1] = aux_sym_text_token1,
  [aux_sym_text_token2] = aux_sym_text_token2,
  [anon_sym_LBRACE_LBRACE] = anon_sym_LBRACE_LBRACE,
  [anon_sym_LBRACE_LBRACE_DASH] = anon_sym_LBRACE_LBRACE_DASH,
  [anon_sym_] = anon_sym_,
  [anon_sym_RBRACE_RBRACE] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE] = anon_sym_DASH_RBRACE_RBRACE,
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
  [anon_sym_2] = anon_sym_,
  [sym_pipeline_stub] = sym_pipeline_stub,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT2] = anon_sym_DOT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_variable_token1] = sym_identifier,
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
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [anon_sym_RBRACE_RBRACE2] = anon_sym_RBRACE_RBRACE,
  [anon_sym_DASH_RBRACE_RBRACE2] = anon_sym_DASH_RBRACE_RBRACE,
  [sym_template] = sym_template,
  [sym__block] = sym__block,
  [sym_text] = sym_text,
  [sym__action] = sym__action,
  [sym__comment_action] = sym__comment_action,
  [sym__pipeline_action] = sym__pipeline_action,
  [sym_if_action] = sym_if_action,
  [sym__else_if_clause] = sym__else_if_clause,
  [sym__else_clause] = sym__else_clause,
  [sym__if_actions_end] = sym__if_actions_end,
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
  [sym_yaml_no_injection_text] = {
    .visible = true,
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
  [anon_sym_LBRACE_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_LBRACE_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_] = {
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
  [anon_sym_2] = {
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
  [anon_sym_DOT2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_variable_token1] = {
    .visible = true,
    .named = true,
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
  [anon_sym_DQUOTE2] = {
    .visible = true,
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
  [anon_sym_RBRACE_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_RBRACE_RBRACE2] = {
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
  [sym__else_if_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__else_clause] = {
    .visible = false,
    .named = true,
  },
  [sym__if_actions_end] = {
    .visible = false,
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
  [10] = {.index = 13, .length = 1},
  [11] = {.index = 14, .length = 2},
  [12] = {.index = 16, .length = 2},
  [13] = {.index = 18, .length = 2},
  [14] = {.index = 20, .length = 3},
  [15] = {.index = 23, .length = 4},
  [16] = {.index = 27, .length = 3},
  [17] = {.index = 30, .length = 4},
  [18] = {.index = 34, .length = 4},
  [19] = {.index = 38, .length = 1},
  [20] = {.index = 39, .length = 3},
  [21] = {.index = 42, .length = 1},
  [22] = {.index = 43, .length = 5},
  [23] = {.index = 48, .length = 1},
  [24] = {.index = 49, .length = 2},
  [25] = {.index = 51, .length = 2},
  [26] = {.index = 53, .length = 2},
  [27] = {.index = 55, .length = 3},
  [28] = {.index = 58, .length = 1},
  [29] = {.index = 59, .length = 2},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 2},
  [32] = {.index = 65, .length = 3},
  [33] = {.index = 68, .length = 3},
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
    {field_condition, 0, .inherited = true},
    {field_option, 0, .inherited = true},
  [13] =
    {field_condition, 2},
  [14] =
    {field_argument, 3},
    {field_name, 2},
  [16] =
    {field_alternative, 4, .inherited = true},
    {field_condition, 2},
  [18] =
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [23] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [27] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_consequence, 4},
  [30] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [34] =
    {field_alternative, 5, .inherited = true},
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [38] =
    {field_range, 2},
  [39] =
    {field_element, 2},
    {field_index, 0},
    {field_range, 4},
  [42] =
    {field_alternative, 3},
  [43] =
    {field_alternative, 6, .inherited = true},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [48] =
    {field_body, 4},
  [49] =
    {field_body, 4},
    {field_range, 2},
  [51] =
    {field_body, 4},
    {field_name, 2},
  [53] =
    {field_condition, 2},
    {field_option, 4},
  [55] =
    {field_argument, 3},
    {field_body, 5},
    {field_name, 2},
  [58] =
    {field_alternative, 7},
  [59] =
    {field_alternative, 7},
    {field_range, 2},
  [61] =
    {field_alternative, 7},
    {field_condition, 2},
  [63] =
    {field_alternative, 8},
    {field_body, 4},
  [65] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [68] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 7,
  [11] = 6,
  [12] = 4,
  [13] = 5,
  [14] = 8,
  [15] = 9,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 16,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 17,
  [32] = 25,
  [33] = 30,
  [34] = 34,
  [35] = 35,
  [36] = 22,
  [37] = 21,
  [38] = 38,
  [39] = 20,
  [40] = 19,
  [41] = 41,
  [42] = 26,
  [43] = 24,
  [44] = 38,
  [45] = 34,
  [46] = 23,
  [47] = 35,
  [48] = 28,
  [49] = 49,
  [50] = 18,
  [51] = 41,
  [52] = 29,
  [53] = 53,
  [54] = 54,
  [55] = 49,
  [56] = 54,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 59,
  [61] = 57,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 64,
  [66] = 66,
  [67] = 66,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 68,
  [73] = 73,
  [74] = 74,
  [75] = 73,
  [76] = 76,
  [77] = 71,
  [78] = 70,
  [79] = 79,
  [80] = 69,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 84,
  [87] = 87,
  [88] = 83,
  [89] = 85,
  [90] = 87,
  [91] = 84,
  [92] = 83,
  [93] = 83,
  [94] = 84,
  [95] = 84,
  [96] = 83,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 99,
  [107] = 104,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 111,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 108,
  [119] = 119,
  [120] = 101,
  [121] = 97,
  [122] = 122,
  [123] = 102,
  [124] = 119,
  [125] = 125,
  [126] = 126,
  [127] = 126,
  [128] = 112,
  [129] = 129,
  [130] = 130,
  [131] = 110,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 109,
  [138] = 138,
  [139] = 138,
  [140] = 129,
  [141] = 141,
  [142] = 134,
  [143] = 130,
  [144] = 135,
  [145] = 114,
  [146] = 136,
  [147] = 141,
  [148] = 132,
  [149] = 115,
  [150] = 105,
  [151] = 151,
  [152] = 152,
  [153] = 117,
  [154] = 122,
  [155] = 103,
  [156] = 133,
  [157] = 100,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 162,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 164,
  [169] = 166,
  [170] = 167,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 181,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 177,
  [186] = 186,
  [187] = 171,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 205,
  [220] = 220,
  [221] = 206,
  [222] = 207,
  [223] = 223,
  [224] = 211,
  [225] = 203,
  [226] = 202,
  [227] = 215,
  [228] = 195,
  [229] = 229,
  [230] = 159,
  [231] = 172,
  [232] = 232,
  [233] = 174,
  [234] = 200,
  [235] = 190,
  [236] = 158,
  [237] = 214,
  [238] = 238,
  [239] = 239,
  [240] = 210,
  [241] = 212,
  [242] = 213,
  [243] = 218,
  [244] = 199,
  [245] = 217,
  [246] = 216,
  [247] = 197,
  [248] = 196,
  [249] = 192,
  [250] = 188,
  [251] = 251,
  [252] = 184,
  [253] = 209,
  [254] = 208,
  [255] = 204,
  [256] = 201,
  [257] = 194,
  [258] = 179,
  [259] = 193,
  [260] = 198,
  [261] = 191,
  [262] = 175,
  [263] = 176,
  [264] = 189,
  [265] = 173,
  [266] = 186,
  [267] = 178,
  [268] = 183,
  [269] = 182,
  [270] = 181,
  [271] = 271,
  [272] = 272,
  [273] = 239,
  [274] = 223,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 271,
  [280] = 280,
  [281] = 232,
  [282] = 278,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 229,
  [287] = 285,
  [288] = 288,
  [289] = 238,
  [290] = 290,
  [291] = 291,
  [292] = 290,
  [293] = 280,
  [294] = 288,
  [295] = 295,
  [296] = 296,
  [297] = 291,
  [298] = 298,
  [299] = 299,
  [300] = 298,
  [301] = 296,
  [302] = 295,
  [303] = 299,
  [304] = 283,
  [305] = 277,
  [306] = 272,
  [307] = 284,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 311,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 314,
  [325] = 325,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 329,
  [330] = 330,
  [331] = 331,
  [332] = 332,
  [333] = 333,
  [334] = 326,
  [335] = 308,
  [336] = 336,
  [337] = 337,
  [338] = 338,
  [339] = 327,
  [340] = 340,
  [341] = 329,
  [342] = 342,
  [343] = 343,
  [344] = 344,
  [345] = 331,
  [346] = 346,
  [347] = 347,
  [348] = 309,
  [349] = 323,
  [350] = 328,
  [351] = 330,
  [352] = 313,
  [353] = 310,
  [354] = 312,
  [355] = 316,
  [356] = 319,
  [357] = 320,
  [358] = 321,
  [359] = 318,
  [360] = 325,
  [361] = 333,
  [362] = 362,
  [363] = 336,
  [364] = 338,
  [365] = 365,
  [366] = 340,
  [367] = 367,
  [368] = 343,
  [369] = 346,
  [370] = 315,
  [371] = 362,
  [372] = 332,
  [373] = 337,
  [374] = 342,
  [375] = 367,
  [376] = 344,
  [377] = 365,
  [378] = 378,
  [379] = 379,
  [380] = 380,
  [381] = 381,
  [382] = 378,
  [383] = 383,
  [384] = 384,
  [385] = 379,
  [386] = 383,
  [387] = 384,
  [388] = 388,
  [389] = 389,
  [390] = 390,
  [391] = 391,
  [392] = 392,
  [393] = 393,
  [394] = 392,
  [395] = 395,
  [396] = 390,
  [397] = 388,
  [398] = 389,
};

static inline bool aux_sym_variable_token1_character_set_1(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 6480
    ? (c < 2949
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
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
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
        : (c <= 65276 || (c < 66864
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
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
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
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_4(int32_t c) {
  return (c < 6512
    ? (c < 2958
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
        : (c <= 2088 || (c < 2613
          ? (c < 2474
            ? (c < 2365
              ? (c < 2185
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : (c <= 2154 || (c >= 2160 && c <= 2183)))
                : (c <= 2190 || (c < 2308
                  ? (c >= 2208 && c <= 2249)
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
      : (c <= 2960 || (c < 3904
        ? (c < 3342
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
            : (c <= 3162 || (c < 3242
              ? (c < 3205
                ? (c < 3168
                  ? c == 3165
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || (c >= 3293 && c <= 3294)))
                : (c <= 3297 || (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)))))))
          : (c <= 3344 || (c < 3648
            ? (c < 3461
              ? (c < 3412
                ? (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : (c <= 3389 || c == 3406))
                : (c <= 3414 || (c < 3450
                  ? (c >= 3423 && c <= 3425)
                  : c <= 3455)))
              : (c <= 3478 || (c < 3520
                ? (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : (c <= 3515 || c == 3517))
                : (c <= 3526 || (c < 3634
                  ? (c >= 3585 && c <= 3632)
                  : c <= 3635)))))
            : (c <= 3654 || (c < 3762
              ? (c < 3724
                ? (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : (c <= 3716 || (c >= 3718 && c <= 3722)))
                : (c <= 3747 || (c < 3751
                  ? c == 3749
                  : c <= 3760)))
              : (c <= 3763 || (c < 3782
                ? (c < 3776
                  ? c == 3773
                  : c <= 3780)
                : (c <= 3782 || (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)))))))))
        : (c <= 3911 || (c < 4808
          ? (c < 4301
            ? (c < 4193
              ? (c < 4159
                ? (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : (c <= 3980 || (c >= 4096 && c <= 4138)))
                : (c <= 4159 || (c < 4186
                  ? (c >= 4176 && c <= 4181)
                  : c <= 4189)))
              : (c <= 4193 || (c < 4238
                ? (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : (c <= 4208 || (c >= 4213 && c <= 4225)))
                : (c <= 4238 || (c < 4295
                  ? (c >= 4256 && c <= 4293)
                  : c <= 4295)))))
            : (c <= 4301 || (c < 4704
              ? (c < 4688
                ? (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))
                : (c <= 4694 || (c < 4698
                  ? c == 4696
                  : c <= 4701)))
              : (c <= 4744 || (c < 4792
                ? (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : (c <= 4784 || (c >= 4786 && c <= 4789)))
                : (c <= 4798 || (c < 4802
                  ? c == 4800
                  : c <= 4805)))))))
          : (c <= 4822 || (c < 5952
            ? (c < 5121
              ? (c < 4992
                ? (c < 4882
                  ? (c >= 4824 && c <= 4880)
                  : (c <= 4885 || (c >= 4888 && c <= 4954)))
                : (c <= 5007 || (c < 5112
                  ? (c >= 5024 && c <= 5109)
                  : c <= 5117)))
              : (c <= 5740 || (c < 5873
                ? (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : (c <= 5786 || (c >= 5792 && c <= 5866)))
                : (c <= 5880 || (c < 5919
                  ? (c >= 5888 && c <= 5905)
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
    : (c <= 6516 || (c < 43250
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
              : (c <= 6988 || (c < 7168
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
        : (c <= 8521 || (c < 12549
          ? (c < 11696
            ? (c < 11559
              ? (c < 11499
                ? (c < 8579
                  ? c == 8526
                  : (c <= 8580 || (c >= 11264 && c <= 11492)))
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
              : (c <= 12294 || (c < 12445
                ? (c < 12347
                  ? (c >= 12337 && c <= 12341)
                  : (c <= 12348 || (c >= 12353 && c <= 12438)))
                : (c <= 12447 || (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : c <= 12543)))))))
          : (c <= 12591 || (c < 42656
            ? (c < 40959
              ? (c < 13312
                ? (c < 12704
                  ? (c >= 12593 && c <= 12686)
                  : (c <= 12735 || (c >= 12784 && c <= 12799)))
                : (c <= 13312 || (c < 19968
                  ? c == 19903
                  : c <= 19968)))
              : (c <= 42124 || (c < 42538
                ? (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : (c <= 42508 || (c >= 42512 && c <= 42527)))
                : (c <= 42539 || (c < 42623
                  ? (c >= 42560 && c <= 42606)
                  : c <= 42653)))))
            : (c <= 42725 || (c < 42994
              ? (c < 42960
                ? (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : (c <= 42888 || (c >= 42891 && c <= 42954)))
                : (c <= 42961 || (c < 42965
                  ? c == 42963
                  : c <= 42969)))
              : (c <= 43009 || (c < 43020
                ? (c < 43015
                  ? (c >= 43011 && c <= 43013)
                  : c <= 43018)
                : (c <= 43042 || (c < 43138
                  ? (c >= 43072 && c <= 43123)
                  : c <= 43187)))))))))))
      : (c <= 43255 || (c < 65313
        ? (c < 43808
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
              : (c <= 43714 || (c < 43777
                ? (c < 43744
                  ? (c >= 43739 && c <= 43741)
                  : (c <= 43754 || (c >= 43762 && c <= 43764)))
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_5(int32_t c) {
  return (c < 6480
    ? (c < 2949
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
        : (c <= 2084 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2160
                ? (c < 2112
                  ? c == 2088
                  : (c <= 2136 || (c >= 2144 && c <= 2154)))
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))
              : (c <= 2361 || (c < 2417
                ? (c < 2384
                  ? c == 2365
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2447
                  ? (c >= 2437 && c <= 2444)
                  : c <= 2448)))))
            : (c <= 2472 || (c < 2527
              ? (c < 2493
                ? (c < 2482
                  ? (c >= 2474 && c <= 2480)
                  : (c <= 2482 || (c >= 2486 && c <= 2489)))
                : (c <= 2493 || (c < 2524
                  ? c == 2510
                  : c <= 2525)))
              : (c <= 2529 || (c < 2575
                ? (c < 2556
                  ? (c >= 2544 && c <= 2545)
                  : (c <= 2556 || (c >= 2565 && c <= 2570)))
                : (c <= 2576 || (c < 2602
                  ? (c >= 2579 && c <= 2600)
                  : c <= 2608)))))))
          : (c <= 2611 || (c < 2784
            ? (c < 2703
              ? (c < 2654
                ? (c < 2616
                  ? (c >= 2613 && c <= 2614)
                  : (c <= 2617 || (c >= 2649 && c <= 2652)))
                : (c <= 2654 || (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : c <= 2701)))
              : (c <= 2705 || (c < 2741
                ? (c < 2730
                  ? (c >= 2707 && c <= 2728)
                  : (c <= 2736 || (c >= 2738 && c <= 2739)))
                : (c <= 2745 || (c < 2768
                  ? c == 2749
                  : c <= 2768)))))
            : (c <= 2785 || (c < 2869
              ? (c < 2835
                ? (c < 2821
                  ? c == 2809
                  : (c <= 2828 || (c >= 2831 && c <= 2832)))
                : (c <= 2856 || (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : c <= 2867)))
              : (c <= 2873 || (c < 2911
                ? (c < 2908
                  ? c == 2877
                  : c <= 2909)
                : (c <= 2913 || (c < 2947
                  ? c == 2929
                  : c <= 2947)))))))))))
      : (c <= 2954 || (c < 3840
        ? (c < 3332
          ? (c < 3133
            ? (c < 2984
              ? (c < 2972
                ? (c < 2962
                  ? (c >= 2958 && c <= 2960)
                  : (c <= 2965 || (c >= 2969 && c <= 2970)))
                : (c <= 2972 || (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : c <= 2980)))
              : (c <= 2986 || (c < 3086
                ? (c < 3024
                  ? (c >= 2990 && c <= 3001)
                  : (c <= 3024 || (c >= 3077 && c <= 3084)))
                : (c <= 3088 || (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : c <= 3129)))))
            : (c <= 3133 || (c < 3218
              ? (c < 3200
                ? (c < 3165
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3165 || (c >= 3168 && c <= 3169)))
                : (c <= 3200 || (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : c <= 3216)))
              : (c <= 3240 || (c < 3293
                ? (c < 3253
                  ? (c >= 3242 && c <= 3251)
                  : (c <= 3257 || c == 3261))
                : (c <= 3294 || (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : c <= 3314)))))))
          : (c <= 3340 || (c < 3634
            ? (c < 3450
              ? (c < 3406
                ? (c < 3346
                  ? (c >= 3342 && c <= 3344)
                  : (c <= 3386 || c == 3389))
                : (c <= 3406 || (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : c <= 3425)))
              : (c <= 3455 || (c < 3517
                ? (c < 3482
                  ? (c >= 3461 && c <= 3478)
                  : (c <= 3505 || (c >= 3507 && c <= 3515)))
                : (c <= 3517 || (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : c <= 3632)))))
            : (c <= 3635 || (c < 3751
              ? (c < 3718
                ? (c < 3713
                  ? (c >= 3648 && c <= 3654)
                  : (c <= 3714 || c == 3716))
                : (c <= 3722 || (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : c <= 3749)))
              : (c <= 3760 || (c < 3776
                ? (c < 3773
                  ? (c >= 3762 && c <= 3763)
                  : c <= 3773)
                : (c <= 3780 || (c < 3804
                  ? c == 3782
                  : c <= 3807)))))))))
        : (c <= 3840 || (c < 4802
          ? (c < 4295
            ? (c < 4186
              ? (c < 4096
                ? (c < 3913
                  ? (c >= 3904 && c <= 3911)
                  : (c <= 3948 || (c >= 3976 && c <= 3980)))
                : (c <= 4138 || (c < 4176
                  ? c == 4159
                  : c <= 4181)))
              : (c <= 4189 || (c < 4213
                ? (c < 4197
                  ? c == 4193
                  : (c <= 4198 || (c >= 4206 && c <= 4208)))
                : (c <= 4225 || (c < 4256
                  ? c == 4238
                  : c <= 4293)))))
            : (c <= 4295 || (c < 4698
              ? (c < 4682
                ? (c < 4304
                  ? c == 4301
                  : (c <= 4346 || (c >= 4348 && c <= 4680)))
                : (c <= 4685 || (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : c <= 4696)))
              : (c <= 4701 || (c < 4786
                ? (c < 4746
                  ? (c >= 4704 && c <= 4744)
                  : (c <= 4749 || (c >= 4752 && c <= 4784)))
                : (c <= 4789 || (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)))))))
          : (c <= 4805 || (c < 5919
            ? (c < 5112
              ? (c < 4888
                ? (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : (c <= 4880 || (c >= 4882 && c <= 4885)))
                : (c <= 4954 || (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : c <= 5109)))
              : (c <= 5117 || (c < 5792
                ? (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))
                : (c <= 5866 || (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : c <= 5905)))))
            : (c <= 5937 || (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c >= 5952 && c <= 5969)
                  : (c <= 5996 || (c >= 5998 && c <= 6000)))
                : (c <= 6067 || (c < 6108
                  ? c == 6103
                  : c <= 6108)))
              : (c <= 6264 || (c < 6314
                ? (c < 6279
                  ? (c >= 6272 && c <= 6276)
                  : c <= 6312)
                : (c <= 6314 || (c < 6400
                  ? (c >= 6320 && c <= 6389)
                  : c <= 6430)))))))))))))
    : (c <= 6509 || (c < 43138
      ? (c < 8508
        ? (c < 8025
          ? (c < 7258
            ? (c < 6917
              ? (c < 6656
                ? (c < 6528
                  ? (c >= 6512 && c <= 6516)
                  : (c <= 6571 || (c >= 6576 && c <= 6601)))
                : (c <= 6678 || (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : c <= 6823)))
              : (c <= 6963 || (c < 7098
                ? (c < 7043
                  ? (c >= 6981 && c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7245
                  ? (c >= 7168 && c <= 7203)
                  : c <= 7247)))))
            : (c <= 7293 || (c < 7418
              ? (c < 7401
                ? (c < 7312
                  ? (c >= 7296 && c <= 7304)
                  : (c <= 7354 || (c >= 7357 && c <= 7359)))
                : (c <= 7404 || (c < 7413
                  ? (c >= 7406 && c <= 7411)
                  : c <= 7414)))
              : (c <= 7418 || (c < 7968
                ? (c < 7680
                  ? (c >= 7424 && c <= 7615)
                  : (c <= 7957 || (c >= 7960 && c <= 7965)))
                : (c <= 8005 || (c < 8016
                  ? (c >= 8008 && c <= 8013)
                  : c <= 8023)))))))
          : (c <= 8025 || (c < 8305
            ? (c < 8130
              ? (c < 8064
                ? (c < 8029
                  ? c == 8027
                  : (c <= 8029 || (c >= 8031 && c <= 8061)))
                : (c <= 8116 || (c < 8126
                  ? (c >= 8118 && c <= 8124)
                  : c <= 8126)))
              : (c <= 8132 || (c < 8160
                ? (c < 8144
                  ? (c >= 8134 && c <= 8140)
                  : (c <= 8147 || (c >= 8150 && c <= 8155)))
                : (c <= 8172 || (c < 8182
                  ? (c >= 8178 && c <= 8180)
                  : c <= 8188)))))
            : (c <= 8305 || (c < 8473
              ? (c < 8455
                ? (c < 8336
                  ? c == 8319
                  : (c <= 8348 || c == 8450))
                : (c <= 8455 || (c < 8469
                  ? (c >= 8458 && c <= 8467)
                  : c <= 8469)))
              : (c <= 8477 || (c < 8488
                ? (c < 8486
                  ? c == 8484
                  : c <= 8486)
                : (c <= 8488 || (c < 8495
                  ? (c >= 8490 && c <= 8493)
                  : c <= 8505)))))))))
        : (c <= 8511 || (c < 12540
          ? (c < 11688
            ? (c < 11520
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11492 || (c < 11506
                  ? (c >= 11499 && c <= 11502)
                  : c <= 11507)))
              : (c <= 11557 || (c < 11631
                ? (c < 11565
                  ? c == 11559
                  : (c <= 11565 || (c >= 11568 && c <= 11623)))
                : (c <= 11631 || (c < 11680
                  ? (c >= 11648 && c <= 11670)
                  : c <= 11686)))))
            : (c <= 11694 || (c < 11823
              ? (c < 11720
                ? (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 11736
                  ? (c >= 11728 && c <= 11734)
                  : c <= 11742)))
              : (c <= 11823 || (c < 12353
                ? (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : (c <= 12341 || (c >= 12347 && c <= 12348)))
                : (c <= 12438 || (c < 12449
                  ? (c >= 12445 && c <= 12447)
                  : c <= 12538)))))))
          : (c <= 12543 || (c < 42623
            ? (c < 19968
              ? (c < 12784
                ? (c < 12593
                  ? (c >= 12549 && c <= 12591)
                  : (c <= 12686 || (c >= 12704 && c <= 12735)))
                : (c <= 12799 || (c < 19903
                  ? c == 13312
                  : c <= 19903)))
              : (c <= 19968 || (c < 42512
                ? (c < 42192
                  ? (c >= 40959 && c <= 42124)
                  : (c <= 42237 || (c >= 42240 && c <= 42508)))
                : (c <= 42527 || (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : c <= 42606)))))
            : (c <= 42653 || (c < 42965
              ? (c < 42891
                ? (c < 42775
                  ? (c >= 42656 && c <= 42725)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))
                : (c <= 42954 || (c < 42963
                  ? (c >= 42960 && c <= 42961)
                  : c <= 42963)))
              : (c <= 42969 || (c < 43015
                ? (c < 43011
                  ? (c >= 42994 && c <= 43009)
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
        : (c <= 65276 || (c < 66864
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
              : (c <= 66461 || (c < 66736
                ? (c < 66504
                  ? (c >= 66464 && c <= 66499)
                  : (c <= 66511 || (c >= 66560 && c <= 66717)))
                : (c <= 66771 || (c < 66816
                  ? (c >= 66776 && c <= 66811)
                  : c <= 66855)))))))
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_6(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
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
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_7(int32_t c) {
  return (c < 6576
    ? (c < 2972
      ? (c < 2185
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
                : (c <= 2136 || (c < 2160
                  ? (c >= 2144 && c <= 2154)
                  : c <= 2183)))))))))
        : (c <= 2190 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2208 && c <= 2249)
                  : (c <= 2361 || c == 2365))
                : (c <= 2384 || (c < 2417
                  ? (c >= 2392 && c <= 2401)
                  : c <= 2432)))
              : (c <= 2444 || (c < 2482
                ? (c < 2451
                  ? (c >= 2447 && c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))
                : (c <= 2482 || (c < 2493
                  ? (c >= 2486 && c <= 2489)
                  : c <= 2493)))))
            : (c <= 2510 || (c < 2579
              ? (c < 2556
                ? (c < 2527
                  ? (c >= 2524 && c <= 2525)
                  : (c <= 2529 || (c >= 2544 && c <= 2545)))
                : (c <= 2556 || (c < 2575
                  ? (c >= 2565 && c <= 2570)
                  : c <= 2576)))
              : (c <= 2600 || (c < 2613
                ? (c < 2610
                  ? (c >= 2602 && c <= 2608)
                  : c <= 2611)
                : (c <= 2614 || (c < 2649
                  ? (c >= 2616 && c <= 2617)
                  : c <= 2652)))))))
          : (c <= 2654 || (c < 2835
            ? (c < 2741
              ? (c < 2707
                ? (c < 2693
                  ? (c >= 2674 && c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))
                : (c <= 2728 || (c < 2738
                  ? (c >= 2730 && c <= 2736)
                  : c <= 2739)))
              : (c <= 2745 || (c < 2809
                ? (c < 2768
                  ? c == 2749
                  : (c <= 2768 || (c >= 2784 && c <= 2785)))
                : (c <= 2809 || (c < 2831
                  ? (c >= 2821 && c <= 2828)
                  : c <= 2832)))))
            : (c <= 2856 || (c < 2929
              ? (c < 2877
                ? (c < 2866
                  ? (c >= 2858 && c <= 2864)
                  : (c <= 2867 || (c >= 2869 && c <= 2873)))
                : (c <= 2877 || (c < 2911
                  ? (c >= 2908 && c <= 2909)
                  : c <= 2913)))
              : (c <= 2929 || (c < 2958
                ? (c < 2949
                  ? c == 2947
                  : c <= 2954)
                : (c <= 2960 || (c < 2969
                  ? (c >= 2962 && c <= 2965)
                  : c <= 2970)))))))))))
      : (c <= 2972 || (c < 4096
        ? (c < 3406
          ? (c < 3200
            ? (c < 3086
              ? (c < 2990
                ? (c < 2979
                  ? (c >= 2974 && c <= 2975)
                  : (c <= 2980 || (c >= 2984 && c <= 2986)))
                : (c <= 3001 || (c < 3077
                  ? c == 3024
                  : c <= 3084)))
              : (c <= 3088 || (c < 3160
                ? (c < 3114
                  ? (c >= 3090 && c <= 3112)
                  : (c <= 3129 || c == 3133))
                : (c <= 3162 || (c < 3168
                  ? c == 3165
                  : c <= 3169)))))
            : (c <= 3200 || (c < 3293
              ? (c < 3242
                ? (c < 3214
                  ? (c >= 3205 && c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))
                : (c <= 3251 || (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : c <= 3261)))
              : (c <= 3294 || (c < 3342
                ? (c < 3313
                  ? (c >= 3296 && c <= 3297)
                  : (c <= 3314 || (c >= 3332 && c <= 3340)))
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_8(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_9(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_10(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_11(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_12(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_13(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_14(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_15(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_16(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_17(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_18(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_19(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_20(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_21(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_22(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_23(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_24(int32_t c) {
  return (c < 6576
    ? (c < 2974
      ? (c < 2208
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
                : (c <= 2154 || (c < 2185
                  ? (c >= 2160 && c <= 2183)
                  : c <= 2190)))))))))
        : (c <= 2249 || (c < 2674
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
      : (c <= 2975 || (c < 4096
        ? (c < 3406
          ? (c < 3205
            ? (c < 3090
              ? (c < 3024
                ? (c < 2984
                  ? (c >= 2979 && c <= 2980)
                  : (c <= 2986 || (c >= 2990 && c <= 3001)))
                : (c <= 3024 || (c < 3086
                  ? (c >= 3077 && c <= 3084)
                  : c <= 3088)))
              : (c <= 3112 || (c < 3165
                ? (c < 3133
                  ? (c >= 3114 && c <= 3129)
                  : (c <= 3133 || (c >= 3160 && c <= 3162)))
                : (c <= 3165 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3293
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3342
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : c <= 3340)
                : (c <= 3344 || (c < 3389
                  ? (c >= 3346 && c <= 3386)
                  : c <= 3389)))))))
          : (c <= 3406 || (c < 3718
            ? (c < 3517
              ? (c < 3461
                ? (c < 3423
                  ? (c >= 3412 && c <= 3414)
                  : (c <= 3425 || (c >= 3450 && c <= 3455)))
                : (c <= 3478 || (c < 3507
                  ? (c >= 3482 && c <= 3505)
                  : c <= 3515)))
              : (c <= 3517 || (c < 3648
                ? (c < 3585
                  ? (c >= 3520 && c <= 3526)
                  : (c <= 3632 || (c >= 3634 && c <= 3635)))
                : (c <= 3654 || (c < 3716
                  ? (c >= 3713 && c <= 3714)
                  : c <= 3716)))))
            : (c <= 3722 || (c < 3782
              ? (c < 3762
                ? (c < 3749
                  ? (c >= 3724 && c <= 3747)
                  : (c <= 3749 || (c >= 3751 && c <= 3760)))
                : (c <= 3763 || (c < 3776
                  ? c == 3773
                  : c <= 3780)))
              : (c <= 3782 || (c < 3904
                ? (c < 3840
                  ? (c >= 3804 && c <= 3807)
                  : c <= 3840)
                : (c <= 3911 || (c < 3976
                  ? (c >= 3913 && c <= 3948)
                  : c <= 3980)))))))))
        : (c <= 4138 || (c < 4882
          ? (c < 4682
            ? (c < 4213
              ? (c < 4193
                ? (c < 4176
                  ? c == 4159
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))
                : (c <= 4193 || (c < 4206
                  ? (c >= 4197 && c <= 4198)
                  : c <= 4208)))
              : (c <= 4225 || (c < 4301
                ? (c < 4256
                  ? c == 4238
                  : (c <= 4293 || c == 4295))
                : (c <= 4301 || (c < 4348
                  ? (c >= 4304 && c <= 4346)
                  : c <= 4680)))))
            : (c <= 4685 || (c < 4786
              ? (c < 4704
                ? (c < 4696
                  ? (c >= 4688 && c <= 4694)
                  : (c <= 4696 || (c >= 4698 && c <= 4701)))
                : (c <= 4744 || (c < 4752
                  ? (c >= 4746 && c <= 4749)
                  : c <= 4784)))
              : (c <= 4789 || (c < 4802
                ? (c < 4800
                  ? (c >= 4792 && c <= 4798)
                  : c <= 4800)
                : (c <= 4805 || (c < 4824
                  ? (c >= 4808 && c <= 4822)
                  : c <= 4880)))))))
          : (c <= 4885 || (c < 5998
            ? (c < 5761
              ? (c < 5112
                ? (c < 4992
                  ? (c >= 4888 && c <= 4954)
                  : (c <= 5007 || (c >= 5024 && c <= 5109)))
                : (c <= 5117 || (c < 5743
                  ? (c >= 5121 && c <= 5740)
                  : c <= 5759)))
              : (c <= 5786 || (c < 5919
                ? (c < 5873
                  ? (c >= 5792 && c <= 5866)
                  : (c <= 5880 || (c >= 5888 && c <= 5905)))
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
    : (c <= 6601 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7357
            ? (c < 7086
              ? (c < 6917
                ? (c < 6688
                  ? (c >= 6656 && c <= 6678)
                  : (c <= 6740 || c == 6823))
                : (c <= 6963 || (c < 7043
                  ? (c >= 6981 && c <= 6988)
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
}

static inline bool sym_identifier_character_set_25(int32_t c) {
  return (c < 6656
    ? (c < 2979
      ? (c < 2308
        ? (c < 1376
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
              : (c <= 908 || (c < 1162
                ? (c < 931
                  ? (c >= 910 && c <= 929)
                  : (c <= 1013 || (c >= 1015 && c <= 1153)))
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
              : (c <= 2088 || (c < 2160
                ? (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)
                : (c <= 2183 || (c < 2208
                  ? (c >= 2185 && c <= 2190)
                  : c <= 2249)))))))))
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
      : (c <= 2980 || (c < 4159
        ? (c < 3412
          ? (c < 3214
            ? (c < 3114
              ? (c < 3077
                ? (c < 2990
                  ? (c >= 2984 && c <= 2986)
                  : (c <= 3001 || c == 3024))
                : (c <= 3084 || (c < 3090
                  ? (c >= 3086 && c <= 3088)
                  : c <= 3112)))
              : (c <= 3129 || (c < 3168
                ? (c < 3160
                  ? c == 3133
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3205
                  ? c == 3200
                  : c <= 3212)))))
            : (c <= 3216 || (c < 3313
              ? (c < 3261
                ? (c < 3242
                  ? (c >= 3218 && c <= 3240)
                  : (c <= 3251 || (c >= 3253 && c <= 3257)))
                : (c <= 3261 || (c < 3296
                  ? (c >= 3293 && c <= 3294)
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
          : (c <= 4954 || (c < 6016
            ? (c < 5792
              ? (c < 5121
                ? (c < 5024
                  ? (c >= 4992 && c <= 5007)
                  : (c <= 5109 || (c >= 5112 && c <= 5117)))
                : (c <= 5740 || (c < 5761
                  ? (c >= 5743 && c <= 5759)
                  : c <= 5786)))
              : (c <= 5866 || (c < 5952
                ? (c < 5888
                  ? (c >= 5873 && c <= 5880)
                  : (c <= 5905 || (c >= 5919 && c <= 5937)))
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
    : (c <= 6678 || (c < 43259
      ? (c < 8579
        ? (c < 8031
          ? (c < 7401
            ? (c < 7098
              ? (c < 6981
                ? (c < 6823
                  ? (c >= 6688 && c <= 6740)
                  : (c <= 6823 || (c >= 6917 && c <= 6963)))
                : (c <= 6988 || (c < 7086
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
        : (c <= 8580 || (c < 12593
          ? (c < 11712
            ? (c < 11568
              ? (c < 11520
                ? (c < 11499
                  ? (c >= 11264 && c <= 11492)
                  : (c <= 11502 || (c >= 11506 && c <= 11507)))
                : (c <= 11557 || (c < 11565
                  ? c == 11559
                  : c <= 11565)))
              : (c <= 11623 || (c < 11688
                ? (c < 11648
                  ? c == 11631
                  : (c <= 11670 || (c >= 11680 && c <= 11686)))
                : (c <= 11694 || (c < 11704
                  ? (c >= 11696 && c <= 11702)
                  : c <= 11710)))))
            : (c <= 11718 || (c < 12347
              ? (c < 11823
                ? (c < 11728
                  ? (c >= 11720 && c <= 11726)
                  : (c <= 11734 || (c >= 11736 && c <= 11742)))
                : (c <= 11823 || (c < 12337
                  ? (c >= 12293 && c <= 12294)
                  : c <= 12341)))
              : (c <= 12348 || (c < 12449
                ? (c < 12445
                  ? (c >= 12353 && c <= 12438)
                  : c <= 12447)
                : (c <= 12538 || (c < 12549
                  ? (c >= 12540 && c <= 12543)
                  : c <= 12591)))))))
          : (c <= 12686 || (c < 42775
            ? (c < 42192
              ? (c < 19903
                ? (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : (c <= 12799 || c == 13312))
                : (c <= 19903 || (c < 40959
                  ? c == 19968
                  : c <= 42124)))
              : (c <= 42237 || (c < 42560
                ? (c < 42512
                  ? (c >= 42240 && c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42656
                  ? (c >= 42623 && c <= 42653)
                  : c <= 42725)))))
            : (c <= 42783 || (c < 43011
              ? (c < 42963
                ? (c < 42891
                  ? (c >= 42786 && c <= 42888)
                  : (c <= 42954 || (c >= 42960 && c <= 42961)))
                : (c <= 42963 || (c < 42994
                  ? (c >= 42965 && c <= 42969)
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
          : (c <= 66915 || (c < 67506
            ? (c < 66995
              ? (c < 66964
                ? (c < 66940
                  ? (c >= 66928 && c <= 66938)
                  : (c <= 66954 || (c >= 66956 && c <= 66962)))
                : (c <= 66965 || (c < 66979
                  ? (c >= 66967 && c <= 66977)
                  : c <= 66993)))
              : (c <= 67001 || (c < 67424
                ? (c < 67072
                  ? (c >= 67003 && c <= 67004)
                  : (c <= 67382 || (c >= 67392 && c <= 67413)))
                : (c <= 67431 || (c < 67463
                  ? (c >= 67456 && c <= 67461)
                  : c <= 67504)))))
            : (c <= 67514 || (c < 67680
              ? (c < 67639
                ? (c < 67592
                  ? (c >= 67584 && c <= 67589)
                  : (c <= 67592 || (c >= 67594 && c <= 67637)))
                : (c <= 67640 || (c < 67647
                  ? c == 67644
                  : c <= 67669)))
              : (c <= 67702 || (c < 67828
                ? (c < 67808
                  ? (c >= 67712 && c <= 67742)
                  : c <= 67826)
                : (c <= 67829 || (c < 67872
                  ? (c >= 67840 && c <= 67861)
                  : c <= 67883)))))))))))))));
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
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(34);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(107);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(162);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(88);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(180);
      if (lookahead == '\\') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(110);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 15:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 16:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 17:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 18:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 19:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 20:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 21:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(21)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 22:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 23:
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 24:
      if (lookahead == '\'') ADVANCE(173);
      END_STATE();
    case 25:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 26:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(45);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(113);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      END_STATE();
    case 27:
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '-') ADVANCE(45);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(162);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      END_STATE();
    case 28:
      if (lookahead == '*') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead == '/') ADVANCE(184);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == '*') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == '_') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 33:
      if (lookahead == '=') ADVANCE(97);
      END_STATE();
    case 34:
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 35:
      if (lookahead == '\\') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 37:
      if (lookahead == '_') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 38:
      if (lookahead == '`') ADVANCE(177);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(92);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == '}') ADVANCE(89);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == '}') ADVANCE(186);
      END_STATE();
    case 44:
      if (lookahead == '}') ADVANCE(90);
      END_STATE();
    case 45:
      if (lookahead == '}') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == '}') ADVANCE(44);
      END_STATE();
    case 47:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 48:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 49:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 51:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 52:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(24);
      END_STATE();
    case 53:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 54:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(52);
      END_STATE();
    case 55:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(24);
      if (lookahead == 'U') ADVANCE(77);
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(54);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(181);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 78:
      if (eof) ADVANCE(80);
      if (lookahead == '"') ADVANCE(178);
      if (lookahead == '$') ADVANCE(112);
      if (lookahead == '\'') ADVANCE(35);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == ',') ADVANCE(96);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '.') ADVANCE(111);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == ':') ADVANCE(33);
      if (lookahead == '=') ADVANCE(103);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(162);
      if (lookahead == '`') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(115);
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 'i') ADVANCE(129);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 'p') ADVANCE(133);
      if (lookahead == 'r') ADVANCE(159);
      if (lookahead == 't') ADVANCE(114);
      if (lookahead == 'w') ADVANCE(134);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '|') ADVANCE(104);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(78)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 79:
      if (eof) ADVANCE(80);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '{') ADVANCE(85);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_yaml_no_injection_text);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_yaml_no_injection_text);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(84);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '-') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(84);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead != 0 &&
          lookahead != '{') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_text_token2);
      if (lookahead == '{') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE_DASH);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_if);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(40);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_else);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_end);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_range);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_template);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_define);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_block);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_with);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_2);
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOT2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_variable_token1);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(153);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(155);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(162);
      if (lookahead == 'c') ADVANCE(138);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(162);
      if (lookahead == 'd') ADVANCE(95);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(174);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(175);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(99);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(162);
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(162);
      if (lookahead == 'f') ADVANCE(91);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(162);
      if (lookahead == 'f') ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(162);
      if (lookahead == 'g') ADVANCE(122);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(162);
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(162);
      if (lookahead == 'i') ADVANCE(150);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(162);
      if (lookahead == 'i') ADVANCE(156);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(162);
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(162);
      if (lookahead == 'i') ADVANCE(140);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(162);
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(162);
      if (lookahead == 'k') ADVANCE(101);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(176);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(161);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(162);
      if (lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(162);
      if (lookahead == 'm') ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(162);
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(162);
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(162);
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(162);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(162);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(162);
      if (lookahead == 'p') ADVANCE(128);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(162);
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(162);
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(162);
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(162);
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(162);
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(162);
      if (lookahead == 't') ADVANCE(132);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(162);
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(162);
      if (lookahead == 'u') ADVANCE(120);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(162);
      if (lookahead == 'a') ADVANCE(146);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(162);
      if (lookahead == 'a') ADVANCE(142);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(162);
      if (lookahead == 'a') ADVANCE(157);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(36);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(37);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(32);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == '_') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(171);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == '_') ADVANCE(56);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(49);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(47);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(53);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(59);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == '_') ADVANCE(57);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(47);
      if (lookahead == 'i') ADVANCE(172);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_true);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_false);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_nil);
      if (aux_sym_variable_token1_character_set_1(lookahead)) ADVANCE(162);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE2);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_DASH_RBRACE_RBRACE2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 79},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 17},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 17},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 17},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 18},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 18},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 18},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 18},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 18},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 18},
  [39] = {.lex_state = 18},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 18},
  [42] = {.lex_state = 18},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 18},
  [45] = {.lex_state = 18},
  [46] = {.lex_state = 18},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 18},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 18},
  [51] = {.lex_state = 18},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 19},
  [55] = {.lex_state = 12},
  [56] = {.lex_state = 19},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 3},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 16},
  [79] = {.lex_state = 16},
  [80] = {.lex_state = 16},
  [81] = {.lex_state = 16},
  [82] = {.lex_state = 16},
  [83] = {.lex_state = 7},
  [84] = {.lex_state = 14},
  [85] = {.lex_state = 79},
  [86] = {.lex_state = 17},
  [87] = {.lex_state = 79},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 79},
  [90] = {.lex_state = 79},
  [91] = {.lex_state = 18},
  [92] = {.lex_state = 8},
  [93] = {.lex_state = 10},
  [94] = {.lex_state = 19},
  [95] = {.lex_state = 19},
  [96] = {.lex_state = 10},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 79},
  [99] = {.lex_state = 79},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 79},
  [103] = {.lex_state = 79},
  [104] = {.lex_state = 79},
  [105] = {.lex_state = 79},
  [106] = {.lex_state = 79},
  [107] = {.lex_state = 79},
  [108] = {.lex_state = 79},
  [109] = {.lex_state = 79},
  [110] = {.lex_state = 79},
  [111] = {.lex_state = 79},
  [112] = {.lex_state = 79},
  [113] = {.lex_state = 79},
  [114] = {.lex_state = 79},
  [115] = {.lex_state = 79},
  [116] = {.lex_state = 79},
  [117] = {.lex_state = 79},
  [118] = {.lex_state = 79},
  [119] = {.lex_state = 79},
  [120] = {.lex_state = 12},
  [121] = {.lex_state = 12},
  [122] = {.lex_state = 79},
  [123] = {.lex_state = 79},
  [124] = {.lex_state = 79},
  [125] = {.lex_state = 79},
  [126] = {.lex_state = 79},
  [127] = {.lex_state = 79},
  [128] = {.lex_state = 79},
  [129] = {.lex_state = 79},
  [130] = {.lex_state = 79},
  [131] = {.lex_state = 79},
  [132] = {.lex_state = 79},
  [133] = {.lex_state = 79},
  [134] = {.lex_state = 79},
  [135] = {.lex_state = 79},
  [136] = {.lex_state = 79},
  [137] = {.lex_state = 79},
  [138] = {.lex_state = 79},
  [139] = {.lex_state = 79},
  [140] = {.lex_state = 79},
  [141] = {.lex_state = 79},
  [142] = {.lex_state = 79},
  [143] = {.lex_state = 79},
  [144] = {.lex_state = 79},
  [145] = {.lex_state = 79},
  [146] = {.lex_state = 79},
  [147] = {.lex_state = 79},
  [148] = {.lex_state = 79},
  [149] = {.lex_state = 79},
  [150] = {.lex_state = 79},
  [151] = {.lex_state = 79},
  [152] = {.lex_state = 79},
  [153] = {.lex_state = 79},
  [154] = {.lex_state = 79},
  [155] = {.lex_state = 79},
  [156] = {.lex_state = 79},
  [157] = {.lex_state = 12},
  [158] = {.lex_state = 16},
  [159] = {.lex_state = 16},
  [160] = {.lex_state = 4},
  [161] = {.lex_state = 25},
  [162] = {.lex_state = 1},
  [163] = {.lex_state = 12},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 12},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 12},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 1},
  [172] = {.lex_state = 79},
  [173] = {.lex_state = 79},
  [174] = {.lex_state = 79},
  [175] = {.lex_state = 79},
  [176] = {.lex_state = 79},
  [177] = {.lex_state = 1},
  [178] = {.lex_state = 79},
  [179] = {.lex_state = 79},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 79},
  [182] = {.lex_state = 79},
  [183] = {.lex_state = 79},
  [184] = {.lex_state = 79},
  [185] = {.lex_state = 1},
  [186] = {.lex_state = 79},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 79},
  [189] = {.lex_state = 79},
  [190] = {.lex_state = 79},
  [191] = {.lex_state = 79},
  [192] = {.lex_state = 79},
  [193] = {.lex_state = 79},
  [194] = {.lex_state = 79},
  [195] = {.lex_state = 79},
  [196] = {.lex_state = 79},
  [197] = {.lex_state = 79},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 79},
  [200] = {.lex_state = 79},
  [201] = {.lex_state = 79},
  [202] = {.lex_state = 79},
  [203] = {.lex_state = 79},
  [204] = {.lex_state = 79},
  [205] = {.lex_state = 79},
  [206] = {.lex_state = 79},
  [207] = {.lex_state = 79},
  [208] = {.lex_state = 79},
  [209] = {.lex_state = 79},
  [210] = {.lex_state = 79},
  [211] = {.lex_state = 6},
  [212] = {.lex_state = 79},
  [213] = {.lex_state = 79},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 79},
  [216] = {.lex_state = 79},
  [217] = {.lex_state = 79},
  [218] = {.lex_state = 79},
  [219] = {.lex_state = 79},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 79},
  [222] = {.lex_state = 79},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 27},
  [225] = {.lex_state = 79},
  [226] = {.lex_state = 79},
  [227] = {.lex_state = 79},
  [228] = {.lex_state = 79},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 79},
  [232] = {.lex_state = 1},
  [233] = {.lex_state = 79},
  [234] = {.lex_state = 79},
  [235] = {.lex_state = 79},
  [236] = {.lex_state = 1},
  [237] = {.lex_state = 12},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 1},
  [240] = {.lex_state = 79},
  [241] = {.lex_state = 79},
  [242] = {.lex_state = 79},
  [243] = {.lex_state = 79},
  [244] = {.lex_state = 79},
  [245] = {.lex_state = 79},
  [246] = {.lex_state = 79},
  [247] = {.lex_state = 79},
  [248] = {.lex_state = 79},
  [249] = {.lex_state = 79},
  [250] = {.lex_state = 79},
  [251] = {.lex_state = 1},
  [252] = {.lex_state = 79},
  [253] = {.lex_state = 79},
  [254] = {.lex_state = 79},
  [255] = {.lex_state = 79},
  [256] = {.lex_state = 79},
  [257] = {.lex_state = 79},
  [258] = {.lex_state = 79},
  [259] = {.lex_state = 79},
  [260] = {.lex_state = 12},
  [261] = {.lex_state = 79},
  [262] = {.lex_state = 79},
  [263] = {.lex_state = 79},
  [264] = {.lex_state = 79},
  [265] = {.lex_state = 79},
  [266] = {.lex_state = 79},
  [267] = {.lex_state = 79},
  [268] = {.lex_state = 79},
  [269] = {.lex_state = 79},
  [270] = {.lex_state = 79},
  [271] = {.lex_state = 14},
  [272] = {.lex_state = 14},
  [273] = {.lex_state = 14},
  [274] = {.lex_state = 14},
  [275] = {.lex_state = 11},
  [276] = {.lex_state = 14},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 14},
  [279] = {.lex_state = 14},
  [280] = {.lex_state = 14},
  [281] = {.lex_state = 14},
  [282] = {.lex_state = 14},
  [283] = {.lex_state = 11},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 14},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 14},
  [290] = {.lex_state = 14},
  [291] = {.lex_state = 14},
  [292] = {.lex_state = 14},
  [293] = {.lex_state = 14},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 14},
  [296] = {.lex_state = 11},
  [297] = {.lex_state = 14},
  [298] = {.lex_state = 14},
  [299] = {.lex_state = 14},
  [300] = {.lex_state = 14},
  [301] = {.lex_state = 11},
  [302] = {.lex_state = 14},
  [303] = {.lex_state = 14},
  [304] = {.lex_state = 11},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 14},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 14},
  [309] = {.lex_state = 14},
  [310] = {.lex_state = 14},
  [311] = {.lex_state = 14},
  [312] = {.lex_state = 14},
  [313] = {.lex_state = 14},
  [314] = {.lex_state = 14},
  [315] = {.lex_state = 14},
  [316] = {.lex_state = 14},
  [317] = {.lex_state = 14},
  [318] = {.lex_state = 14},
  [319] = {.lex_state = 14},
  [320] = {.lex_state = 14},
  [321] = {.lex_state = 14},
  [322] = {.lex_state = 14},
  [323] = {.lex_state = 14},
  [324] = {.lex_state = 14},
  [325] = {.lex_state = 14},
  [326] = {.lex_state = 14},
  [327] = {.lex_state = 14},
  [328] = {.lex_state = 14},
  [329] = {.lex_state = 14},
  [330] = {.lex_state = 14},
  [331] = {.lex_state = 14},
  [332] = {.lex_state = 14},
  [333] = {.lex_state = 14},
  [334] = {.lex_state = 14},
  [335] = {.lex_state = 14},
  [336] = {.lex_state = 14},
  [337] = {.lex_state = 14},
  [338] = {.lex_state = 14},
  [339] = {.lex_state = 14},
  [340] = {.lex_state = 14},
  [341] = {.lex_state = 14},
  [342] = {.lex_state = 14},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 14},
  [345] = {.lex_state = 14},
  [346] = {.lex_state = 14},
  [347] = {.lex_state = 14},
  [348] = {.lex_state = 14},
  [349] = {.lex_state = 14},
  [350] = {.lex_state = 14},
  [351] = {.lex_state = 14},
  [352] = {.lex_state = 14},
  [353] = {.lex_state = 14},
  [354] = {.lex_state = 14},
  [355] = {.lex_state = 14},
  [356] = {.lex_state = 14},
  [357] = {.lex_state = 14},
  [358] = {.lex_state = 14},
  [359] = {.lex_state = 14},
  [360] = {.lex_state = 14},
  [361] = {.lex_state = 14},
  [362] = {.lex_state = 14},
  [363] = {.lex_state = 14},
  [364] = {.lex_state = 14},
  [365] = {.lex_state = 14},
  [366] = {.lex_state = 14},
  [367] = {.lex_state = 14},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 14},
  [370] = {.lex_state = 14},
  [371] = {.lex_state = 14},
  [372] = {.lex_state = 14},
  [373] = {.lex_state = 14},
  [374] = {.lex_state = 14},
  [375] = {.lex_state = 14},
  [376] = {.lex_state = 14},
  [377] = {.lex_state = 14},
  [378] = {.lex_state = 7},
  [379] = {.lex_state = 27},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 7},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 7},
  [385] = {.lex_state = 27},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 7},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 17},
  [390] = {.lex_state = 17},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 17},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_yaml_no_injection_text] = ACTIONS(1),
    [aux_sym_text_token2] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
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
    [anon_sym_DOT2] = ACTIONS(1),
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
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE2] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(395),
    [sym__block] = STATE(98),
    [sym_text] = STATE(98),
    [sym__action] = STATE(98),
    [sym__comment_action] = STATE(98),
    [sym__pipeline_action] = STATE(98),
    [sym_if_action] = STATE(98),
    [sym_range_action] = STATE(98),
    [sym_template_action] = STATE(98),
    [sym_define_action] = STATE(98),
    [sym_block_action] = STATE(98),
    [sym_with_action] = STATE(98),
    [sym__left_delimiter] = STATE(54),
    [aux_sym_template_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_yaml_no_injection_text] = ACTIONS(5),
    [aux_sym_text_token1] = ACTIONS(7),
    [aux_sym_text_token2] = ACTIONS(7),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(9),
    [anon_sym_LBRACE_LBRACE_DASH] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(17), 1,
      anon_sym_else,
    ACTIONS(19), 1,
      anon_sym_end,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [79] = 20,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(17), 1,
      anon_sym_else,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [158] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_else,
    ACTIONS(49), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [234] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_else,
    ACTIONS(53), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [310] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_else,
    ACTIONS(57), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [386] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 1,
      anon_sym_else,
    ACTIONS(61), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [462] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(63), 1,
      anon_sym_else,
    ACTIONS(65), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [538] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(67), 1,
      anon_sym_else,
    ACTIONS(69), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [614] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(71), 1,
      anon_sym_else,
    ACTIONS(73), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [690] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      anon_sym_else,
    ACTIONS(77), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [766] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      anon_sym_else,
    ACTIONS(81), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [842] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(83), 1,
      anon_sym_else,
    ACTIONS(85), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [918] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      anon_sym_else,
    ACTIONS(89), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [994] = 19,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      anon_sym_else,
    ACTIONS(93), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1070] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(95), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1143] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(97), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1216] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(99), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1289] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1362] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1435] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(105), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1508] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1581] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1654] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(111), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1727] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1800] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1873] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(117), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [1946] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(119), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2019] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2092] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(123), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2165] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(125), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2238] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(127), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2311] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(129), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2384] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2457] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(133), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2530] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2603] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2676] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(139), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2749] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(141), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2822] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2895] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2968] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(147), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3041] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(149), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3114] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(151), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3187] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3260] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(155), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3333] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(157), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3406] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(159), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3479] = 14,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(165), 1,
      anon_sym_2,
    ACTIONS(167), 1,
      anon_sym_DOT,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(232), 1,
      sym_argument_list,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(161), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(175), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(185), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3544] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(179), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3617] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(181), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3690] = 18,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(183), 1,
      anon_sym_end,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3763] = 13,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(187), 1,
      anon_sym_2,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(229), 1,
      sym_argument_list,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(185), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(175), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(185), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3825] = 17,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      anon_sym_if,
    ACTIONS(191), 1,
      anon_sym_range,
    ACTIONS(193), 1,
      anon_sym_template,
    ACTIONS(195), 1,
      anon_sym_define,
    ACTIONS(197), 1,
      anon_sym_block,
    ACTIONS(199), 1,
      anon_sym_with,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(203), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(201), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(295), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3895] = 14,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(207), 1,
      anon_sym_DOT,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(281), 1,
      sym_argument_list,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(213), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(165), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(211), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(177), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [3959] = 17,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_range,
    ACTIONS(23), 1,
      anon_sym_template,
    ACTIONS(25), 1,
      anon_sym_define,
    ACTIONS(27), 1,
      anon_sym_block,
    ACTIONS(29), 1,
      anon_sym_with,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(41), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(39), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(302), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4029] = 12,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      anon_sym_2,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(217), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(221), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4088] = 13,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(286), 1,
      sym_argument_list,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(213), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(187), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(211), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(177), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4149] = 12,
    ACTIONS(163), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(171), 1,
      anon_sym_DOLLAR,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    ACTIONS(225), 1,
      anon_sym_2,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(223), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(221), 8,
      sym_int_literal,
      sym_float_literal,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4208] = 12,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(227), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(225), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(221), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4266] = 12,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(227), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(219), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    ACTIONS(221), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4324] = 13,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(235), 1,
      sym__right_delimiter,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    ACTIONS(233), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(231), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(229), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(293), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4383] = 13,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(190), 1,
      sym__right_delimiter,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    ACTIONS(239), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(237), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(235), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(280), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4442] = 13,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      sym__right_delimiter,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    ACTIONS(245), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(243), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(241), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(278), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4501] = 13,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      sym__right_delimiter,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    ACTIONS(251), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(249), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(247), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(282), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4560] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(375), 1,
      sym_range_variable_definition,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(255), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(253), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(306), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4615] = 12,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(367), 1,
      sym_range_variable_definition,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(259), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(257), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(272), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4670] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(263), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(261), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(289), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4722] = 11,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(267), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(265), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(239), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4774] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(386), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4826] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(275), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(273), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(274), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4878] = 11,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(279), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(277), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(238), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4930] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(292), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [4982] = 11,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(227), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(221), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(251), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5034] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(287), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(285), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(290), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5086] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(291), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    ACTIONS(289), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(276), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5138] = 11,
    ACTIONS(169), 1,
      anon_sym_DOT2,
    ACTIONS(173), 1,
      sym_identifier,
    ACTIONS(205), 1,
      anon_sym_LPAREN,
    ACTIONS(209), 1,
      anon_sym_DOLLAR,
    ACTIONS(215), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      sym_variable,
    STATE(214), 1,
      sym_parenthesized_pipeline,
    STATE(49), 2,
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
    STATE(223), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5190] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(383), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5242] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(322), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5294] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(273), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5346] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(271), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5398] = 11,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym_variable,
    STATE(237), 1,
      sym_parenthesized_pipeline,
    STATE(55), 2,
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
    STATE(279), 12,
      sym__pipeline,
      sym_variable_definition,
      sym_assignment,
      sym_chained_pipeline,
      sym_method_call,
      sym_function_call,
      sym__expression,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [5450] = 2,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 22,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_LPAREN,
      anon_sym_DOT2,
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
  [5478] = 3,
    ACTIONS(323), 1,
      sym_comment,
    ACTIONS(321), 7,
      anon_sym_elseif,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
    ACTIONS(319), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5508] = 10,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(170), 1,
      aux_sym_if_action_repeat1,
    STATE(217), 1,
      sym__if_actions_end,
    STATE(284), 1,
      sym__else_clause,
    STATE(380), 1,
      sym__else_if_clause,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [5551] = 3,
    ACTIONS(323), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
    ACTIONS(319), 15,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5580] = 10,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(333), 1,
      sym_yaml_no_injection_text,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(166), 1,
      aux_sym_if_action_repeat1,
    STATE(241), 1,
      sym__if_actions_end,
    STATE(305), 1,
      sym__else_clause,
    STATE(380), 1,
      sym__else_if_clause,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(89), 12,
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
  [5623] = 2,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 21,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_LPAREN,
      anon_sym_DOT2,
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
  [5650] = 10,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(167), 1,
      aux_sym_if_action_repeat1,
    STATE(245), 1,
      sym__if_actions_end,
    STATE(307), 1,
      sym__else_clause,
    STATE(380), 1,
      sym__else_if_clause,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [5693] = 10,
    ACTIONS(329), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(335), 1,
      sym_yaml_no_injection_text,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(169), 1,
      aux_sym_if_action_repeat1,
    STATE(212), 1,
      sym__if_actions_end,
    STATE(277), 1,
      sym__else_clause,
    STATE(380), 1,
      sym__else_if_clause,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(85), 12,
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
  [5736] = 3,
    ACTIONS(323), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
    ACTIONS(319), 14,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5764] = 2,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 20,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_LPAREN,
      anon_sym_DOT2,
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
  [5790] = 2,
    ACTIONS(337), 1,
      anon_sym_,
    ACTIONS(319), 19,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_LPAREN,
      anon_sym_DOT2,
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
  [5815] = 3,
    ACTIONS(339), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
    ACTIONS(319), 13,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5842] = 3,
    ACTIONS(323), 1,
      sym_comment,
    ACTIONS(321), 6,
      anon_sym_LPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
    ACTIONS(319), 13,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [5869] = 2,
    ACTIONS(317), 1,
      anon_sym_,
    ACTIONS(319), 19,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      anon_sym_LPAREN,
      anon_sym_DOT2,
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
  [5894] = 2,
    ACTIONS(343), 1,
      anon_sym_2,
    ACTIONS(341), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
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
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [5918] = 7,
    ACTIONS(9), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(11), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(345), 1,
      ts_builtin_sym_end,
    ACTIONS(347), 1,
      sym_yaml_no_injection_text,
    STATE(54), 1,
      sym__left_delimiter,
    ACTIONS(7), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(99), 12,
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
  [5952] = 7,
    ACTIONS(349), 1,
      ts_builtin_sym_end,
    ACTIONS(351), 1,
      sym_yaml_no_injection_text,
    ACTIONS(357), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(360), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(54), 1,
      sym__left_delimiter,
    ACTIONS(354), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(99), 12,
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
  [5986] = 2,
    ACTIONS(365), 1,
      anon_sym_2,
    ACTIONS(363), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
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
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [6010] = 2,
    ACTIONS(369), 1,
      anon_sym_2,
    ACTIONS(367), 18,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_DOT2,
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
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [6034] = 6,
    ACTIONS(371), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(8), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(114), 12,
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
  [6065] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(24), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6096] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(11), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6127] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(16), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6158] = 6,
    ACTIONS(381), 1,
      sym_yaml_no_injection_text,
    ACTIONS(387), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(390), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(384), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6189] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(6), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6220] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(32), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6251] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(33), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6282] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(34), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6313] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(393), 1,
      sym_yaml_no_injection_text,
    STATE(38), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6344] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(35), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6375] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(395), 1,
      sym_yaml_no_injection_text,
    STATE(44), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(153), 12,
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
  [6406] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(7), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6437] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(4), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6468] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(397), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(400), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6499] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(52), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6530] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(25), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6561] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(403), 1,
      sym_yaml_no_injection_text,
    STATE(22), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(105), 12,
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
  [6592] = 2,
    ACTIONS(367), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(369), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [6615] = 2,
    ACTIONS(341), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(343), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [6638] = 6,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(405), 1,
      sym_yaml_no_injection_text,
    STATE(15), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6669] = 6,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(407), 1,
      sym_yaml_no_injection_text,
    STATE(14), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6700] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(409), 1,
      sym_yaml_no_injection_text,
    STATE(36), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6731] = 6,
    ACTIONS(411), 1,
      sym_yaml_no_injection_text,
    ACTIONS(413), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(416), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(152), 12,
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
  [6762] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(21), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6793] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(37), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6824] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(47), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6855] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(419), 1,
      sym_yaml_no_injection_text,
    STATE(20), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6886] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(19), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6917] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(45), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [6948] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(421), 1,
      sym_yaml_no_injection_text,
    STATE(51), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(155), 12,
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
  [6979] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(423), 1,
      sym_yaml_no_injection_text,
    STATE(26), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(118), 12,
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
  [7010] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(425), 1,
      sym_yaml_no_injection_text,
    STATE(17), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(128), 12,
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
  [7041] = 6,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(427), 1,
      sym_yaml_no_injection_text,
    STATE(5), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7072] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(429), 1,
      sym_yaml_no_injection_text,
    STATE(50), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(143), 12,
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
  [7103] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(30), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7134] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(431), 1,
      sym_yaml_no_injection_text,
    STATE(28), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7165] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(433), 1,
      sym_yaml_no_injection_text,
    STATE(48), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7196] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(435), 1,
      sym_yaml_no_injection_text,
    STATE(39), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7227] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(437), 1,
      sym_yaml_no_injection_text,
    STATE(23), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7258] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(439), 1,
      sym_yaml_no_injection_text,
    STATE(31), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(112), 12,
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
  [7289] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(40), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7320] = 6,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(441), 1,
      sym_yaml_no_injection_text,
    STATE(13), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(107), 12,
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
  [7351] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(10), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7382] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(443), 1,
      sym_yaml_no_injection_text,
    STATE(18), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7413] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(445), 1,
      sym_yaml_no_injection_text,
    STATE(46), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7444] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(447), 1,
      sym_yaml_no_injection_text,
    STATE(41), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(103), 12,
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
  [7475] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(12), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7506] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(27), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7537] = 6,
    ACTIONS(449), 1,
      sym_yaml_no_injection_text,
    ACTIONS(451), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(454), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(116), 12,
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
  [7568] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(457), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(460), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(56), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7599] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(29), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7630] = 6,
    ACTIONS(373), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(375), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(463), 1,
      sym_yaml_no_injection_text,
    STATE(9), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(115), 12,
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
  [7661] = 6,
    ACTIONS(325), 1,
      sym_yaml_no_injection_text,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(43), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
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
  [7692] = 6,
    ACTIONS(377), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(379), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    ACTIONS(465), 1,
      sym_yaml_no_injection_text,
    STATE(42), 1,
      sym__left_delimiter,
    ACTIONS(327), 2,
      aux_sym_text_token1,
      aux_sym_text_token2,
    STATE(108), 12,
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
  [7723] = 2,
    ACTIONS(363), 8,
      anon_sym_DOT,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(365), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7746] = 2,
    ACTIONS(469), 7,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(467), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7768] = 2,
    ACTIONS(473), 7,
      anon_sym_DOT2,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    ACTIONS(471), 10,
      anon_sym_PIPE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7790] = 3,
    ACTIONS(479), 1,
      aux_sym_variable_token1,
    ACTIONS(477), 2,
      anon_sym_2,
      anon_sym_DOT,
    ACTIONS(475), 6,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7806] = 2,
    ACTIONS(481), 1,
      aux_sym_variable_token1,
    ACTIONS(477), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7820] = 2,
    ACTIONS(485), 2,
      anon_sym_2,
      anon_sym_DOT,
    ACTIONS(483), 6,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7833] = 1,
    ACTIONS(485), 8,
      anon_sym_COMMA,
      anon_sym_COLON_EQ,
      anon_sym_EQ,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7844] = 5,
    ACTIONS(165), 1,
      anon_sym_2,
    ACTIONS(487), 1,
      anon_sym_COLON_EQ,
    ACTIONS(489), 1,
      anon_sym_EQ,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(161), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7863] = 5,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(495), 1,
      anon_sym_COLON_EQ,
    ACTIONS(497), 1,
      anon_sym_EQ,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(165), 3,
      anon_sym_PIPE,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7881] = 7,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(220), 1,
      aux_sym_if_action_repeat1,
    STATE(246), 1,
      sym__if_actions_end,
    STATE(287), 1,
      sym__else_clause,
    STATE(368), 1,
      sym__left_delimiter,
    STATE(380), 1,
      sym__else_if_clause,
  [7903] = 7,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(220), 1,
      aux_sym_if_action_repeat1,
    STATE(255), 1,
      sym__if_actions_end,
    STATE(288), 1,
      sym__else_clause,
    STATE(368), 1,
      sym__left_delimiter,
    STATE(380), 1,
      sym__else_if_clause,
  [7925] = 4,
    ACTIONS(495), 1,
      anon_sym_COLON_EQ,
    ACTIONS(497), 1,
      anon_sym_EQ,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(165), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7941] = 7,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(216), 1,
      sym__if_actions_end,
    STATE(220), 1,
      aux_sym_if_action_repeat1,
    STATE(285), 1,
      sym__else_clause,
    STATE(343), 1,
      sym__left_delimiter,
    STATE(380), 1,
      sym__else_if_clause,
  [7963] = 7,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(507), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(204), 1,
      sym__if_actions_end,
    STATE(220), 1,
      aux_sym_if_action_repeat1,
    STATE(294), 1,
      sym__else_clause,
    STATE(343), 1,
      sym__left_delimiter,
    STATE(380), 1,
      sym__else_if_clause,
  [7985] = 3,
    ACTIONS(509), 1,
      anon_sym_2,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(223), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [7998] = 2,
    ACTIONS(511), 1,
      ts_builtin_sym_end,
    ACTIONS(513), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8009] = 2,
    ACTIONS(515), 1,
      ts_builtin_sym_end,
    ACTIONS(517), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8020] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(521), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8031] = 2,
    ACTIONS(523), 1,
      ts_builtin_sym_end,
    ACTIONS(525), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8042] = 2,
    ACTIONS(527), 1,
      ts_builtin_sym_end,
    ACTIONS(529), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8053] = 4,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(535), 1,
      anon_sym_2,
    STATE(171), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(533), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8068] = 2,
    ACTIONS(537), 1,
      ts_builtin_sym_end,
    ACTIONS(539), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8079] = 2,
    ACTIONS(541), 1,
      ts_builtin_sym_end,
    ACTIONS(543), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8090] = 3,
    ACTIONS(547), 1,
      anon_sym_2,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(545), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8103] = 2,
    ACTIONS(550), 1,
      ts_builtin_sym_end,
    ACTIONS(552), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8114] = 2,
    ACTIONS(554), 1,
      ts_builtin_sym_end,
    ACTIONS(556), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8125] = 2,
    ACTIONS(558), 1,
      ts_builtin_sym_end,
    ACTIONS(560), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8136] = 2,
    ACTIONS(562), 1,
      ts_builtin_sym_end,
    ACTIONS(564), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8147] = 4,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(566), 1,
      anon_sym_2,
    STATE(187), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(533), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8162] = 2,
    ACTIONS(568), 1,
      ts_builtin_sym_end,
    ACTIONS(570), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8173] = 3,
    ACTIONS(572), 1,
      anon_sym_2,
    STATE(180), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(223), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8186] = 2,
    ACTIONS(574), 1,
      ts_builtin_sym_end,
    ACTIONS(576), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8197] = 2,
    ACTIONS(578), 1,
      ts_builtin_sym_end,
    ACTIONS(580), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8208] = 2,
    ACTIONS(582), 1,
      ts_builtin_sym_end,
    ACTIONS(584), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8219] = 2,
    ACTIONS(586), 1,
      ts_builtin_sym_end,
    ACTIONS(588), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8230] = 2,
    ACTIONS(590), 1,
      ts_builtin_sym_end,
    ACTIONS(592), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8241] = 2,
    ACTIONS(594), 1,
      ts_builtin_sym_end,
    ACTIONS(596), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8252] = 2,
    ACTIONS(598), 1,
      ts_builtin_sym_end,
    ACTIONS(600), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8263] = 2,
    ACTIONS(602), 1,
      ts_builtin_sym_end,
    ACTIONS(604), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8274] = 2,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
    ACTIONS(608), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8285] = 2,
    ACTIONS(610), 1,
      ts_builtin_sym_end,
    ACTIONS(612), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8296] = 2,
    ACTIONS(616), 2,
      anon_sym_2,
      anon_sym_DOT,
    ACTIONS(614), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8307] = 2,
    ACTIONS(618), 1,
      ts_builtin_sym_end,
    ACTIONS(620), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8318] = 2,
    ACTIONS(622), 1,
      ts_builtin_sym_end,
    ACTIONS(624), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8329] = 2,
    ACTIONS(626), 1,
      ts_builtin_sym_end,
    ACTIONS(628), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8340] = 2,
    ACTIONS(630), 1,
      ts_builtin_sym_end,
    ACTIONS(632), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8351] = 2,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
    ACTIONS(636), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8362] = 2,
    ACTIONS(638), 1,
      ts_builtin_sym_end,
    ACTIONS(640), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8373] = 2,
    ACTIONS(642), 1,
      ts_builtin_sym_end,
    ACTIONS(644), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8384] = 2,
    ACTIONS(646), 1,
      ts_builtin_sym_end,
    ACTIONS(648), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8395] = 2,
    ACTIONS(650), 1,
      ts_builtin_sym_end,
    ACTIONS(652), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8406] = 2,
    ACTIONS(654), 1,
      ts_builtin_sym_end,
    ACTIONS(656), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8417] = 2,
    ACTIONS(658), 1,
      ts_builtin_sym_end,
    ACTIONS(660), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8428] = 2,
    ACTIONS(662), 1,
      ts_builtin_sym_end,
    ACTIONS(664), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8439] = 3,
    ACTIONS(668), 1,
      anon_sym_2,
    ACTIONS(670), 1,
      sym_identifier,
    ACTIONS(666), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8452] = 2,
    ACTIONS(672), 1,
      ts_builtin_sym_end,
    ACTIONS(674), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8463] = 2,
    ACTIONS(676), 1,
      ts_builtin_sym_end,
    ACTIONS(678), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8474] = 3,
    ACTIONS(491), 1,
      anon_sym_DOT,
    ACTIONS(682), 1,
      anon_sym_2,
    ACTIONS(680), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8487] = 2,
    ACTIONS(684), 1,
      ts_builtin_sym_end,
    ACTIONS(686), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8498] = 2,
    ACTIONS(688), 1,
      ts_builtin_sym_end,
    ACTIONS(690), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8509] = 2,
    ACTIONS(692), 1,
      ts_builtin_sym_end,
    ACTIONS(694), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8520] = 2,
    ACTIONS(696), 1,
      ts_builtin_sym_end,
    ACTIONS(698), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8531] = 1,
    ACTIONS(644), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8539] = 5,
    ACTIONS(700), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(703), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(220), 1,
      aux_sym_if_action_repeat1,
    STATE(380), 1,
      sym__else_if_clause,
    STATE(393), 1,
      sym__left_delimiter,
  [8555] = 1,
    ACTIONS(648), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8563] = 1,
    ACTIONS(652), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8571] = 2,
    ACTIONS(708), 1,
      anon_sym_2,
    ACTIONS(706), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8581] = 2,
    ACTIONS(710), 1,
      sym_identifier,
    ACTIONS(668), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8591] = 1,
    ACTIONS(636), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8599] = 1,
    ACTIONS(632), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8607] = 1,
    ACTIONS(686), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8615] = 1,
    ACTIONS(604), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8623] = 2,
    ACTIONS(714), 1,
      anon_sym_2,
    ACTIONS(712), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8633] = 2,
    ACTIONS(471), 1,
      anon_sym_2,
    ACTIONS(473), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8643] = 1,
    ACTIONS(513), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8651] = 2,
    ACTIONS(718), 1,
      anon_sym_2,
    ACTIONS(716), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8661] = 1,
    ACTIONS(521), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8669] = 1,
    ACTIONS(624), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8677] = 1,
    ACTIONS(584), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8685] = 2,
    ACTIONS(467), 1,
      anon_sym_2,
    ACTIONS(469), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8695] = 2,
    ACTIONS(499), 1,
      anon_sym_DOT,
    ACTIONS(682), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8705] = 3,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(722), 1,
      anon_sym_2,
    ACTIONS(720), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8717] = 3,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(726), 1,
      anon_sym_2,
    ACTIONS(724), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8729] = 1,
    ACTIONS(664), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8737] = 1,
    ACTIONS(674), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8745] = 1,
    ACTIONS(678), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8753] = 1,
    ACTIONS(698), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8761] = 1,
    ACTIONS(620), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8769] = 1,
    ACTIONS(694), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8777] = 1,
    ACTIONS(690), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8785] = 1,
    ACTIONS(612), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8793] = 1,
    ACTIONS(608), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8801] = 1,
    ACTIONS(592), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8809] = 1,
    ACTIONS(576), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8817] = 3,
    ACTIONS(531), 1,
      anon_sym_PIPE,
    ACTIONS(728), 1,
      anon_sym_2,
    ACTIONS(545), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8829] = 1,
    ACTIONS(564), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8837] = 1,
    ACTIONS(660), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8845] = 1,
    ACTIONS(656), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8853] = 1,
    ACTIONS(640), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8861] = 1,
    ACTIONS(628), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8869] = 1,
    ACTIONS(600), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8877] = 1,
    ACTIONS(543), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8885] = 1,
    ACTIONS(596), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8893] = 1,
    ACTIONS(616), 5,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8901] = 1,
    ACTIONS(588), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8909] = 1,
    ACTIONS(525), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8917] = 1,
    ACTIONS(529), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8925] = 1,
    ACTIONS(580), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8933] = 1,
    ACTIONS(517), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8941] = 1,
    ACTIONS(570), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8949] = 1,
    ACTIONS(539), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8957] = 1,
    ACTIONS(560), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8965] = 1,
    ACTIONS(556), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8973] = 1,
    ACTIONS(552), 5,
      sym_yaml_no_injection_text,
      aux_sym_text_token1,
      aux_sym_text_token2,
      anon_sym_LBRACE_LBRACE,
      anon_sym_LBRACE_LBRACE_DASH,
  [8981] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(135), 1,
      sym__right_delimiter,
    ACTIONS(732), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [8992] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(102), 1,
      sym__right_delimiter,
    ACTIONS(734), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9003] = 2,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    ACTIONS(726), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9012] = 1,
    ACTIONS(708), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9019] = 3,
    ACTIONS(739), 1,
      anon_sym_DQUOTE2,
    STATE(275), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(736), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [9030] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(151), 1,
      sym__right_delimiter,
    ACTIONS(741), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9041] = 4,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(218), 1,
      sym__if_actions_end,
    STATE(392), 1,
      sym__left_delimiter,
  [9054] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(111), 1,
      sym__right_delimiter,
    ACTIONS(747), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9065] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(144), 1,
      sym__right_delimiter,
    ACTIONS(749), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9076] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(213), 1,
      sym__right_delimiter,
    ACTIONS(751), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9087] = 1,
    ACTIONS(718), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9094] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      sym__right_delimiter,
    ACTIONS(753), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9105] = 3,
    ACTIONS(757), 1,
      anon_sym_DQUOTE2,
    STATE(275), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(755), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [9116] = 4,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(208), 1,
      sym__if_actions_end,
    STATE(392), 1,
      sym__left_delimiter,
  [9129] = 4,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(201), 1,
      sym__if_actions_end,
    STATE(392), 1,
      sym__left_delimiter,
  [9142] = 1,
    ACTIONS(714), 4,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9149] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(256), 1,
      sym__if_actions_end,
    STATE(394), 1,
      sym__left_delimiter,
  [9162] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(268), 1,
      sym__if_actions_end,
    STATE(394), 1,
      sym__left_delimiter,
  [9175] = 2,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    ACTIONS(722), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9184] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(87), 1,
      sym__right_delimiter,
    ACTIONS(763), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9195] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(765), 1,
      sym_raw_string_literal,
    STATE(62), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9206] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(90), 1,
      sym__right_delimiter,
    ACTIONS(767), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9217] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(242), 1,
      sym__right_delimiter,
    ACTIONS(769), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9228] = 4,
    ACTIONS(743), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(745), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(183), 1,
      sym__if_actions_end,
    STATE(392), 1,
      sym__left_delimiter,
  [9241] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(172), 1,
      sym__right_delimiter,
    ACTIONS(771), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9252] = 3,
    ACTIONS(775), 1,
      anon_sym_DQUOTE2,
    STATE(283), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(773), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [9263] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(777), 1,
      sym_raw_string_literal,
    STATE(63), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9274] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(779), 1,
      sym_raw_string_literal,
    STATE(64), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9285] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(781), 1,
      sym_raw_string_literal,
    STATE(365), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9296] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(783), 1,
      sym_raw_string_literal,
    STATE(65), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9307] = 3,
    ACTIONS(787), 1,
      anon_sym_DQUOTE2,
    STATE(304), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(785), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [9318] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(231), 1,
      sym__right_delimiter,
    ACTIONS(789), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9329] = 3,
    ACTIONS(43), 1,
      anon_sym_DQUOTE,
    ACTIONS(791), 1,
      sym_raw_string_literal,
    STATE(377), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [9340] = 3,
    ACTIONS(793), 1,
      anon_sym_DQUOTE2,
    STATE(275), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(755), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [9351] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(243), 1,
      sym__if_actions_end,
    STATE(394), 1,
      sym__left_delimiter,
  [9364] = 3,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    STATE(123), 1,
      sym__right_delimiter,
    ACTIONS(795), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9375] = 4,
    ACTIONS(759), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(761), 1,
      anon_sym_LBRACE_LBRACE_DASH,
    STATE(254), 1,
      sym__if_actions_end,
    STATE(394), 1,
      sym__left_delimiter,
  [9388] = 2,
    STATE(264), 1,
      sym__right_delimiter,
    ACTIONS(797), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9396] = 2,
    STATE(199), 1,
      sym__right_delimiter,
    ACTIONS(799), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9404] = 2,
    STATE(184), 1,
      sym__right_delimiter,
    ACTIONS(801), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9412] = 2,
    STATE(119), 1,
      sym__right_delimiter,
    ACTIONS(803), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9420] = 2,
    STATE(179), 1,
      sym__right_delimiter,
    ACTIONS(805), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9428] = 2,
    STATE(188), 1,
      sym__right_delimiter,
    ACTIONS(807), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9436] = 2,
    STATE(129), 1,
      sym__right_delimiter,
    ACTIONS(809), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9444] = 2,
    STATE(133), 1,
      sym__right_delimiter,
    ACTIONS(811), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9452] = 2,
    STATE(175), 1,
      sym__right_delimiter,
    ACTIONS(813), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9460] = 2,
    STATE(124), 1,
      sym__right_delimiter,
    ACTIONS(815), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9468] = 2,
    STATE(181), 1,
      sym__right_delimiter,
    ACTIONS(817), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9476] = 2,
    STATE(176), 1,
      sym__right_delimiter,
    ACTIONS(819), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9484] = 2,
    STATE(173), 1,
      sym__right_delimiter,
    ACTIONS(821), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9492] = 2,
    STATE(178), 1,
      sym__right_delimiter,
    ACTIONS(823), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9500] = 2,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    ACTIONS(825), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9508] = 2,
    STATE(197), 1,
      sym__right_delimiter,
    ACTIONS(827), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9516] = 2,
    STATE(140), 1,
      sym__right_delimiter,
    ACTIONS(829), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9524] = 2,
    STATE(182), 1,
      sym__right_delimiter,
    ACTIONS(831), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9532] = 2,
    STATE(141), 1,
      sym__right_delimiter,
    ACTIONS(833), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9540] = 2,
    STATE(146), 1,
      sym__right_delimiter,
    ACTIONS(835), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9548] = 2,
    STATE(196), 1,
      sym__right_delimiter,
    ACTIONS(837), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9556] = 2,
    STATE(148), 1,
      sym__right_delimiter,
    ACTIONS(839), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9564] = 2,
    STATE(192), 1,
      sym__right_delimiter,
    ACTIONS(841), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9572] = 2,
    STATE(200), 1,
      sym__right_delimiter,
    ACTIONS(843), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9580] = 2,
    STATE(221), 1,
      sym__right_delimiter,
    ACTIONS(845), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9588] = 2,
    STATE(186), 1,
      sym__right_delimiter,
    ACTIONS(847), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9596] = 2,
    STATE(147), 1,
      sym__right_delimiter,
    ACTIONS(849), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9604] = 2,
    STATE(189), 1,
      sym__right_delimiter,
    ACTIONS(851), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9612] = 2,
    STATE(191), 1,
      sym__right_delimiter,
    ACTIONS(853), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9620] = 2,
    STATE(219), 1,
      sym__right_delimiter,
    ACTIONS(855), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9628] = 2,
    STATE(193), 1,
      sym__right_delimiter,
    ACTIONS(857), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9636] = 2,
    STATE(136), 1,
      sym__right_delimiter,
    ACTIONS(859), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9644] = 2,
    STATE(194), 1,
      sym__right_delimiter,
    ACTIONS(861), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9652] = 2,
    STATE(132), 1,
      sym__right_delimiter,
    ACTIONS(863), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9660] = 2,
    STATE(225), 1,
      sym__right_delimiter,
    ACTIONS(865), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9668] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(17), 1,
      anon_sym_else,
    ACTIONS(867), 1,
      anon_sym_end,
  [9678] = 2,
    STATE(226), 1,
      sym__right_delimiter,
    ACTIONS(869), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9686] = 2,
    STATE(234), 1,
      sym__right_delimiter,
    ACTIONS(871), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9694] = 2,
    STATE(209), 1,
      sym__right_delimiter,
    ACTIONS(873), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9702] = 2,
    STATE(125), 1,
      sym__right_delimiter,
    ACTIONS(875), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9710] = 2,
    STATE(244), 1,
      sym__right_delimiter,
    ACTIONS(877), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9718] = 2,
    STATE(247), 1,
      sym__right_delimiter,
    ACTIONS(879), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9726] = 2,
    STATE(248), 1,
      sym__right_delimiter,
    ACTIONS(881), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9734] = 2,
    STATE(249), 1,
      sym__right_delimiter,
    ACTIONS(883), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9742] = 2,
    STATE(250), 1,
      sym__right_delimiter,
    ACTIONS(885), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9750] = 2,
    STATE(252), 1,
      sym__right_delimiter,
    ACTIONS(887), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9758] = 2,
    STATE(258), 1,
      sym__right_delimiter,
    ACTIONS(889), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9766] = 2,
    STATE(262), 1,
      sym__right_delimiter,
    ACTIONS(891), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9774] = 2,
    STATE(263), 1,
      sym__right_delimiter,
    ACTIONS(893), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9782] = 2,
    STATE(265), 1,
      sym__right_delimiter,
    ACTIONS(895), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9790] = 2,
    STATE(267), 1,
      sym__right_delimiter,
    ACTIONS(897), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9798] = 2,
    STATE(270), 1,
      sym__right_delimiter,
    ACTIONS(899), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9806] = 2,
    STATE(269), 1,
      sym__right_delimiter,
    ACTIONS(901), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9814] = 2,
    STATE(266), 1,
      sym__right_delimiter,
    ACTIONS(903), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9822] = 2,
    STATE(222), 1,
      sym__right_delimiter,
    ACTIONS(905), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9830] = 2,
    STATE(261), 1,
      sym__right_delimiter,
    ACTIONS(907), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9838] = 2,
    STATE(259), 1,
      sym__right_delimiter,
    ACTIONS(909), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9846] = 2,
    STATE(142), 1,
      sym__right_delimiter,
    ACTIONS(911), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9854] = 2,
    STATE(257), 1,
      sym__right_delimiter,
    ACTIONS(913), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9862] = 2,
    STATE(154), 1,
      sym__right_delimiter,
    ACTIONS(915), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9870] = 3,
    ACTIONS(15), 1,
      anon_sym_elseif,
    ACTIONS(17), 1,
      anon_sym_else,
    ACTIONS(917), 1,
      anon_sym_end,
  [9880] = 2,
    STATE(253), 1,
      sym__right_delimiter,
    ACTIONS(919), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9888] = 2,
    STATE(156), 1,
      sym__right_delimiter,
    ACTIONS(921), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9896] = 2,
    STATE(207), 1,
      sym__right_delimiter,
    ACTIONS(923), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9904] = 2,
    STATE(206), 1,
      sym__right_delimiter,
    ACTIONS(925), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9912] = 2,
    STATE(205), 1,
      sym__right_delimiter,
    ACTIONS(927), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9920] = 2,
    STATE(203), 1,
      sym__right_delimiter,
    ACTIONS(929), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9928] = 2,
    STATE(122), 1,
      sym__right_delimiter,
    ACTIONS(931), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9936] = 2,
    STATE(202), 1,
      sym__right_delimiter,
    ACTIONS(933), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9944] = 2,
    STATE(134), 1,
      sym__right_delimiter,
    ACTIONS(935), 2,
      anon_sym_RBRACE_RBRACE2,
      anon_sym_DASH_RBRACE_RBRACE2,
  [9952] = 2,
    ACTIONS(937), 1,
      anon_sym_,
    ACTIONS(939), 1,
      anon_sym_RBRACE_RBRACE,
  [9959] = 2,
    ACTIONS(941), 1,
      sym_identifier,
    STATE(120), 1,
      sym__field_identifier,
  [9966] = 2,
    ACTIONS(943), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(945), 1,
      anon_sym_LBRACE_LBRACE_DASH,
  [9973] = 2,
    ACTIONS(35), 1,
      anon_sym_DOLLAR,
    STATE(391), 1,
      sym_variable,
  [9980] = 2,
    ACTIONS(947), 1,
      anon_sym_,
    ACTIONS(949), 1,
      anon_sym_RBRACE_RBRACE,
  [9987] = 2,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    ACTIONS(951), 1,
      anon_sym_RPAREN,
  [9994] = 2,
    ACTIONS(953), 1,
      anon_sym_,
    ACTIONS(955), 1,
      anon_sym_RBRACE_RBRACE,
  [10001] = 2,
    ACTIONS(957), 1,
      sym_identifier,
    STATE(101), 1,
      sym__field_identifier,
  [10008] = 2,
    ACTIONS(730), 1,
      anon_sym_PIPE,
    ACTIONS(959), 1,
      anon_sym_RPAREN,
  [10015] = 2,
    ACTIONS(961), 1,
      anon_sym_,
    ACTIONS(963), 1,
      anon_sym_RBRACE_RBRACE,
  [10022] = 1,
    ACTIONS(965), 1,
      sym_comment,
  [10026] = 1,
    ACTIONS(949), 1,
      anon_sym_DASH_RBRACE_RBRACE,
  [10030] = 1,
    ACTIONS(967), 1,
      anon_sym_DASH_RBRACE_RBRACE,
  [10034] = 1,
    ACTIONS(969), 1,
      anon_sym_COLON_EQ,
  [10038] = 1,
    ACTIONS(867), 1,
      anon_sym_end,
  [10042] = 1,
    ACTIONS(15), 1,
      anon_sym_elseif,
  [10046] = 1,
    ACTIONS(917), 1,
      anon_sym_end,
  [10050] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [10054] = 1,
    ACTIONS(973), 1,
      anon_sym_DASH_RBRACE_RBRACE,
  [10058] = 1,
    ACTIONS(975), 1,
      sym_comment,
  [10062] = 1,
    ACTIONS(939), 1,
      anon_sym_DASH_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 79,
  [SMALL_STATE(4)] = 158,
  [SMALL_STATE(5)] = 234,
  [SMALL_STATE(6)] = 310,
  [SMALL_STATE(7)] = 386,
  [SMALL_STATE(8)] = 462,
  [SMALL_STATE(9)] = 538,
  [SMALL_STATE(10)] = 614,
  [SMALL_STATE(11)] = 690,
  [SMALL_STATE(12)] = 766,
  [SMALL_STATE(13)] = 842,
  [SMALL_STATE(14)] = 918,
  [SMALL_STATE(15)] = 994,
  [SMALL_STATE(16)] = 1070,
  [SMALL_STATE(17)] = 1143,
  [SMALL_STATE(18)] = 1216,
  [SMALL_STATE(19)] = 1289,
  [SMALL_STATE(20)] = 1362,
  [SMALL_STATE(21)] = 1435,
  [SMALL_STATE(22)] = 1508,
  [SMALL_STATE(23)] = 1581,
  [SMALL_STATE(24)] = 1654,
  [SMALL_STATE(25)] = 1727,
  [SMALL_STATE(26)] = 1800,
  [SMALL_STATE(27)] = 1873,
  [SMALL_STATE(28)] = 1946,
  [SMALL_STATE(29)] = 2019,
  [SMALL_STATE(30)] = 2092,
  [SMALL_STATE(31)] = 2165,
  [SMALL_STATE(32)] = 2238,
  [SMALL_STATE(33)] = 2311,
  [SMALL_STATE(34)] = 2384,
  [SMALL_STATE(35)] = 2457,
  [SMALL_STATE(36)] = 2530,
  [SMALL_STATE(37)] = 2603,
  [SMALL_STATE(38)] = 2676,
  [SMALL_STATE(39)] = 2749,
  [SMALL_STATE(40)] = 2822,
  [SMALL_STATE(41)] = 2895,
  [SMALL_STATE(42)] = 2968,
  [SMALL_STATE(43)] = 3041,
  [SMALL_STATE(44)] = 3114,
  [SMALL_STATE(45)] = 3187,
  [SMALL_STATE(46)] = 3260,
  [SMALL_STATE(47)] = 3333,
  [SMALL_STATE(48)] = 3406,
  [SMALL_STATE(49)] = 3479,
  [SMALL_STATE(50)] = 3544,
  [SMALL_STATE(51)] = 3617,
  [SMALL_STATE(52)] = 3690,
  [SMALL_STATE(53)] = 3763,
  [SMALL_STATE(54)] = 3825,
  [SMALL_STATE(55)] = 3895,
  [SMALL_STATE(56)] = 3959,
  [SMALL_STATE(57)] = 4029,
  [SMALL_STATE(58)] = 4088,
  [SMALL_STATE(59)] = 4149,
  [SMALL_STATE(60)] = 4208,
  [SMALL_STATE(61)] = 4266,
  [SMALL_STATE(62)] = 4324,
  [SMALL_STATE(63)] = 4383,
  [SMALL_STATE(64)] = 4442,
  [SMALL_STATE(65)] = 4501,
  [SMALL_STATE(66)] = 4560,
  [SMALL_STATE(67)] = 4615,
  [SMALL_STATE(68)] = 4670,
  [SMALL_STATE(69)] = 4722,
  [SMALL_STATE(70)] = 4774,
  [SMALL_STATE(71)] = 4826,
  [SMALL_STATE(72)] = 4878,
  [SMALL_STATE(73)] = 4930,
  [SMALL_STATE(74)] = 4982,
  [SMALL_STATE(75)] = 5034,
  [SMALL_STATE(76)] = 5086,
  [SMALL_STATE(77)] = 5138,
  [SMALL_STATE(78)] = 5190,
  [SMALL_STATE(79)] = 5242,
  [SMALL_STATE(80)] = 5294,
  [SMALL_STATE(81)] = 5346,
  [SMALL_STATE(82)] = 5398,
  [SMALL_STATE(83)] = 5450,
  [SMALL_STATE(84)] = 5478,
  [SMALL_STATE(85)] = 5508,
  [SMALL_STATE(86)] = 5551,
  [SMALL_STATE(87)] = 5580,
  [SMALL_STATE(88)] = 5623,
  [SMALL_STATE(89)] = 5650,
  [SMALL_STATE(90)] = 5693,
  [SMALL_STATE(91)] = 5736,
  [SMALL_STATE(92)] = 5764,
  [SMALL_STATE(93)] = 5790,
  [SMALL_STATE(94)] = 5815,
  [SMALL_STATE(95)] = 5842,
  [SMALL_STATE(96)] = 5869,
  [SMALL_STATE(97)] = 5894,
  [SMALL_STATE(98)] = 5918,
  [SMALL_STATE(99)] = 5952,
  [SMALL_STATE(100)] = 5986,
  [SMALL_STATE(101)] = 6010,
  [SMALL_STATE(102)] = 6034,
  [SMALL_STATE(103)] = 6065,
  [SMALL_STATE(104)] = 6096,
  [SMALL_STATE(105)] = 6127,
  [SMALL_STATE(106)] = 6158,
  [SMALL_STATE(107)] = 6189,
  [SMALL_STATE(108)] = 6220,
  [SMALL_STATE(109)] = 6251,
  [SMALL_STATE(110)] = 6282,
  [SMALL_STATE(111)] = 6313,
  [SMALL_STATE(112)] = 6344,
  [SMALL_STATE(113)] = 6375,
  [SMALL_STATE(114)] = 6406,
  [SMALL_STATE(115)] = 6437,
  [SMALL_STATE(116)] = 6468,
  [SMALL_STATE(117)] = 6499,
  [SMALL_STATE(118)] = 6530,
  [SMALL_STATE(119)] = 6561,
  [SMALL_STATE(120)] = 6592,
  [SMALL_STATE(121)] = 6615,
  [SMALL_STATE(122)] = 6638,
  [SMALL_STATE(123)] = 6669,
  [SMALL_STATE(124)] = 6700,
  [SMALL_STATE(125)] = 6731,
  [SMALL_STATE(126)] = 6762,
  [SMALL_STATE(127)] = 6793,
  [SMALL_STATE(128)] = 6824,
  [SMALL_STATE(129)] = 6855,
  [SMALL_STATE(130)] = 6886,
  [SMALL_STATE(131)] = 6917,
  [SMALL_STATE(132)] = 6948,
  [SMALL_STATE(133)] = 6979,
  [SMALL_STATE(134)] = 7010,
  [SMALL_STATE(135)] = 7041,
  [SMALL_STATE(136)] = 7072,
  [SMALL_STATE(137)] = 7103,
  [SMALL_STATE(138)] = 7134,
  [SMALL_STATE(139)] = 7165,
  [SMALL_STATE(140)] = 7196,
  [SMALL_STATE(141)] = 7227,
  [SMALL_STATE(142)] = 7258,
  [SMALL_STATE(143)] = 7289,
  [SMALL_STATE(144)] = 7320,
  [SMALL_STATE(145)] = 7351,
  [SMALL_STATE(146)] = 7382,
  [SMALL_STATE(147)] = 7413,
  [SMALL_STATE(148)] = 7444,
  [SMALL_STATE(149)] = 7475,
  [SMALL_STATE(150)] = 7506,
  [SMALL_STATE(151)] = 7537,
  [SMALL_STATE(152)] = 7568,
  [SMALL_STATE(153)] = 7599,
  [SMALL_STATE(154)] = 7630,
  [SMALL_STATE(155)] = 7661,
  [SMALL_STATE(156)] = 7692,
  [SMALL_STATE(157)] = 7723,
  [SMALL_STATE(158)] = 7746,
  [SMALL_STATE(159)] = 7768,
  [SMALL_STATE(160)] = 7790,
  [SMALL_STATE(161)] = 7806,
  [SMALL_STATE(162)] = 7820,
  [SMALL_STATE(163)] = 7833,
  [SMALL_STATE(164)] = 7844,
  [SMALL_STATE(165)] = 7863,
  [SMALL_STATE(166)] = 7881,
  [SMALL_STATE(167)] = 7903,
  [SMALL_STATE(168)] = 7925,
  [SMALL_STATE(169)] = 7941,
  [SMALL_STATE(170)] = 7963,
  [SMALL_STATE(171)] = 7985,
  [SMALL_STATE(172)] = 7998,
  [SMALL_STATE(173)] = 8009,
  [SMALL_STATE(174)] = 8020,
  [SMALL_STATE(175)] = 8031,
  [SMALL_STATE(176)] = 8042,
  [SMALL_STATE(177)] = 8053,
  [SMALL_STATE(178)] = 8068,
  [SMALL_STATE(179)] = 8079,
  [SMALL_STATE(180)] = 8090,
  [SMALL_STATE(181)] = 8103,
  [SMALL_STATE(182)] = 8114,
  [SMALL_STATE(183)] = 8125,
  [SMALL_STATE(184)] = 8136,
  [SMALL_STATE(185)] = 8147,
  [SMALL_STATE(186)] = 8162,
  [SMALL_STATE(187)] = 8173,
  [SMALL_STATE(188)] = 8186,
  [SMALL_STATE(189)] = 8197,
  [SMALL_STATE(190)] = 8208,
  [SMALL_STATE(191)] = 8219,
  [SMALL_STATE(192)] = 8230,
  [SMALL_STATE(193)] = 8241,
  [SMALL_STATE(194)] = 8252,
  [SMALL_STATE(195)] = 8263,
  [SMALL_STATE(196)] = 8274,
  [SMALL_STATE(197)] = 8285,
  [SMALL_STATE(198)] = 8296,
  [SMALL_STATE(199)] = 8307,
  [SMALL_STATE(200)] = 8318,
  [SMALL_STATE(201)] = 8329,
  [SMALL_STATE(202)] = 8340,
  [SMALL_STATE(203)] = 8351,
  [SMALL_STATE(204)] = 8362,
  [SMALL_STATE(205)] = 8373,
  [SMALL_STATE(206)] = 8384,
  [SMALL_STATE(207)] = 8395,
  [SMALL_STATE(208)] = 8406,
  [SMALL_STATE(209)] = 8417,
  [SMALL_STATE(210)] = 8428,
  [SMALL_STATE(211)] = 8439,
  [SMALL_STATE(212)] = 8452,
  [SMALL_STATE(213)] = 8463,
  [SMALL_STATE(214)] = 8474,
  [SMALL_STATE(215)] = 8487,
  [SMALL_STATE(216)] = 8498,
  [SMALL_STATE(217)] = 8509,
  [SMALL_STATE(218)] = 8520,
  [SMALL_STATE(219)] = 8531,
  [SMALL_STATE(220)] = 8539,
  [SMALL_STATE(221)] = 8555,
  [SMALL_STATE(222)] = 8563,
  [SMALL_STATE(223)] = 8571,
  [SMALL_STATE(224)] = 8581,
  [SMALL_STATE(225)] = 8591,
  [SMALL_STATE(226)] = 8599,
  [SMALL_STATE(227)] = 8607,
  [SMALL_STATE(228)] = 8615,
  [SMALL_STATE(229)] = 8623,
  [SMALL_STATE(230)] = 8633,
  [SMALL_STATE(231)] = 8643,
  [SMALL_STATE(232)] = 8651,
  [SMALL_STATE(233)] = 8661,
  [SMALL_STATE(234)] = 8669,
  [SMALL_STATE(235)] = 8677,
  [SMALL_STATE(236)] = 8685,
  [SMALL_STATE(237)] = 8695,
  [SMALL_STATE(238)] = 8705,
  [SMALL_STATE(239)] = 8717,
  [SMALL_STATE(240)] = 8729,
  [SMALL_STATE(241)] = 8737,
  [SMALL_STATE(242)] = 8745,
  [SMALL_STATE(243)] = 8753,
  [SMALL_STATE(244)] = 8761,
  [SMALL_STATE(245)] = 8769,
  [SMALL_STATE(246)] = 8777,
  [SMALL_STATE(247)] = 8785,
  [SMALL_STATE(248)] = 8793,
  [SMALL_STATE(249)] = 8801,
  [SMALL_STATE(250)] = 8809,
  [SMALL_STATE(251)] = 8817,
  [SMALL_STATE(252)] = 8829,
  [SMALL_STATE(253)] = 8837,
  [SMALL_STATE(254)] = 8845,
  [SMALL_STATE(255)] = 8853,
  [SMALL_STATE(256)] = 8861,
  [SMALL_STATE(257)] = 8869,
  [SMALL_STATE(258)] = 8877,
  [SMALL_STATE(259)] = 8885,
  [SMALL_STATE(260)] = 8893,
  [SMALL_STATE(261)] = 8901,
  [SMALL_STATE(262)] = 8909,
  [SMALL_STATE(263)] = 8917,
  [SMALL_STATE(264)] = 8925,
  [SMALL_STATE(265)] = 8933,
  [SMALL_STATE(266)] = 8941,
  [SMALL_STATE(267)] = 8949,
  [SMALL_STATE(268)] = 8957,
  [SMALL_STATE(269)] = 8965,
  [SMALL_STATE(270)] = 8973,
  [SMALL_STATE(271)] = 8981,
  [SMALL_STATE(272)] = 8992,
  [SMALL_STATE(273)] = 9003,
  [SMALL_STATE(274)] = 9012,
  [SMALL_STATE(275)] = 9019,
  [SMALL_STATE(276)] = 9030,
  [SMALL_STATE(277)] = 9041,
  [SMALL_STATE(278)] = 9054,
  [SMALL_STATE(279)] = 9065,
  [SMALL_STATE(280)] = 9076,
  [SMALL_STATE(281)] = 9087,
  [SMALL_STATE(282)] = 9094,
  [SMALL_STATE(283)] = 9105,
  [SMALL_STATE(284)] = 9116,
  [SMALL_STATE(285)] = 9129,
  [SMALL_STATE(286)] = 9142,
  [SMALL_STATE(287)] = 9149,
  [SMALL_STATE(288)] = 9162,
  [SMALL_STATE(289)] = 9175,
  [SMALL_STATE(290)] = 9184,
  [SMALL_STATE(291)] = 9195,
  [SMALL_STATE(292)] = 9206,
  [SMALL_STATE(293)] = 9217,
  [SMALL_STATE(294)] = 9228,
  [SMALL_STATE(295)] = 9241,
  [SMALL_STATE(296)] = 9252,
  [SMALL_STATE(297)] = 9263,
  [SMALL_STATE(298)] = 9274,
  [SMALL_STATE(299)] = 9285,
  [SMALL_STATE(300)] = 9296,
  [SMALL_STATE(301)] = 9307,
  [SMALL_STATE(302)] = 9318,
  [SMALL_STATE(303)] = 9329,
  [SMALL_STATE(304)] = 9340,
  [SMALL_STATE(305)] = 9351,
  [SMALL_STATE(306)] = 9364,
  [SMALL_STATE(307)] = 9375,
  [SMALL_STATE(308)] = 9388,
  [SMALL_STATE(309)] = 9396,
  [SMALL_STATE(310)] = 9404,
  [SMALL_STATE(311)] = 9412,
  [SMALL_STATE(312)] = 9420,
  [SMALL_STATE(313)] = 9428,
  [SMALL_STATE(314)] = 9436,
  [SMALL_STATE(315)] = 9444,
  [SMALL_STATE(316)] = 9452,
  [SMALL_STATE(317)] = 9460,
  [SMALL_STATE(318)] = 9468,
  [SMALL_STATE(319)] = 9476,
  [SMALL_STATE(320)] = 9484,
  [SMALL_STATE(321)] = 9492,
  [SMALL_STATE(322)] = 9500,
  [SMALL_STATE(323)] = 9508,
  [SMALL_STATE(324)] = 9516,
  [SMALL_STATE(325)] = 9524,
  [SMALL_STATE(326)] = 9532,
  [SMALL_STATE(327)] = 9540,
  [SMALL_STATE(328)] = 9548,
  [SMALL_STATE(329)] = 9556,
  [SMALL_STATE(330)] = 9564,
  [SMALL_STATE(331)] = 9572,
  [SMALL_STATE(332)] = 9580,
  [SMALL_STATE(333)] = 9588,
  [SMALL_STATE(334)] = 9596,
  [SMALL_STATE(335)] = 9604,
  [SMALL_STATE(336)] = 9612,
  [SMALL_STATE(337)] = 9620,
  [SMALL_STATE(338)] = 9628,
  [SMALL_STATE(339)] = 9636,
  [SMALL_STATE(340)] = 9644,
  [SMALL_STATE(341)] = 9652,
  [SMALL_STATE(342)] = 9660,
  [SMALL_STATE(343)] = 9668,
  [SMALL_STATE(344)] = 9678,
  [SMALL_STATE(345)] = 9686,
  [SMALL_STATE(346)] = 9694,
  [SMALL_STATE(347)] = 9702,
  [SMALL_STATE(348)] = 9710,
  [SMALL_STATE(349)] = 9718,
  [SMALL_STATE(350)] = 9726,
  [SMALL_STATE(351)] = 9734,
  [SMALL_STATE(352)] = 9742,
  [SMALL_STATE(353)] = 9750,
  [SMALL_STATE(354)] = 9758,
  [SMALL_STATE(355)] = 9766,
  [SMALL_STATE(356)] = 9774,
  [SMALL_STATE(357)] = 9782,
  [SMALL_STATE(358)] = 9790,
  [SMALL_STATE(359)] = 9798,
  [SMALL_STATE(360)] = 9806,
  [SMALL_STATE(361)] = 9814,
  [SMALL_STATE(362)] = 9822,
  [SMALL_STATE(363)] = 9830,
  [SMALL_STATE(364)] = 9838,
  [SMALL_STATE(365)] = 9846,
  [SMALL_STATE(366)] = 9854,
  [SMALL_STATE(367)] = 9862,
  [SMALL_STATE(368)] = 9870,
  [SMALL_STATE(369)] = 9880,
  [SMALL_STATE(370)] = 9888,
  [SMALL_STATE(371)] = 9896,
  [SMALL_STATE(372)] = 9904,
  [SMALL_STATE(373)] = 9912,
  [SMALL_STATE(374)] = 9920,
  [SMALL_STATE(375)] = 9928,
  [SMALL_STATE(376)] = 9936,
  [SMALL_STATE(377)] = 9944,
  [SMALL_STATE(378)] = 9952,
  [SMALL_STATE(379)] = 9959,
  [SMALL_STATE(380)] = 9966,
  [SMALL_STATE(381)] = 9973,
  [SMALL_STATE(382)] = 9980,
  [SMALL_STATE(383)] = 9987,
  [SMALL_STATE(384)] = 9994,
  [SMALL_STATE(385)] = 10001,
  [SMALL_STATE(386)] = 10008,
  [SMALL_STATE(387)] = 10015,
  [SMALL_STATE(388)] = 10022,
  [SMALL_STATE(389)] = 10026,
  [SMALL_STATE(390)] = 10030,
  [SMALL_STATE(391)] = 10034,
  [SMALL_STATE(392)] = 10038,
  [SMALL_STATE(393)] = 10042,
  [SMALL_STATE(394)] = 10046,
  [SMALL_STATE(395)] = 10050,
  [SMALL_STATE(396)] = 10054,
  [SMALL_STATE(397)] = 10058,
  [SMALL_STATE(398)] = 10062,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(347),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(369),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(370),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(334),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(333),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(311),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(355),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(316),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(360),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(361),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(327),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(364),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(366),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(362),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(363),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(352),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(348),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(345),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(351),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(350),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(337),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(371),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(335),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(354),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(372),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(336),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(373),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(332),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(356),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(374),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(376),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(320),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(309),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(353),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(328),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(357),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(319),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(358),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(385),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(310),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(379),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [229] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(386),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [277] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [281] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(383),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(322),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [351] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(99),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(215),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(94),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(93),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 2),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [371] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [379] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [381] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(106),
  [384] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(227),
  [387] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(95),
  [390] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(96),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [397] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_if_clause, 5, .dynamic_precedence = 1, .production_id = 26), SHIFT(95),
  [400] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_if_clause, 5, .dynamic_precedence = 1, .production_id = 26), SHIFT(96),
  [403] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [409] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [413] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_clause, 3, .dynamic_precedence = 2), SHIFT(95),
  [416] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_clause, 3, .dynamic_precedence = 2), SHIFT(96),
  [419] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [429] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [433] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [435] = {.entry = {.count = 1, .reusable = false}}, SHIFT(137),
  [437] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_if_clause, 4, .dynamic_precedence = 1, .production_id = 10), SHIFT(95),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_if_clause, 4, .dynamic_precedence = 1, .production_id = 10), SHIFT(96),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_clause, 4, .dynamic_precedence = 2, .production_id = 21), SHIFT(95),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__else_clause, 4, .dynamic_precedence = 2, .production_id = 21), SHIFT(96),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [487] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [489] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(368),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(343),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 11),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 11),
  [519] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 4),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 13),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 13),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 25),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 25),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 25),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 25),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 27),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 27),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [547] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(74),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 24),
  [552] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 24),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 23),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 23),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 22),
  [560] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 22),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 10),
  [570] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 10),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [574] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 19),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 19),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [584] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [588] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 10),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 10),
  [594] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 19),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 19),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7),
  [600] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 28),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 28),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 23),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pipeline, 3),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pipeline, 3),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 29),
  [620] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 29),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 24),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 18),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 18),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 30),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 30),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 13),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 13),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 17),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 17),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 31),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 31),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 32),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 32),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 33),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 33),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 16),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 16),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__if_actions_end, 3),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__if_actions_end, 3),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 5),
  [664] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 5),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 5, .production_id = 10),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 5, .production_id = 10),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 11),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 11),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline, 1),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline, 1),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 1),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 6, .production_id = 14),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 6, .production_id = 14),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 6, .production_id = 13),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 6, .production_id = 13),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 6, .production_id = 12),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 6, .production_id = 12),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 15), SHIFT_REPEAT(393),
  [703] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 15), SHIFT_REPEAT(393),
  [706] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chained_pipeline, 3),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chained_pipeline, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_definition, 3, .production_id = 8),
  [724] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 8),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(275),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(392),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [759] = {.entry = {.count = 1, .reusable = false}}, SHIFT(394),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [801] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [803] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [807] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_variable_definition, 5, .production_id = 20),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [881] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [943] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 1, .production_id = 9),
  [945] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 1, .production_id = 9),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [971] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [975] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
