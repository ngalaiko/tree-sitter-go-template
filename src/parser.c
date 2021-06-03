#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 357
#define LARGE_STATE_COUNT 60
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 1
#define TOKEN_COUNT 32
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 25

enum {
  sym_text = 1,
  anon_sym_if = 2,
  anon_sym_elseif = 3,
  anon_sym_else = 4,
  anon_sym_end = 5,
  anon_sym_range = 6,
  anon_sym_template = 7,
  anon_sym_define = 8,
  anon_sym_block = 9,
  anon_sym_with = 10,
  anon_sym_ = 11,
  sym_pipeline_stub = 12,
  anon_sym_DOT = 13,
  anon_sym_DOLLAR = 14,
  sym_identifier = 15,
  sym_int_literal = 16,
  sym_float_literal = 17,
  sym_imaginary_literal = 18,
  sym_rune_literal = 19,
  sym_true = 20,
  sym_false = 21,
  sym_nil = 22,
  sym_raw_string_literal = 23,
  anon_sym_DQUOTE = 24,
  aux_sym_interpreted_string_literal_token1 = 25,
  sym_escape_sequence = 26,
  sym_comment = 27,
  anon_sym_LBRACE_LBRACE = 28,
  anon_sym_DASH = 29,
  anon_sym_DASH2 = 30,
  anon_sym_RBRACE_RBRACE = 31,
  sym_template = 32,
  sym__block = 33,
  sym__action = 34,
  sym__comment_action = 35,
  sym__pipeline_action = 36,
  sym_if_action = 37,
  sym_range_action = 38,
  sym_template_action = 39,
  sym_define_action = 40,
  sym_block_action = 41,
  sym_with_action = 42,
  sym__pipeline = 43,
  sym_method_call = 44,
  sym_function_call = 45,
  sym_argument_list = 46,
  sym__expression = 47,
  sym_selector_expression = 48,
  sym__field_identifier = 49,
  sym_field = 50,
  sym_variable = 51,
  sym__literal = 52,
  sym__boolean_literal = 53,
  sym_dot = 54,
  sym__string_literal = 55,
  sym_interpreted_string_literal = 56,
  sym__left_delimiter = 57,
  sym__right_delimiter = 58,
  aux_sym_template_repeat1 = 59,
  aux_sym_if_action_repeat1 = 60,
  aux_sym_argument_list_repeat1 = 61,
  aux_sym_interpreted_string_literal_repeat1 = 62,
  alias_sym_field_identifier = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_if] = "if",
  [anon_sym_elseif] = "else if",
  [anon_sym_else] = "else",
  [anon_sym_end] = "end",
  [anon_sym_range] = "range",
  [anon_sym_template] = "template",
  [anon_sym_define] = "define",
  [anon_sym_block] = "block",
  [anon_sym_with] = "with",
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
  [sym_range_action] = "range_action",
  [sym_template_action] = "template_action",
  [sym_define_action] = "define_action",
  [sym_block_action] = "block_action",
  [sym_with_action] = "with_action",
  [sym__pipeline] = "_pipeline",
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
  [anon_sym_range] = anon_sym_range,
  [anon_sym_template] = anon_sym_template,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_with] = anon_sym_with,
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
  [sym_range_action] = sym_range_action,
  [sym_template_action] = sym_template_action,
  [sym_define_action] = sym_define_action,
  [sym_block_action] = sym_block_action,
  [sym_with_action] = sym_with_action,
  [sym__pipeline] = sym__pipeline,
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
  field_field = 7,
  field_function = 8,
  field_method = 9,
  field_name = 10,
  field_operand = 11,
  field_option = 12,
  field_range = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_function] = "function",
  [field_method] = "method",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_option] = "option",
  [field_range] = "range",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 2},
  [5] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 2},
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 4},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 2},
  [13] = {.index = 19, .length = 3},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 4},
  [18] = {.index = 32, .length = 3},
  [19] = {.index = 35, .length = 2},
  [20] = {.index = 37, .length = 2},
  [21] = {.index = 39, .length = 3},
  [22] = {.index = 42, .length = 4},
  [23] = {.index = 46, .length = 3},
  [24] = {.index = 49, .length = 5},
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
    {field_argument, 3},
    {field_name, 2},
  [11] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [15] =
    {field_condition, 2},
  [16] =
    {field_range, 2},
  [17] =
    {field_condition, 2},
    {field_consequence, 4},
  [19] =
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [22] =
    {field_body, 4},
    {field_range, 2},
  [24] =
    {field_body, 4},
    {field_name, 2},
  [26] =
    {field_condition, 2},
    {field_option, 4},
  [28] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [32] =
    {field_argument, 3},
    {field_body, 5},
    {field_name, 2},
  [35] =
    {field_alternative, 7},
    {field_condition, 2},
  [37] =
    {field_alternative, 7},
    {field_range, 2},
  [39] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [42] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [46] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [49] =
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
    ? (c < 2972
      ? (c < 2208
        ? (c < 1162
          ? (c < 710
            ? (c < 'u'
              ? (c < 'g'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || (c >= 'a' && c <= 'e')))
                : (c <= 'm' || (c < 'q'
                  ? c == 'o'
                  : c <= 's')))
              : (c <= 'z' || (c < 192
                ? (c < 181
                  ? c == 170
                  : (c <= 181 || c == 186))
                : (c <= 214 || (c < 248
                  ? (c >= 216 && c <= 246)
                  : c <= 705)))))
            : (c <= 721 || (c < 895
              ? (c < 880
                ? (c < 748
                  ? (c >= 736 && c <= 740)
                  : (c <= 748 || c == 750))
                : (c <= 884 || (c < 890
                  ? (c >= 886 && c <= 887)
                  : c <= 893)))
              : (c <= 895 || (c < 910
                ? (c < 904
                  ? c == 902
                  : (c <= 906 || c == 908))
                : (c <= 929 || (c < 1015
                  ? (c >= 931 && c <= 1013)
                  : c <= 1153)))))))
          : (c <= 1327 || (c < 1808
            ? (c < 1646
              ? (c < 1488
                ? (c < 1369
                  ? (c >= 1329 && c <= 1366)
                  : (c <= 1369 || (c >= 1376 && c <= 1416)))
                : (c <= 1514 || (c < 1568
                  ? (c >= 1519 && c <= 1522)
                  : c <= 1610)))
              : (c <= 1647 || (c < 1774
                ? (c < 1749
                  ? (c >= 1649 && c <= 1747)
                  : (c <= 1749 || (c >= 1765 && c <= 1766)))
                : (c <= 1775 || (c < 1791
                  ? (c >= 1786 && c <= 1788)
                  : c <= 1791)))))
            : (c <= 1808 || (c < 2048
              ? (c < 1994
                ? (c < 1869
                  ? (c >= 1810 && c <= 1839)
                  : (c <= 1957 || c == 1969))
                : (c <= 2026 || (c < 2042
                  ? (c >= 2036 && c <= 2037)
                  : c <= 2042)))
              : (c <= 2069 || (c < 2088
                ? (c < 2084
                  ? c == 2074
                  : c <= 2084)
                : (c <= 2088 || (c < 2144
                  ? (c >= 2112 && c <= 2136)
                  : c <= 2154)))))))))
        : (c <= 2228 || (c < 2654
          ? (c < 2510
            ? (c < 2437
              ? (c < 2384
                ? (c < 2308
                  ? (c >= 2230 && c <= 2247)
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
      : (c <= 2972 || (c < 4159
        ? (c < 3412
          ? (c < 3205
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
                : (c <= 3162 || (c < 3200
                  ? (c >= 3168 && c <= 3169)
                  : c <= 3200)))))
            : (c <= 3212 || (c < 3296
              ? (c < 3253
                ? (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : (c <= 3240 || (c >= 3242 && c <= 3251)))
                : (c <= 3257 || (c < 3294
                  ? c == 3261
                  : c <= 3294)))
              : (c <= 3297 || (c < 3346
                ? (c < 3332
                  ? (c >= 3313 && c <= 3314)
                  : (c <= 3340 || (c >= 3342 && c <= 3344)))
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
  return (c < 6480
    ? (c < 2949
      ? (c < 2074
        ? (c < 904
          ? (c < 181
            ? (c < 'j'
              ? (c < 'c'
                ? (c < '_'
                  ? (c >= 'A' && c <= 'Z')
                  : (c <= '_' || c == 'a'))
                : (c <= 'c' || (c < 'g'
                  ? c == 'e'
                  : c <= 'h')))
              : (c <= 'm' || (c < 'u'
                ? (c < 'q'
                  ? c == 'o'
                  : (c <= 'q' || c == 's'))
                : (c <= 'v' || (c < 170
                  ? (c >= 'x' && c <= 'z')
                  : c <= 170)))))
            : (c <= 181 || (c < 748
              ? (c < 248
                ? (c < 192
                  ? c == 186
                  : (c <= 214 || (c >= 216 && c <= 246)))
                : (c <= 705 || (c < 736
                  ? (c >= 710 && c <= 721)
                  : c <= 740)))
              : (c <= 748 || (c < 890
                ? (c < 880
                  ? c == 750
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 902
                  ? c == 895
                  : c <= 902)))))))
          : (c <= 906 || (c < 1749
            ? (c < 1369
              ? (c < 1015
                ? (c < 910
                  ? c == 908
                  : (c <= 929 || (c >= 931 && c <= 1013)))
                : (c <= 1153 || (c < 1329
                  ? (c >= 1162 && c <= 1327)
                  : c <= 1366)))
              : (c <= 1369 || (c < 1568
                ? (c < 1488
                  ? (c >= 1376 && c <= 1416)
                  : (c <= 1514 || (c >= 1519 && c <= 1522)))
                : (c <= 1610 || (c < 1649
                  ? (c >= 1646 && c <= 1647)
                  : c <= 1747)))))
            : (c <= 1749 || (c < 1869
              ? (c < 1791
                ? (c < 1774
                  ? (c >= 1765 && c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1810
                  ? c == 1808
                  : c <= 1839)))
              : (c <= 1957 || (c < 2036
                ? (c < 1994
                  ? c == 1969
                  : c <= 2026)
                : (c <= 2037 || (c < 2048
                  ? c == 2042
                  : c <= 2069)))))))))
        : (c <= 2074 || (c < 2610
          ? (c < 2451
            ? (c < 2308
              ? (c < 2144
                ? (c < 2088
                  ? c == 2084
                  : (c <= 2088 || (c >= 2112 && c <= 2136)))
                : (c <= 2154 || (c < 2230
                  ? (c >= 2208 && c <= 2228)
                  : c <= 2247)))
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
      : (c <= 2954 || (c < 3904
        ? (c < 3342
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
            : (c <= 3133 || (c < 3242
              ? (c < 3205
                ? (c < 3168
                  ? (c >= 3160 && c <= 3162)
                  : (c <= 3169 || c == 3200))
                : (c <= 3212 || (c < 3218
                  ? (c >= 3214 && c <= 3216)
                  : c <= 3240)))
              : (c <= 3251 || (c < 3296
                ? (c < 3261
                  ? (c >= 3253 && c <= 3257)
                  : (c <= 3261 || c == 3294))
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
          : (c <= 4822 || (c < 5920
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
                : (c <= 5880 || (c < 5902
                  ? (c >= 5888 && c <= 5900)
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
    : (c <= 6509 || (c < 43072
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
                  ? (c >= 6981 && c <= 6987)
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
        : (c <= 8511 || (c < 12445
          ? (c < 11648
            ? (c < 11499
              ? (c < 11264
                ? (c < 8526
                  ? (c >= 8517 && c <= 8521)
                  : (c <= 8526 || (c >= 8579 && c <= 8580)))
                : (c <= 11310 || (c < 11360
                  ? (c >= 11312 && c <= 11358)
                  : c <= 11492)))
              : (c <= 11502 || (c < 11565
                ? (c < 11520
                  ? (c >= 11506 && c <= 11507)
                  : (c <= 11557 || c == 11559))
                : (c <= 11565 || (c < 11631
                  ? (c >= 11568 && c <= 11623)
                  : c <= 11631)))))
            : (c <= 11670 || (c < 11728
              ? (c < 11704
                ? (c < 11688
                  ? (c >= 11680 && c <= 11686)
                  : (c <= 11694 || (c >= 11696 && c <= 11702)))
                : (c <= 11710 || (c < 11720
                  ? (c >= 11712 && c <= 11718)
                  : c <= 11726)))
              : (c <= 11734 || (c < 12337
                ? (c < 11823
                  ? (c >= 11736 && c <= 11742)
                  : (c <= 11823 || (c >= 12293 && c <= 12294)))
                : (c <= 12341 || (c < 12353
                  ? (c >= 12347 && c <= 12348)
                  : c <= 12438)))))))
          : (c <= 12447 || (c < 42512
            ? (c < 13312
              ? (c < 12593
                ? (c < 12540
                  ? (c >= 12449 && c <= 12538)
                  : (c <= 12543 || (c >= 12549 && c <= 12591)))
                : (c <= 12686 || (c < 12784
                  ? (c >= 12704 && c <= 12735)
                  : c <= 12799)))
              : (c <= 13312 || (c < 40960
                ? (c < 19968
                  ? c == 19903
                  : (c <= 19968 || c == 40956))
                : (c <= 42124 || (c < 42240
                  ? (c >= 42192 && c <= 42237)
                  : c <= 42508)))))
            : (c <= 42527 || (c < 42891
              ? (c < 42656
                ? (c < 42560
                  ? (c >= 42538 && c <= 42539)
                  : (c <= 42606 || (c >= 42623 && c <= 42653)))
                : (c <= 42725 || (c < 42786
                  ? (c >= 42775 && c <= 42783)
                  : c <= 42888)))
              : (c <= 42943 || (c < 43011
                ? (c < 42997
                  ? (c >= 42946 && c <= 42954)
                  : c <= 43009)
                : (c <= 43013 || (c < 43020
                  ? (c >= 43015 && c <= 43018)
                  : c <= 43042)))))))))))
      : (c <= 43123 || (c < 65136
        ? (c < 43785
          ? (c < 43584
            ? (c < 43360
              ? (c < 43261
                ? (c < 43250
                  ? (c >= 43138 && c <= 43187)
                  : (c <= 43255 || c == 43259))
                : (c <= 43262 || (c < 43312
                  ? (c >= 43274 && c <= 43301)
                  : c <= 43334)))
              : (c <= 43388 || (c < 43494
                ? (c < 43471
                  ? (c >= 43396 && c <= 43442)
                  : (c <= 43471 || (c >= 43488 && c <= 43492)))
                : (c <= 43503 || (c < 43520
                  ? (c >= 43514 && c <= 43518)
                  : c <= 43560)))))
            : (c <= 43586 || (c < 43705
              ? (c < 43646
                ? (c < 43616
                  ? (c >= 43588 && c <= 43595)
                  : (c <= 43638 || c == 43642))
                : (c <= 43695 || (c < 43701
                  ? c == 43697
                  : c <= 43702)))
              : (c <= 43709 || (c < 43744
                ? (c < 43714
                  ? c == 43712
                  : (c <= 43714 || (c >= 43739 && c <= 43741)))
                : (c <= 43754 || (c < 43777
                  ? (c >= 43762 && c <= 43764)
                  : c <= 43782)))))))
          : (c <= 43790 || (c < 64275
            ? (c < 44032
              ? (c < 43824
                ? (c < 43808
                  ? (c >= 43793 && c <= 43798)
                  : (c <= 43814 || (c >= 43816 && c <= 43822)))
                : (c <= 43866 || (c < 43888
                  ? (c >= 43868 && c <= 43881)
                  : c <= 44002)))
              : (c <= 44032 || (c < 63744
                ? (c < 55216
                  ? c == 55203
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64256
                  ? (c >= 64112 && c <= 64217)
                  : c <= 64262)))))
            : (c <= 64279 || (c < 64323
              ? (c < 64312
                ? (c < 64287
                  ? c == 64285
                  : (c <= 64296 || (c >= 64298 && c <= 64310)))
                : (c <= 64316 || (c < 64320
                  ? c == 64318
                  : c <= 64321)))
              : (c <= 64324 || (c < 64848
                ? (c < 64467
                  ? (c >= 64326 && c <= 64433)
                  : c <= 64829)
                : (c <= 64911 || (c < 65008
                  ? (c >= 64914 && c <= 64967)
                  : c <= 65019)))))))))
        : (c <= 65140 || (c < 66816
          ? (c < 65616
            ? (c < 65490
              ? (c < 65382
                ? (c < 65313
                  ? (c >= 65142 && c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))
                : (c <= 65470 || (c < 65482
                  ? (c >= 65474 && c <= 65479)
                  : c <= 65487)))
              : (c <= 65495 || (c < 65576
                ? (c < 65536
                  ? (c >= 65498 && c <= 65500)
                  : (c <= 65547 || (c >= 65549 && c <= 65574)))
                : (c <= 65594 || (c < 65599
                  ? (c >= 65596 && c <= 65597)
                  : c <= 65613)))))
            : (c <= 65629 || (c < 66384
              ? (c < 66304
                ? (c < 66176
                  ? (c >= 65664 && c <= 65786)
                  : (c <= 66204 || (c >= 66208 && c <= 66256)))
                : (c <= 66335 || (c < 66370
                  ? (c >= 66349 && c <= 66368)
                  : c <= 66377)))
              : (c <= 66421 || (c < 66560
                ? (c < 66464
                  ? (c >= 66432 && c <= 66461)
                  : (c <= 66499 || (c >= 66504 && c <= 66511)))
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

static inline bool sym_identifier_character_set_6(int32_t c) {
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

static inline bool sym_identifier_character_set_8(int32_t c) {
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

static inline bool sym_identifier_character_set_25(int32_t c) {
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
      if (eof) ADVANCE(63);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(21);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\\') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(154);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '.') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(129);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '-') ADVANCE(155);
      if (lookahead == '.') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(129);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(8);
      if (lookahead == '.') ADVANCE(78);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(129);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(112);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(83);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 13:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_4(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 14:
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '\'') ADVANCE(140);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(151);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      if (lookahead == '.') ADVANCE(46);
      if (lookahead == '_') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 21:
      if (lookahead == 'U') ADVANCE(59);
      if (lookahead == 'u') ADVANCE(51);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 22:
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(15);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 25:
      if (lookahead == '`') ADVANCE(144);
      if (lookahead != 0) ADVANCE(25);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(67);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '{') ADVANCE(153);
      END_STATE();
    case 29:
      if (lookahead == '}') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 31:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == '_') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 32:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 34:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      END_STATE();
    case 35:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(15);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(35);
      END_STATE();
    case 38:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(15);
      if (lookahead == 'U') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(52);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(37);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
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
      if (eof) ADVANCE(63);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(145);
      if (lookahead == '$') ADVANCE(80);
      if (lookahead == '\'') ADVANCE(22);
      if (lookahead == '.') ADVANCE(79);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(130);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(129);
      if (lookahead == '`') ADVANCE(25);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'd') ADVANCE(94);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'f') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(96);
      if (lookahead == 'n') ADVANCE(103);
      if (lookahead == 'p') ADVANCE(100);
      if (lookahead == 'r') ADVANCE(126);
      if (lookahead == 't') ADVANCE(81);
      if (lookahead == 'w') ADVANCE(101);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '}') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(61)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_if);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(27);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_else);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_end);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_range);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_template);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_define);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_block);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_with);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_pipeline_stub);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_6(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(111);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_7(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(122);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_8(lookahead)) ADVANCE(129);
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_9(lookahead)) ADVANCE(129);
      if (lookahead == 'd') ADVANCE(70);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_10(lookahead)) ADVANCE(129);
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(129);
      if (lookahead == 'f') ADVANCE(66);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_11(lookahead)) ADVANCE(129);
      if (lookahead == 'f') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_12(lookahead)) ADVANCE(129);
      if (lookahead == 'g') ADVANCE(89);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_13(lookahead)) ADVANCE(129);
      if (lookahead == 'h') ADVANCE(75);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(129);
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(129);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(129);
      if (lookahead == 'i') ADVANCE(114);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(129);
      if (lookahead == 'i') ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_14(lookahead)) ADVANCE(129);
      if (lookahead == 'i') ADVANCE(115);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_15(lookahead)) ADVANCE(129);
      if (lookahead == 'k') ADVANCE(74);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(143);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(128);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(121);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_16(lookahead)) ADVANCE(129);
      if (lookahead == 'l') ADVANCE(104);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_17(lookahead)) ADVANCE(129);
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(129);
      if (lookahead == 'n') ADVANCE(85);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(129);
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(129);
      if (lookahead == 'n') ADVANCE(90);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_18(lookahead)) ADVANCE(129);
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_19(lookahead)) ADVANCE(129);
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(129);
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_20(lookahead)) ADVANCE(129);
      if (lookahead == 'p') ADVANCE(108);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_21(lookahead)) ADVANCE(129);
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(129);
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(129);
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_22(lookahead)) ADVANCE(129);
      if (lookahead == 's') ADVANCE(93);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(129);
      if (lookahead == 't') ADVANCE(99);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_23(lookahead)) ADVANCE(129);
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_24(lookahead)) ADVANCE(129);
      if (lookahead == 'u') ADVANCE(87);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(129);
      if (lookahead == 'a') ADVANCE(113);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(129);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_25(lookahead)) ADVANCE(129);
      if (lookahead == 'a') ADVANCE(124);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(24);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '_') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(138);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(32);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(30);
      if (lookahead == '_') ADVANCE(45);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(33);
      if (lookahead == 'i') ADVANCE(139);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(30);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_true);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_false);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_nil);
      if (sym_identifier_character_set_5(lookahead)) ADVANCE(129);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 12},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 11},
  [31] = {.lex_state = 11},
  [32] = {.lex_state = 11},
  [33] = {.lex_state = 11},
  [34] = {.lex_state = 11},
  [35] = {.lex_state = 11},
  [36] = {.lex_state = 11},
  [37] = {.lex_state = 11},
  [38] = {.lex_state = 11},
  [39] = {.lex_state = 11},
  [40] = {.lex_state = 11},
  [41] = {.lex_state = 11},
  [42] = {.lex_state = 11},
  [43] = {.lex_state = 11},
  [44] = {.lex_state = 11},
  [45] = {.lex_state = 11},
  [46] = {.lex_state = 11},
  [47] = {.lex_state = 11},
  [48] = {.lex_state = 11},
  [49] = {.lex_state = 11},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 11},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 13},
  [59] = {.lex_state = 13},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 6},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 6},
  [66] = {.lex_state = 6},
  [67] = {.lex_state = 6},
  [68] = {.lex_state = 6},
  [69] = {.lex_state = 6},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 10},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 12},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 11},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 12},
  [80] = {.lex_state = 13},
  [81] = {.lex_state = 11},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 13},
  [84] = {.lex_state = 62},
  [85] = {.lex_state = 62},
  [86] = {.lex_state = 62},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 62},
  [89] = {.lex_state = 6},
  [90] = {.lex_state = 62},
  [91] = {.lex_state = 62},
  [92] = {.lex_state = 62},
  [93] = {.lex_state = 62},
  [94] = {.lex_state = 62},
  [95] = {.lex_state = 62},
  [96] = {.lex_state = 62},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 62},
  [99] = {.lex_state = 62},
  [100] = {.lex_state = 62},
  [101] = {.lex_state = 62},
  [102] = {.lex_state = 62},
  [103] = {.lex_state = 62},
  [104] = {.lex_state = 62},
  [105] = {.lex_state = 62},
  [106] = {.lex_state = 62},
  [107] = {.lex_state = 62},
  [108] = {.lex_state = 62},
  [109] = {.lex_state = 62},
  [110] = {.lex_state = 62},
  [111] = {.lex_state = 62},
  [112] = {.lex_state = 62},
  [113] = {.lex_state = 62},
  [114] = {.lex_state = 62},
  [115] = {.lex_state = 62},
  [116] = {.lex_state = 62},
  [117] = {.lex_state = 62},
  [118] = {.lex_state = 62},
  [119] = {.lex_state = 62},
  [120] = {.lex_state = 62},
  [121] = {.lex_state = 62},
  [122] = {.lex_state = 62},
  [123] = {.lex_state = 62},
  [124] = {.lex_state = 62},
  [125] = {.lex_state = 62},
  [126] = {.lex_state = 62},
  [127] = {.lex_state = 62},
  [128] = {.lex_state = 62},
  [129] = {.lex_state = 62},
  [130] = {.lex_state = 62},
  [131] = {.lex_state = 62},
  [132] = {.lex_state = 62},
  [133] = {.lex_state = 62},
  [134] = {.lex_state = 62},
  [135] = {.lex_state = 62},
  [136] = {.lex_state = 62},
  [137] = {.lex_state = 62},
  [138] = {.lex_state = 62},
  [139] = {.lex_state = 62},
  [140] = {.lex_state = 62},
  [141] = {.lex_state = 62},
  [142] = {.lex_state = 62},
  [143] = {.lex_state = 62},
  [144] = {.lex_state = 62},
  [145] = {.lex_state = 62},
  [146] = {.lex_state = 62},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 7},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 1},
  [157] = {.lex_state = 9},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 7},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 1},
  [165] = {.lex_state = 7},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 7},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 7},
  [171] = {.lex_state = 9},
  [172] = {.lex_state = 1},
  [173] = {.lex_state = 7},
  [174] = {.lex_state = 7},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 62},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 62},
  [180] = {.lex_state = 62},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 62},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 62},
  [186] = {.lex_state = 62},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 62},
  [189] = {.lex_state = 62},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 62},
  [192] = {.lex_state = 62},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 62},
  [195] = {.lex_state = 62},
  [196] = {.lex_state = 62},
  [197] = {.lex_state = 62},
  [198] = {.lex_state = 62},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
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
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 62},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 62},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 62},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 62},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 62},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 62},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 62},
  [278] = {.lex_state = 62},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 62},
  [286] = {.lex_state = 62},
  [287] = {.lex_state = 62},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 62},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 62},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 62},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 62},
  [306] = {.lex_state = 62},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 62},
  [309] = {.lex_state = 62},
  [310] = {.lex_state = 62},
  [311] = {.lex_state = 62},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 62},
  [315] = {.lex_state = 62},
  [316] = {.lex_state = 9},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 9},
  [319] = {.lex_state = 62},
  [320] = {.lex_state = 62},
  [321] = {.lex_state = 62},
  [322] = {.lex_state = 62},
  [323] = {.lex_state = 62},
  [324] = {.lex_state = 62},
  [325] = {.lex_state = 62},
  [326] = {.lex_state = 62},
  [327] = {.lex_state = 62},
  [328] = {.lex_state = 62},
  [329] = {.lex_state = 62},
  [330] = {.lex_state = 62},
  [331] = {.lex_state = 62},
  [332] = {.lex_state = 62},
  [333] = {.lex_state = 62},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 62},
  [336] = {.lex_state = 62},
  [337] = {.lex_state = 62},
  [338] = {.lex_state = 62},
  [339] = {.lex_state = 62},
  [340] = {.lex_state = 62},
  [341] = {.lex_state = 62},
  [342] = {.lex_state = 62},
  [343] = {.lex_state = 62},
  [344] = {.lex_state = 62},
  [345] = {.lex_state = 62},
  [346] = {.lex_state = 62},
  [347] = {.lex_state = 62},
  [348] = {.lex_state = 62},
  [349] = {.lex_state = 62},
  [350] = {.lex_state = 62},
  [351] = {.lex_state = 62},
  [352] = {.lex_state = 62},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elseif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_range] = ACTIONS(1),
    [anon_sym_template] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
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
    [sym_template] = STATE(355),
    [sym__block] = STATE(85),
    [sym__action] = STATE(85),
    [sym__comment_action] = STATE(85),
    [sym__pipeline_action] = STATE(85),
    [sym_if_action] = STATE(85),
    [sym_range_action] = STATE(85),
    [sym_template_action] = STATE(85),
    [sym_define_action] = STATE(85),
    [sym_block_action] = STATE(85),
    [sym_with_action] = STATE(85),
    [sym__left_delimiter] = STATE(58),
    [aux_sym_template_repeat1] = STATE(85),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(13),
    [anon_sym_end] = ACTIONS(15),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(43),
    [anon_sym_end] = ACTIONS(45),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(47),
    [anon_sym_end] = ACTIONS(49),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(51),
    [anon_sym_end] = ACTIONS(53),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(55),
    [anon_sym_end] = ACTIONS(57),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(59),
    [anon_sym_end] = ACTIONS(61),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(63),
    [anon_sym_end] = ACTIONS(65),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(67),
    [anon_sym_end] = ACTIONS(69),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(71),
    [anon_sym_end] = ACTIONS(73),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(75),
    [anon_sym_end] = ACTIONS(77),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(79),
    [anon_sym_end] = ACTIONS(81),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(83),
    [anon_sym_end] = ACTIONS(85),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(87),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(89),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(91),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(93),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [18] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(95),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [19] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(97),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [20] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(99),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [21] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(101),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [22] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(103),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [23] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(105),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [24] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(107),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [25] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(109),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [26] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(111),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [27] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(113),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [28] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(115),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [29] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(117),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [30] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(119),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [31] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(121),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [32] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(123),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [33] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(125),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [34] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(127),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [35] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(129),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [36] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(131),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [37] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(133),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [38] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(135),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [39] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(137),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [40] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(139),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [41] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(141),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [42] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(143),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [43] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(145),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [44] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(147),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [45] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(149),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [46] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(151),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [47] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(153),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [48] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(155),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [49] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(157),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [50] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(159),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [51] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(161),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [52] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(163),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [53] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(165),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [54] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(167),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [55] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(169),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [56] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(171),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [57] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(173),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [58] = {
    [sym__pipeline] = STATE(301),
    [sym_method_call] = STATE(301),
    [sym_function_call] = STATE(301),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(175),
    [anon_sym_range] = ACTIONS(177),
    [anon_sym_template] = ACTIONS(179),
    [anon_sym_define] = ACTIONS(181),
    [anon_sym_block] = ACTIONS(183),
    [anon_sym_with] = ACTIONS(185),
    [sym_pipeline_stub] = ACTIONS(187),
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
    [sym_comment] = ACTIONS(189),
  },
  [59] = {
    [sym__pipeline] = STATE(271),
    [sym_method_call] = STATE(271),
    [sym_function_call] = STATE(271),
    [sym__expression] = STATE(300),
    [sym_selector_expression] = STATE(72),
    [sym_field] = STATE(72),
    [sym_variable] = STATE(300),
    [sym__literal] = STATE(300),
    [sym__boolean_literal] = STATE(300),
    [sym_dot] = STATE(300),
    [sym__string_literal] = STATE(300),
    [sym_interpreted_string_literal] = STATE(300),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
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
  [0] = 13,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      sym_pipeline_stub,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(195), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(121), 1,
      sym__right_delimiter,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(226), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [55] = 13,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(197), 1,
      sym_pipeline_stub,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(201), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(278), 1,
      sym__right_delimiter,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(279), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [110] = 13,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(203), 1,
      sym_pipeline_stub,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(129), 1,
      sym__right_delimiter,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(276), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [165] = 13,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(207), 1,
      sym_pipeline_stub,
    ACTIONS(209), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(328), 1,
      sym__right_delimiter,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(201), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [220] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(211), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(234), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [266] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(213), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(295), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [312] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(215), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(227), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [358] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(232), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [404] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(298), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [450] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(297), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [496] = 10,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(223), 1,
      sym_pipeline_stub,
    STATE(72), 2,
      sym_selector_expression,
      sym_field,
    ACTIONS(37), 3,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
    STATE(243), 3,
      sym__pipeline,
      sym_method_call,
      sym_function_call,
    ACTIONS(35), 5,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
    STATE(300), 7,
      sym__expression,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [542] = 3,
    ACTIONS(229), 1,
      anon_sym_DASH,
    ACTIONS(227), 7,
      anon_sym_elseif,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(225), 16,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [573] = 8,
    ACTIONS(231), 1,
      anon_sym_DOT,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    STATE(334), 1,
      sym_argument_list,
    ACTIONS(235), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(241), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(237), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(150), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [613] = 2,
    ACTIONS(245), 7,
      anon_sym_elseif,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(243), 16,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [641] = 8,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_DOT,
    STATE(317), 1,
      sym_argument_list,
    ACTIONS(235), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(249), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(237), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(150), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [681] = 3,
    ACTIONS(251), 1,
      anon_sym_DASH,
    ACTIONS(227), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(225), 16,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [711] = 7,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(253), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(257), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(255), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(161), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [748] = 3,
    ACTIONS(259), 1,
      anon_sym_DASH,
    ACTIONS(227), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(225), 15,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [777] = 7,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(253), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(261), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(255), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(161), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [814] = 2,
    ACTIONS(245), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(243), 16,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [841] = 3,
    ACTIONS(263), 1,
      anon_sym_DASH,
    ACTIONS(227), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(225), 14,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [869] = 2,
    ACTIONS(245), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(243), 15,
      anon_sym_if,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [895] = 6,
    ACTIONS(233), 1,
      anon_sym_DOLLAR,
    ACTIONS(239), 1,
      anon_sym_DQUOTE,
    ACTIONS(247), 1,
      anon_sym_DOT,
    ACTIONS(253), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(255), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(161), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [928] = 2,
    ACTIONS(245), 6,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
    ACTIONS(243), 14,
      anon_sym_if,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [953] = 5,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(265), 1,
      aux_sym_if_action_repeat1,
    STATE(114), 11,
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
  [979] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 1,
      ts_builtin_sym_end,
    ACTIONS(271), 1,
      sym_text,
    STATE(58), 1,
      sym__left_delimiter,
    STATE(90), 11,
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
  [1005] = 5,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(266), 1,
      aux_sym_if_action_repeat1,
    STATE(114), 11,
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
  [1031] = 2,
    ACTIONS(275), 7,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(273), 8,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [1051] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(277), 1,
      sym_text,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(267), 1,
      aux_sym_if_action_repeat1,
    STATE(86), 11,
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
  [1077] = 2,
    ACTIONS(281), 7,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
    ACTIONS(279), 8,
      sym_pipeline_stub,
      anon_sym_DOT,
      sym_identifier,
      sym_int_literal,
      sym_float_literal,
      sym_true,
      sym_false,
      sym_nil,
  [1097] = 5,
    ACTIONS(283), 1,
      ts_builtin_sym_end,
    ACTIONS(285), 1,
      sym_text,
    ACTIONS(288), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(58), 1,
      sym__left_delimiter,
    STATE(90), 11,
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
  [1123] = 5,
    ACTIONS(267), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(291), 1,
      sym_text,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(292), 1,
      aux_sym_if_action_repeat1,
    STATE(84), 11,
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
  [1149] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(53), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1172] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(295), 1,
      sym_text,
    STATE(38), 1,
      sym__left_delimiter,
    STATE(134), 11,
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
  [1195] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(18), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1218] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(20), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1241] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(297), 1,
      sym_text,
    STATE(24), 1,
      sym__left_delimiter,
    STATE(118), 11,
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
  [1264] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(299), 1,
      sym_text,
    STATE(21), 1,
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
  [1287] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(22), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1310] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(301), 1,
      sym_text,
    STATE(23), 1,
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
  [1333] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(25), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1356] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(303), 1,
      sym_text,
    STATE(26), 1,
      sym__left_delimiter,
    STATE(94), 11,
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
  [1379] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1402] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(305), 1,
      sym_text,
    STATE(29), 1,
      sym__left_delimiter,
    STATE(95), 11,
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
  [1425] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(307), 1,
      sym_text,
    STATE(30), 1,
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
  [1448] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(309), 1,
      sym_text,
    STATE(31), 1,
      sym__left_delimiter,
    STATE(98), 11,
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
  [1471] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1494] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(311), 1,
      sym_text,
    STATE(33), 1,
      sym__left_delimiter,
    STATE(100), 11,
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
  [1517] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(313), 1,
      sym_text,
    STATE(34), 1,
      sym__left_delimiter,
    STATE(102), 11,
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
  [1540] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(315), 1,
      sym_text,
    STATE(35), 1,
      sym__left_delimiter,
    STATE(106), 11,
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
  [1563] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(317), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1586] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(13), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1609] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(37), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1632] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(321), 1,
      sym_text,
    STATE(19), 1,
      sym__left_delimiter,
    STATE(131), 11,
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
  [1655] = 4,
    ACTIONS(288), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(323), 1,
      sym_text,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1678] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(39), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1701] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(6), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1724] = 4,
    ACTIONS(326), 1,
      sym_text,
    ACTIONS(328), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(110), 11,
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
  [1747] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(43), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1770] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(331), 1,
      sym_text,
    STATE(44), 1,
      sym__left_delimiter,
    STATE(138), 11,
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
  [1793] = 4,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(333), 1,
      sym_text,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(111), 11,
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
  [1816] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(335), 1,
      sym_text,
    STATE(14), 1,
      sym__left_delimiter,
    STATE(112), 11,
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
  [1839] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(337), 1,
      sym_text,
    STATE(50), 1,
      sym__left_delimiter,
    STATE(92), 11,
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
  [1862] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(339), 1,
      sym_text,
    STATE(41), 1,
      sym__left_delimiter,
    STATE(115), 11,
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
  [1885] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(46), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [1908] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(341), 1,
      sym_text,
    STATE(47), 1,
      sym__left_delimiter,
    STATE(146), 11,
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
  [1931] = 4,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(343), 1,
      sym_text,
    STATE(11), 1,
      sym__left_delimiter,
    STATE(116), 11,
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
  [1954] = 4,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(345), 1,
      sym_text,
    STATE(9), 1,
      sym__left_delimiter,
    STATE(145), 11,
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
  [1977] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(7), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2000] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(347), 1,
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
  [2023] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(52), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2046] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(49), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2069] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(349), 1,
      sym_text,
    STATE(45), 1,
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
  [2092] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(17), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2115] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(36), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2138] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(16), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2161] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(351), 1,
      sym_text,
    STATE(51), 1,
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
  [2184] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(48), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2207] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(54), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2230] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(353), 1,
      sym_text,
    STATE(57), 1,
      sym__left_delimiter,
    STATE(130), 11,
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
  [2253] = 4,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(355), 1,
      sym_text,
    STATE(10), 1,
      sym__left_delimiter,
    STATE(128), 11,
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
  [2276] = 4,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(357), 1,
      sym_text,
    STATE(40), 1,
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
  [2299] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(56), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2322] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2345] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2368] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(319), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(8), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2391] = 4,
    ACTIONS(265), 1,
      sym_text,
    ACTIONS(293), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(55), 1,
      sym__left_delimiter,
    STATE(114), 11,
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
  [2414] = 2,
    ACTIONS(359), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(361), 10,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2432] = 2,
    ACTIONS(363), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(365), 10,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2450] = 2,
    ACTIONS(367), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(369), 10,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2468] = 4,
    ACTIONS(371), 1,
      anon_sym_,
    ACTIONS(373), 1,
      anon_sym_DOT,
    STATE(162), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(375), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2482] = 3,
    ACTIONS(377), 1,
      anon_sym_,
    ACTIONS(381), 1,
      sym_identifier,
    ACTIONS(379), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2494] = 3,
    ACTIONS(383), 1,
      anon_sym_,
    ACTIONS(387), 1,
      sym_identifier,
    ACTIONS(385), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2506] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(389), 1,
      sym_raw_string_literal,
    STATE(63), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2517] = 2,
    ACTIONS(369), 1,
      anon_sym_,
    ACTIONS(367), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2526] = 3,
    ACTIONS(391), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(393), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2537] = 3,
    ACTIONS(395), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(397), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2548] = 2,
    ACTIONS(399), 1,
      sym_identifier,
    ACTIONS(383), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2557] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(401), 1,
      sym_raw_string_literal,
    STATE(62), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2568] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(403), 1,
      sym_raw_string_literal,
    STATE(60), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2579] = 3,
    ACTIONS(405), 1,
      anon_sym_,
    STATE(160), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(408), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2590] = 3,
    ACTIONS(373), 1,
      anon_sym_DOT,
    ACTIONS(410), 1,
      anon_sym_,
    ACTIONS(408), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2601] = 3,
    ACTIONS(412), 1,
      anon_sym_,
    STATE(160), 1,
      aux_sym_argument_list_repeat1,
    ACTIONS(414), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2612] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      sym_raw_string_literal,
    STATE(61), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2623] = 3,
    ACTIONS(418), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(420), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2634] = 2,
    ACTIONS(275), 1,
      anon_sym_,
    ACTIONS(273), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2643] = 3,
    ACTIONS(423), 1,
      anon_sym_DQUOTE,
    STATE(164), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(397), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2654] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(425), 1,
      sym_raw_string_literal,
    STATE(230), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2665] = 2,
    ACTIONS(365), 1,
      anon_sym_,
    ACTIONS(363), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2674] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(427), 1,
      sym_raw_string_literal,
    STATE(296), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2685] = 2,
    ACTIONS(281), 1,
      anon_sym_,
    ACTIONS(279), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2694] = 2,
    ACTIONS(429), 1,
      sym_identifier,
    ACTIONS(377), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2703] = 3,
    ACTIONS(431), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(433), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2714] = 2,
    ACTIONS(361), 1,
      anon_sym_,
    ACTIONS(359), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2723] = 2,
    ACTIONS(435), 1,
      anon_sym_,
    ACTIONS(437), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2732] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(439), 1,
      anon_sym_else,
    ACTIONS(441), 1,
      anon_sym_end,
  [2742] = 2,
    ACTIONS(445), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(443), 2,
      ts_builtin_sym_end,
      sym_text,
  [2750] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(447), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(188), 1,
      sym__right_delimiter,
  [2760] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(449), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(189), 1,
      sym__right_delimiter,
  [2770] = 2,
    ACTIONS(453), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(451), 2,
      ts_builtin_sym_end,
      sym_text,
  [2778] = 2,
    ACTIONS(457), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(455), 2,
      ts_builtin_sym_end,
      sym_text,
  [2786] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(459), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(191), 1,
      sym__right_delimiter,
  [2796] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(461), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(192), 1,
      sym__right_delimiter,
  [2806] = 2,
    ACTIONS(465), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(463), 2,
      ts_builtin_sym_end,
      sym_text,
  [2814] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(467), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(194), 1,
      sym__right_delimiter,
  [2824] = 2,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(469), 2,
      ts_builtin_sym_end,
      sym_text,
  [2832] = 2,
    ACTIONS(475), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(473), 2,
      ts_builtin_sym_end,
      sym_text,
  [2840] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(477), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(195), 1,
      sym__right_delimiter,
  [2850] = 2,
    ACTIONS(481), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(479), 2,
      ts_builtin_sym_end,
      sym_text,
  [2858] = 2,
    ACTIONS(485), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(483), 2,
      ts_builtin_sym_end,
      sym_text,
  [2866] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(487), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(196), 1,
      sym__right_delimiter,
  [2876] = 2,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(489), 2,
      ts_builtin_sym_end,
      sym_text,
  [2884] = 2,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(493), 2,
      ts_builtin_sym_end,
      sym_text,
  [2892] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(497), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(197), 1,
      sym__right_delimiter,
  [2902] = 2,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(499), 2,
      ts_builtin_sym_end,
      sym_text,
  [2910] = 2,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(503), 2,
      ts_builtin_sym_end,
      sym_text,
  [2918] = 2,
    ACTIONS(509), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(507), 2,
      ts_builtin_sym_end,
      sym_text,
  [2926] = 2,
    ACTIONS(513), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(511), 2,
      ts_builtin_sym_end,
      sym_text,
  [2934] = 2,
    ACTIONS(517), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(515), 2,
      ts_builtin_sym_end,
      sym_text,
  [2942] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(519), 1,
      anon_sym_else,
    ACTIONS(521), 1,
      anon_sym_end,
  [2952] = 3,
    ACTIONS(523), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 1,
      aux_sym_if_action_repeat1,
    STATE(354), 1,
      sym__left_delimiter,
  [2962] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(526), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(352), 1,
      sym__right_delimiter,
  [2972] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(528), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(104), 1,
      sym__right_delimiter,
  [2982] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(256), 1,
      sym__right_delimiter,
  [2992] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(532), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(261), 1,
      sym__right_delimiter,
  [3002] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(534), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(351), 1,
      sym__right_delimiter,
  [3012] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(536), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(350), 1,
      sym__right_delimiter,
  [3022] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(538), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(349), 1,
      sym__right_delimiter,
  [3032] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(540), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(348), 1,
      sym__right_delimiter,
  [3042] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(347), 1,
      sym__right_delimiter,
  [3052] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(544), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(97), 1,
      sym__right_delimiter,
  [3062] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(546), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(346), 1,
      sym__right_delimiter,
  [3072] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(315), 1,
      sym__right_delimiter,
  [3082] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(550), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(99), 1,
      sym__right_delimiter,
  [3092] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(552), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(344), 1,
      sym__right_delimiter,
  [3102] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(554), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(101), 1,
      sym__right_delimiter,
  [3112] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(556), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(343), 1,
      sym__right_delimiter,
  [3122] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(558), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(342), 1,
      sym__right_delimiter,
  [3132] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(560), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(103), 1,
      sym__right_delimiter,
  [3142] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(562), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(341), 1,
      sym__right_delimiter,
  [3152] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(564), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(105), 1,
      sym__right_delimiter,
  [3162] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(566), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(340), 1,
      sym__right_delimiter,
  [3172] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(107), 1,
      sym__right_delimiter,
  [3182] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(570), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(339), 1,
      sym__right_delimiter,
  [3192] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(572), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(108), 1,
      sym__right_delimiter,
  [3202] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(109), 1,
      sym__right_delimiter,
  [3212] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(93), 1,
      sym__right_delimiter,
  [3222] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(578), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(120), 1,
      sym__right_delimiter,
  [3232] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(580), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(338), 1,
      sym__right_delimiter,
  [3242] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(582), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(264), 1,
      sym__right_delimiter,
  [3252] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(584), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(123), 1,
      sym__right_delimiter,
  [3262] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(586), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(337), 1,
      sym__right_delimiter,
  [3272] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(588), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(126), 1,
      sym__right_delimiter,
  [3282] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(590), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(327), 1,
      sym__right_delimiter,
  [3292] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(592), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(91), 1,
      sym__right_delimiter,
  [3302] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(594), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(345), 1,
      sym__right_delimiter,
  [3312] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(596), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(113), 1,
      sym__right_delimiter,
  [3322] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(598), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(314), 1,
      sym__right_delimiter,
  [3332] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(600), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(333), 1,
      sym__right_delimiter,
  [3342] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(602), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(332), 1,
      sym__right_delimiter,
  [3352] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(604), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(275), 1,
      sym__right_delimiter,
  [3362] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(606), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(331), 1,
      sym__right_delimiter,
  [3372] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(608), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(330), 1,
      sym__right_delimiter,
  [3382] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(610), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(117), 1,
      sym__right_delimiter,
  [3392] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(612), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(329), 1,
      sym__right_delimiter,
  [3402] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(614), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(336), 1,
      sym__right_delimiter,
  [3412] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym_text,
  [3420] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(620), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      sym__right_delimiter,
  [3430] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(622), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(326), 1,
      sym__right_delimiter,
  [3440] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(624), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(325), 1,
      sym__right_delimiter,
  [3450] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(626), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(287), 1,
      sym__right_delimiter,
  [3460] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(628), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(324), 1,
      sym__right_delimiter,
  [3470] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(630), 1,
      anon_sym_else,
    ACTIONS(632), 1,
      anon_sym_end,
  [3480] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(634), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(132), 1,
      sym__right_delimiter,
  [3490] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(636), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(323), 1,
      sym__right_delimiter,
  [3500] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(638), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      sym__right_delimiter,
  [3510] = 2,
    ACTIONS(642), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(640), 2,
      ts_builtin_sym_end,
      sym_text,
  [3518] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(644), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(322), 1,
      sym__right_delimiter,
  [3528] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(646), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(125), 1,
      sym__right_delimiter,
  [3538] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(648), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(310), 1,
      sym__right_delimiter,
  [3548] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(650), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(321), 1,
      sym__right_delimiter,
  [3558] = 2,
    ACTIONS(654), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(652), 2,
      ts_builtin_sym_end,
      sym_text,
  [3566] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(656), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(309), 1,
      sym__right_delimiter,
  [3576] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(658), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(308), 1,
      sym__right_delimiter,
  [3586] = 2,
    ACTIONS(662), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(660), 2,
      ts_builtin_sym_end,
      sym_text,
  [3594] = 3,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(175), 1,
      sym__left_delimiter,
    STATE(200), 1,
      aux_sym_if_action_repeat1,
  [3604] = 3,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 1,
      aux_sym_if_action_repeat1,
    STATE(252), 1,
      sym__left_delimiter,
  [3614] = 3,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(199), 1,
      sym__left_delimiter,
    STATE(200), 1,
      aux_sym_if_action_repeat1,
  [3624] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(666), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(186), 1,
      sym__right_delimiter,
  [3634] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(668), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(185), 1,
      sym__right_delimiter,
  [3644] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(670), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(319), 1,
      sym__right_delimiter,
  [3654] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(672), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(320), 1,
      sym__right_delimiter,
  [3664] = 2,
    ACTIONS(676), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(674), 2,
      ts_builtin_sym_end,
      sym_text,
  [3672] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(678), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(183), 1,
      sym__right_delimiter,
  [3682] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(680), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(306), 1,
      sym__right_delimiter,
  [3692] = 2,
    ACTIONS(684), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(682), 2,
      ts_builtin_sym_end,
      sym_text,
  [3700] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(686), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(141), 1,
      sym__right_delimiter,
  [3710] = 2,
    ACTIONS(690), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(688), 2,
      ts_builtin_sym_end,
      sym_text,
  [3718] = 2,
    ACTIONS(694), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(692), 2,
      ts_builtin_sym_end,
      sym_text,
  [3726] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(696), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(277), 1,
      sym__right_delimiter,
  [3736] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(698), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(180), 1,
      sym__right_delimiter,
  [3746] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(700), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      sym__right_delimiter,
  [3756] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(702), 1,
      anon_sym_else,
    ACTIONS(704), 1,
      anon_sym_end,
  [3766] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(706), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      sym__right_delimiter,
  [3776] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(708), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(305), 1,
      sym__right_delimiter,
  [3786] = 2,
    ACTIONS(712), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(710), 2,
      ts_builtin_sym_end,
      sym_text,
  [3794] = 2,
    ACTIONS(716), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(714), 2,
      ts_builtin_sym_end,
      sym_text,
  [3802] = 2,
    ACTIONS(720), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym_text,
  [3810] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(722), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(246), 1,
      sym__right_delimiter,
  [3820] = 2,
    ACTIONS(726), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(724), 2,
      ts_builtin_sym_end,
      sym_text,
  [3828] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(728), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(311), 1,
      sym__right_delimiter,
  [3838] = 2,
    ACTIONS(732), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(730), 2,
      ts_builtin_sym_end,
      sym_text,
  [3846] = 3,
    ACTIONS(664), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(200), 1,
      aux_sym_if_action_repeat1,
    STATE(282), 1,
      sym__left_delimiter,
  [3856] = 1,
    ACTIONS(435), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [3862] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(734), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(272), 1,
      sym__right_delimiter,
  [3872] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(736), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(127), 1,
      sym__right_delimiter,
  [3882] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(738), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(136), 1,
      sym__right_delimiter,
  [3892] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(740), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(140), 1,
      sym__right_delimiter,
  [3902] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(742), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(88), 1,
      sym__right_delimiter,
  [3912] = 2,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(744), 2,
      ts_builtin_sym_end,
      sym_text,
  [3920] = 2,
    ACTIONS(748), 1,
      anon_sym_DOT,
    ACTIONS(750), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [3928] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(752), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(285), 1,
      sym__right_delimiter,
  [3938] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(754), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(286), 1,
      sym__right_delimiter,
  [3948] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(756), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(96), 1,
      sym__right_delimiter,
  [3958] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(758), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(289), 1,
      sym__right_delimiter,
  [3968] = 2,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      sym_text,
  [3976] = 2,
    ACTIONS(766), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(764), 2,
      ts_builtin_sym_end,
      sym_text,
  [3984] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(768), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(291), 1,
      sym__right_delimiter,
  [3994] = 2,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      sym_text,
  [4002] = 2,
    ACTIONS(776), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(774), 2,
      ts_builtin_sym_end,
      sym_text,
  [4010] = 2,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(778), 2,
      ts_builtin_sym_end,
      sym_text,
  [4018] = 2,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(782), 2,
      ts_builtin_sym_end,
      sym_text,
  [4026] = 3,
    ACTIONS(199), 1,
      anon_sym_DASH2,
    ACTIONS(786), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(299), 1,
      sym__right_delimiter,
  [4036] = 3,
    ACTIONS(193), 1,
      anon_sym_DASH2,
    ACTIONS(788), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(139), 1,
      sym__right_delimiter,
  [4046] = 2,
    ACTIONS(451), 1,
      sym_text,
    ACTIONS(453), 1,
      anon_sym_LBRACE_LBRACE,
  [4053] = 2,
    ACTIONS(443), 1,
      sym_text,
    ACTIONS(445), 1,
      anon_sym_LBRACE_LBRACE,
  [4060] = 2,
    ACTIONS(790), 1,
      sym_identifier,
    STATE(148), 1,
      sym__field_identifier,
  [4067] = 1,
    ACTIONS(792), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [4072] = 2,
    ACTIONS(794), 1,
      sym_identifier,
    STATE(168), 1,
      sym__field_identifier,
  [4079] = 2,
    ACTIONS(714), 1,
      sym_text,
    ACTIONS(716), 1,
      anon_sym_LBRACE_LBRACE,
  [4086] = 2,
    ACTIONS(710), 1,
      sym_text,
    ACTIONS(712), 1,
      anon_sym_LBRACE_LBRACE,
  [4093] = 2,
    ACTIONS(511), 1,
      sym_text,
    ACTIONS(513), 1,
      anon_sym_LBRACE_LBRACE,
  [4100] = 2,
    ACTIONS(507), 1,
      sym_text,
    ACTIONS(509), 1,
      anon_sym_LBRACE_LBRACE,
  [4107] = 2,
    ACTIONS(503), 1,
      sym_text,
    ACTIONS(505), 1,
      anon_sym_LBRACE_LBRACE,
  [4114] = 2,
    ACTIONS(499), 1,
      sym_text,
    ACTIONS(501), 1,
      anon_sym_LBRACE_LBRACE,
  [4121] = 2,
    ACTIONS(493), 1,
      sym_text,
    ACTIONS(495), 1,
      anon_sym_LBRACE_LBRACE,
  [4128] = 2,
    ACTIONS(489), 1,
      sym_text,
    ACTIONS(491), 1,
      anon_sym_LBRACE_LBRACE,
  [4135] = 2,
    ACTIONS(674), 1,
      sym_text,
    ACTIONS(676), 1,
      anon_sym_LBRACE_LBRACE,
  [4142] = 2,
    ACTIONS(692), 1,
      sym_text,
    ACTIONS(694), 1,
      anon_sym_LBRACE_LBRACE,
  [4149] = 2,
    ACTIONS(479), 1,
      sym_text,
    ACTIONS(481), 1,
      anon_sym_LBRACE_LBRACE,
  [4156] = 2,
    ACTIONS(473), 1,
      sym_text,
    ACTIONS(475), 1,
      anon_sym_LBRACE_LBRACE,
  [4163] = 2,
    ACTIONS(469), 1,
      sym_text,
    ACTIONS(471), 1,
      anon_sym_LBRACE_LBRACE,
  [4170] = 2,
    ACTIONS(463), 1,
      sym_text,
    ACTIONS(465), 1,
      anon_sym_LBRACE_LBRACE,
  [4177] = 2,
    ACTIONS(455), 1,
      sym_text,
    ACTIONS(457), 1,
      anon_sym_LBRACE_LBRACE,
  [4184] = 1,
    ACTIONS(796), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [4189] = 2,
    ACTIONS(515), 1,
      sym_text,
    ACTIONS(517), 1,
      anon_sym_LBRACE_LBRACE,
  [4196] = 2,
    ACTIONS(483), 1,
      sym_text,
    ACTIONS(485), 1,
      anon_sym_LBRACE_LBRACE,
  [4203] = 2,
    ACTIONS(724), 1,
      sym_text,
    ACTIONS(726), 1,
      anon_sym_LBRACE_LBRACE,
  [4210] = 2,
    ACTIONS(730), 1,
      sym_text,
    ACTIONS(732), 1,
      anon_sym_LBRACE_LBRACE,
  [4217] = 2,
    ACTIONS(744), 1,
      sym_text,
    ACTIONS(746), 1,
      anon_sym_LBRACE_LBRACE,
  [4224] = 2,
    ACTIONS(760), 1,
      sym_text,
    ACTIONS(762), 1,
      anon_sym_LBRACE_LBRACE,
  [4231] = 2,
    ACTIONS(764), 1,
      sym_text,
    ACTIONS(766), 1,
      anon_sym_LBRACE_LBRACE,
  [4238] = 2,
    ACTIONS(770), 1,
      sym_text,
    ACTIONS(772), 1,
      anon_sym_LBRACE_LBRACE,
  [4245] = 2,
    ACTIONS(774), 1,
      sym_text,
    ACTIONS(776), 1,
      anon_sym_LBRACE_LBRACE,
  [4252] = 2,
    ACTIONS(778), 1,
      sym_text,
    ACTIONS(780), 1,
      anon_sym_LBRACE_LBRACE,
  [4259] = 2,
    ACTIONS(782), 1,
      sym_text,
    ACTIONS(784), 1,
      anon_sym_LBRACE_LBRACE,
  [4266] = 2,
    ACTIONS(718), 1,
      sym_text,
    ACTIONS(720), 1,
      anon_sym_LBRACE_LBRACE,
  [4273] = 2,
    ACTIONS(682), 1,
      sym_text,
    ACTIONS(684), 1,
      anon_sym_LBRACE_LBRACE,
  [4280] = 2,
    ACTIONS(660), 1,
      sym_text,
    ACTIONS(662), 1,
      anon_sym_LBRACE_LBRACE,
  [4287] = 2,
    ACTIONS(652), 1,
      sym_text,
    ACTIONS(654), 1,
      anon_sym_LBRACE_LBRACE,
  [4294] = 2,
    ACTIONS(640), 1,
      sym_text,
    ACTIONS(642), 1,
      anon_sym_LBRACE_LBRACE,
  [4301] = 2,
    ACTIONS(616), 1,
      sym_text,
    ACTIONS(618), 1,
      anon_sym_LBRACE_LBRACE,
  [4308] = 2,
    ACTIONS(688), 1,
      sym_text,
    ACTIONS(690), 1,
      anon_sym_LBRACE_LBRACE,
  [4315] = 1,
    ACTIONS(798), 1,
      anon_sym_RBRACE_RBRACE,
  [4319] = 1,
    ACTIONS(11), 1,
      anon_sym_elseif,
  [4323] = 1,
    ACTIONS(800), 1,
      ts_builtin_sym_end,
  [4327] = 1,
    ACTIONS(802), 1,
      anon_sym_RBRACE_RBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(60)] = 0,
  [SMALL_STATE(61)] = 55,
  [SMALL_STATE(62)] = 110,
  [SMALL_STATE(63)] = 165,
  [SMALL_STATE(64)] = 220,
  [SMALL_STATE(65)] = 266,
  [SMALL_STATE(66)] = 312,
  [SMALL_STATE(67)] = 358,
  [SMALL_STATE(68)] = 404,
  [SMALL_STATE(69)] = 450,
  [SMALL_STATE(70)] = 496,
  [SMALL_STATE(71)] = 542,
  [SMALL_STATE(72)] = 573,
  [SMALL_STATE(73)] = 613,
  [SMALL_STATE(74)] = 641,
  [SMALL_STATE(75)] = 681,
  [SMALL_STATE(76)] = 711,
  [SMALL_STATE(77)] = 748,
  [SMALL_STATE(78)] = 777,
  [SMALL_STATE(79)] = 814,
  [SMALL_STATE(80)] = 841,
  [SMALL_STATE(81)] = 869,
  [SMALL_STATE(82)] = 895,
  [SMALL_STATE(83)] = 928,
  [SMALL_STATE(84)] = 953,
  [SMALL_STATE(85)] = 979,
  [SMALL_STATE(86)] = 1005,
  [SMALL_STATE(87)] = 1031,
  [SMALL_STATE(88)] = 1051,
  [SMALL_STATE(89)] = 1077,
  [SMALL_STATE(90)] = 1097,
  [SMALL_STATE(91)] = 1123,
  [SMALL_STATE(92)] = 1149,
  [SMALL_STATE(93)] = 1172,
  [SMALL_STATE(94)] = 1195,
  [SMALL_STATE(95)] = 1218,
  [SMALL_STATE(96)] = 1241,
  [SMALL_STATE(97)] = 1264,
  [SMALL_STATE(98)] = 1287,
  [SMALL_STATE(99)] = 1310,
  [SMALL_STATE(100)] = 1333,
  [SMALL_STATE(101)] = 1356,
  [SMALL_STATE(102)] = 1379,
  [SMALL_STATE(103)] = 1402,
  [SMALL_STATE(104)] = 1425,
  [SMALL_STATE(105)] = 1448,
  [SMALL_STATE(106)] = 1471,
  [SMALL_STATE(107)] = 1494,
  [SMALL_STATE(108)] = 1517,
  [SMALL_STATE(109)] = 1540,
  [SMALL_STATE(110)] = 1563,
  [SMALL_STATE(111)] = 1586,
  [SMALL_STATE(112)] = 1609,
  [SMALL_STATE(113)] = 1632,
  [SMALL_STATE(114)] = 1655,
  [SMALL_STATE(115)] = 1678,
  [SMALL_STATE(116)] = 1701,
  [SMALL_STATE(117)] = 1724,
  [SMALL_STATE(118)] = 1747,
  [SMALL_STATE(119)] = 1770,
  [SMALL_STATE(120)] = 1793,
  [SMALL_STATE(121)] = 1816,
  [SMALL_STATE(122)] = 1839,
  [SMALL_STATE(123)] = 1862,
  [SMALL_STATE(124)] = 1885,
  [SMALL_STATE(125)] = 1908,
  [SMALL_STATE(126)] = 1931,
  [SMALL_STATE(127)] = 1954,
  [SMALL_STATE(128)] = 1977,
  [SMALL_STATE(129)] = 2000,
  [SMALL_STATE(130)] = 2023,
  [SMALL_STATE(131)] = 2046,
  [SMALL_STATE(132)] = 2069,
  [SMALL_STATE(133)] = 2092,
  [SMALL_STATE(134)] = 2115,
  [SMALL_STATE(135)] = 2138,
  [SMALL_STATE(136)] = 2161,
  [SMALL_STATE(137)] = 2184,
  [SMALL_STATE(138)] = 2207,
  [SMALL_STATE(139)] = 2230,
  [SMALL_STATE(140)] = 2253,
  [SMALL_STATE(141)] = 2276,
  [SMALL_STATE(142)] = 2299,
  [SMALL_STATE(143)] = 2322,
  [SMALL_STATE(144)] = 2345,
  [SMALL_STATE(145)] = 2368,
  [SMALL_STATE(146)] = 2391,
  [SMALL_STATE(147)] = 2414,
  [SMALL_STATE(148)] = 2432,
  [SMALL_STATE(149)] = 2450,
  [SMALL_STATE(150)] = 2468,
  [SMALL_STATE(151)] = 2482,
  [SMALL_STATE(152)] = 2494,
  [SMALL_STATE(153)] = 2506,
  [SMALL_STATE(154)] = 2517,
  [SMALL_STATE(155)] = 2526,
  [SMALL_STATE(156)] = 2537,
  [SMALL_STATE(157)] = 2548,
  [SMALL_STATE(158)] = 2557,
  [SMALL_STATE(159)] = 2568,
  [SMALL_STATE(160)] = 2579,
  [SMALL_STATE(161)] = 2590,
  [SMALL_STATE(162)] = 2601,
  [SMALL_STATE(163)] = 2612,
  [SMALL_STATE(164)] = 2623,
  [SMALL_STATE(165)] = 2634,
  [SMALL_STATE(166)] = 2643,
  [SMALL_STATE(167)] = 2654,
  [SMALL_STATE(168)] = 2665,
  [SMALL_STATE(169)] = 2674,
  [SMALL_STATE(170)] = 2685,
  [SMALL_STATE(171)] = 2694,
  [SMALL_STATE(172)] = 2703,
  [SMALL_STATE(173)] = 2714,
  [SMALL_STATE(174)] = 2723,
  [SMALL_STATE(175)] = 2732,
  [SMALL_STATE(176)] = 2742,
  [SMALL_STATE(177)] = 2750,
  [SMALL_STATE(178)] = 2760,
  [SMALL_STATE(179)] = 2770,
  [SMALL_STATE(180)] = 2778,
  [SMALL_STATE(181)] = 2786,
  [SMALL_STATE(182)] = 2796,
  [SMALL_STATE(183)] = 2806,
  [SMALL_STATE(184)] = 2814,
  [SMALL_STATE(185)] = 2824,
  [SMALL_STATE(186)] = 2832,
  [SMALL_STATE(187)] = 2840,
  [SMALL_STATE(188)] = 2850,
  [SMALL_STATE(189)] = 2858,
  [SMALL_STATE(190)] = 2866,
  [SMALL_STATE(191)] = 2876,
  [SMALL_STATE(192)] = 2884,
  [SMALL_STATE(193)] = 2892,
  [SMALL_STATE(194)] = 2902,
  [SMALL_STATE(195)] = 2910,
  [SMALL_STATE(196)] = 2918,
  [SMALL_STATE(197)] = 2926,
  [SMALL_STATE(198)] = 2934,
  [SMALL_STATE(199)] = 2942,
  [SMALL_STATE(200)] = 2952,
  [SMALL_STATE(201)] = 2962,
  [SMALL_STATE(202)] = 2972,
  [SMALL_STATE(203)] = 2982,
  [SMALL_STATE(204)] = 2992,
  [SMALL_STATE(205)] = 3002,
  [SMALL_STATE(206)] = 3012,
  [SMALL_STATE(207)] = 3022,
  [SMALL_STATE(208)] = 3032,
  [SMALL_STATE(209)] = 3042,
  [SMALL_STATE(210)] = 3052,
  [SMALL_STATE(211)] = 3062,
  [SMALL_STATE(212)] = 3072,
  [SMALL_STATE(213)] = 3082,
  [SMALL_STATE(214)] = 3092,
  [SMALL_STATE(215)] = 3102,
  [SMALL_STATE(216)] = 3112,
  [SMALL_STATE(217)] = 3122,
  [SMALL_STATE(218)] = 3132,
  [SMALL_STATE(219)] = 3142,
  [SMALL_STATE(220)] = 3152,
  [SMALL_STATE(221)] = 3162,
  [SMALL_STATE(222)] = 3172,
  [SMALL_STATE(223)] = 3182,
  [SMALL_STATE(224)] = 3192,
  [SMALL_STATE(225)] = 3202,
  [SMALL_STATE(226)] = 3212,
  [SMALL_STATE(227)] = 3222,
  [SMALL_STATE(228)] = 3232,
  [SMALL_STATE(229)] = 3242,
  [SMALL_STATE(230)] = 3252,
  [SMALL_STATE(231)] = 3262,
  [SMALL_STATE(232)] = 3272,
  [SMALL_STATE(233)] = 3282,
  [SMALL_STATE(234)] = 3292,
  [SMALL_STATE(235)] = 3302,
  [SMALL_STATE(236)] = 3312,
  [SMALL_STATE(237)] = 3322,
  [SMALL_STATE(238)] = 3332,
  [SMALL_STATE(239)] = 3342,
  [SMALL_STATE(240)] = 3352,
  [SMALL_STATE(241)] = 3362,
  [SMALL_STATE(242)] = 3372,
  [SMALL_STATE(243)] = 3382,
  [SMALL_STATE(244)] = 3392,
  [SMALL_STATE(245)] = 3402,
  [SMALL_STATE(246)] = 3412,
  [SMALL_STATE(247)] = 3420,
  [SMALL_STATE(248)] = 3430,
  [SMALL_STATE(249)] = 3440,
  [SMALL_STATE(250)] = 3450,
  [SMALL_STATE(251)] = 3460,
  [SMALL_STATE(252)] = 3470,
  [SMALL_STATE(253)] = 3480,
  [SMALL_STATE(254)] = 3490,
  [SMALL_STATE(255)] = 3500,
  [SMALL_STATE(256)] = 3510,
  [SMALL_STATE(257)] = 3518,
  [SMALL_STATE(258)] = 3528,
  [SMALL_STATE(259)] = 3538,
  [SMALL_STATE(260)] = 3548,
  [SMALL_STATE(261)] = 3558,
  [SMALL_STATE(262)] = 3566,
  [SMALL_STATE(263)] = 3576,
  [SMALL_STATE(264)] = 3586,
  [SMALL_STATE(265)] = 3594,
  [SMALL_STATE(266)] = 3604,
  [SMALL_STATE(267)] = 3614,
  [SMALL_STATE(268)] = 3624,
  [SMALL_STATE(269)] = 3634,
  [SMALL_STATE(270)] = 3644,
  [SMALL_STATE(271)] = 3654,
  [SMALL_STATE(272)] = 3664,
  [SMALL_STATE(273)] = 3672,
  [SMALL_STATE(274)] = 3682,
  [SMALL_STATE(275)] = 3692,
  [SMALL_STATE(276)] = 3700,
  [SMALL_STATE(277)] = 3710,
  [SMALL_STATE(278)] = 3718,
  [SMALL_STATE(279)] = 3726,
  [SMALL_STATE(280)] = 3736,
  [SMALL_STATE(281)] = 3746,
  [SMALL_STATE(282)] = 3756,
  [SMALL_STATE(283)] = 3766,
  [SMALL_STATE(284)] = 3776,
  [SMALL_STATE(285)] = 3786,
  [SMALL_STATE(286)] = 3794,
  [SMALL_STATE(287)] = 3802,
  [SMALL_STATE(288)] = 3810,
  [SMALL_STATE(289)] = 3820,
  [SMALL_STATE(290)] = 3828,
  [SMALL_STATE(291)] = 3838,
  [SMALL_STATE(292)] = 3846,
  [SMALL_STATE(293)] = 3856,
  [SMALL_STATE(294)] = 3862,
  [SMALL_STATE(295)] = 3872,
  [SMALL_STATE(296)] = 3882,
  [SMALL_STATE(297)] = 3892,
  [SMALL_STATE(298)] = 3902,
  [SMALL_STATE(299)] = 3912,
  [SMALL_STATE(300)] = 3920,
  [SMALL_STATE(301)] = 3928,
  [SMALL_STATE(302)] = 3938,
  [SMALL_STATE(303)] = 3948,
  [SMALL_STATE(304)] = 3958,
  [SMALL_STATE(305)] = 3968,
  [SMALL_STATE(306)] = 3976,
  [SMALL_STATE(307)] = 3984,
  [SMALL_STATE(308)] = 3994,
  [SMALL_STATE(309)] = 4002,
  [SMALL_STATE(310)] = 4010,
  [SMALL_STATE(311)] = 4018,
  [SMALL_STATE(312)] = 4026,
  [SMALL_STATE(313)] = 4036,
  [SMALL_STATE(314)] = 4046,
  [SMALL_STATE(315)] = 4053,
  [SMALL_STATE(316)] = 4060,
  [SMALL_STATE(317)] = 4067,
  [SMALL_STATE(318)] = 4072,
  [SMALL_STATE(319)] = 4079,
  [SMALL_STATE(320)] = 4086,
  [SMALL_STATE(321)] = 4093,
  [SMALL_STATE(322)] = 4100,
  [SMALL_STATE(323)] = 4107,
  [SMALL_STATE(324)] = 4114,
  [SMALL_STATE(325)] = 4121,
  [SMALL_STATE(326)] = 4128,
  [SMALL_STATE(327)] = 4135,
  [SMALL_STATE(328)] = 4142,
  [SMALL_STATE(329)] = 4149,
  [SMALL_STATE(330)] = 4156,
  [SMALL_STATE(331)] = 4163,
  [SMALL_STATE(332)] = 4170,
  [SMALL_STATE(333)] = 4177,
  [SMALL_STATE(334)] = 4184,
  [SMALL_STATE(335)] = 4189,
  [SMALL_STATE(336)] = 4196,
  [SMALL_STATE(337)] = 4203,
  [SMALL_STATE(338)] = 4210,
  [SMALL_STATE(339)] = 4217,
  [SMALL_STATE(340)] = 4224,
  [SMALL_STATE(341)] = 4231,
  [SMALL_STATE(342)] = 4238,
  [SMALL_STATE(343)] = 4245,
  [SMALL_STATE(344)] = 4252,
  [SMALL_STATE(345)] = 4259,
  [SMALL_STATE(346)] = 4266,
  [SMALL_STATE(347)] = 4273,
  [SMALL_STATE(348)] = 4280,
  [SMALL_STATE(349)] = 4287,
  [SMALL_STATE(350)] = 4294,
  [SMALL_STATE(351)] = 4301,
  [SMALL_STATE(352)] = 4308,
  [SMALL_STATE(353)] = 4315,
  [SMALL_STATE(354)] = 4319,
  [SMALL_STATE(355)] = 4323,
  [SMALL_STATE(356)] = 4327,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(284),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(206),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(209),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(304),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [143] = {.entry = {.count = 1, .reusable = false}}, SHIFT(307),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(181),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(163),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(169),
  [183] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [185] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(301),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [221] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 1, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(90),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(80),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 16),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [323] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(114),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 10), SHIFT_REPEAT(80),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field, 2, .production_id = 2),
  [361] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 2),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 7),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 6),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 1),
  [377] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot, 1),
  [387] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(82),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(164),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [431] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(210),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 13),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 13),
  [447] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [449] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 19),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 19),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 12),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 12),
  [459] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 13),
  [465] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 13),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 20),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 20),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 14),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 14),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [479] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 19),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 19),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 12),
  [485] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 12),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 21),
  [491] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 21),
  [493] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 17),
  [495] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 17),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 22),
  [501] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 22),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 23),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 23),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 21),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 21),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 24),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 24),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_delimiter, 2),
  [517] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_delimiter, 2),
  [519] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [523] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 9), SHIFT_REPEAT(71),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 10),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 10),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [630] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 11),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 11),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [654] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 5),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 5),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 11),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 11),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 10),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 10),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 8),
  [690] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 8),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [694] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 5),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [702] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [716] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 12),
  [720] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 12),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 10, .production_id = 10),
  [726] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 10, .production_id = 10),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [730] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 18),
  [732] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 18),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [744] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 17),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 17),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline, 1),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 12),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 12),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 15),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 15),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 8),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 8),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 15),
  [776] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 15),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 14),
  [780] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 14),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 10),
  [784] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 10),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_call, 2, .production_id = 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_call, 2, .production_id = 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [800] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
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
