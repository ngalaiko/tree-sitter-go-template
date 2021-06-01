#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 331
#define LARGE_STATE_COUNT 58
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 10
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 22

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
  sym_pipeline_stub = 11,
  anon_sym_DOT = 12,
  anon_sym_DOLLAR = 13,
  sym_identifier = 14,
  sym_int_literal = 15,
  sym_float_literal = 16,
  sym_imaginary_literal = 17,
  sym_rune_literal = 18,
  sym_true = 19,
  sym_false = 20,
  sym_nil = 21,
  sym_raw_string_literal = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_interpreted_string_literal_token1 = 24,
  sym_escape_sequence = 25,
  sym_comment = 26,
  anon_sym_LBRACE_LBRACE = 27,
  anon_sym_DASH = 28,
  anon_sym_DASH2 = 29,
  anon_sym_RBRACE_RBRACE = 30,
  sym_template = 31,
  sym__block = 32,
  sym__action = 33,
  sym__comment_action = 34,
  sym__pipeline_action = 35,
  sym_if_action = 36,
  sym_range_action = 37,
  sym_template_action = 38,
  sym_define_action = 39,
  sym_block_action = 40,
  sym_with_action = 41,
  sym__pipeline = 42,
  sym__expression = 43,
  sym_selector_expression = 44,
  sym__field_identifier = 45,
  sym_field = 46,
  sym_variable = 47,
  sym__literal = 48,
  sym__boolean_literal = 49,
  sym_dot = 50,
  sym__string_literal = 51,
  sym_interpreted_string_literal = 52,
  sym__left_delimiter = 53,
  sym__right_delimiter = 54,
  aux_sym_template_repeat1 = 55,
  aux_sym_if_action_repeat1 = 56,
  aux_sym_interpreted_string_literal_repeat1 = 57,
  alias_sym_field_identifier = 58,
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
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_field = 6,
  field_name = 7,
  field_operand = 8,
  field_option = 9,
  field_range = 10,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_field] = "field",
  [field_name] = "name",
  [field_operand] = "operand",
  [field_option] = "option",
  [field_range] = "range",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 2},
  [6] = {.index = 6, .length = 4},
  [7] = {.index = 10, .length = 1},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 3},
  [11] = {.index = 17, .length = 2},
  [12] = {.index = 19, .length = 2},
  [13] = {.index = 21, .length = 2},
  [14] = {.index = 23, .length = 4},
  [15] = {.index = 27, .length = 3},
  [16] = {.index = 30, .length = 2},
  [17] = {.index = 32, .length = 2},
  [18] = {.index = 34, .length = 3},
  [19] = {.index = 37, .length = 4},
  [20] = {.index = 41, .length = 3},
  [21] = {.index = 44, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_field, 2},
    {field_operand, 0},
  [4] =
    {field_argument, 3},
    {field_name, 2},
  [6] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [10] =
    {field_condition, 2},
  [11] =
    {field_range, 2},
  [12] =
    {field_condition, 2},
    {field_consequence, 4},
  [14] =
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [17] =
    {field_body, 4},
    {field_range, 2},
  [19] =
    {field_body, 4},
    {field_name, 2},
  [21] =
    {field_condition, 2},
    {field_option, 4},
  [23] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [27] =
    {field_argument, 3},
    {field_body, 5},
    {field_name, 2},
  [30] =
    {field_alternative, 7},
    {field_condition, 2},
  [32] =
    {field_alternative, 7},
    {field_range, 2},
  [34] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [37] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_condition, 4, .inherited = true},
    {field_option, 4, .inherited = true},
  [41] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [44] =
    {field_alternative, 9},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [3] = {
    [0] = alias_sym_field_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
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

static inline bool sym_identifier_character_set_2(int32_t c) {
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
      if (eof) ADVANCE(104);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(102)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(146);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '-') ADVANCE(147);
      if (lookahead == '.') ADVANCE(118);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(121);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '.') ADVANCE(118);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(121);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(6)
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(132);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(87);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 16:
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'u') ADVANCE(92);
      if (lookahead == 'x') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0) ADVANCE(140);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(10);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 20:
      if (lookahead == '`') ADVANCE(136);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 25:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(110);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(134);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(112);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(109);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'f') ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'g') ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'h') ADVANCE(116);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'k') ADVANCE(115);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(135);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(64);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(36);
      END_STATE();
    case 62:
      if (lookahead == 'p') ADVANCE(52);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 68:
      if (lookahead == 'u') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(145);
      END_STATE();
    case 70:
      if (lookahead == '}') ADVANCE(148);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 72:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 73:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 74:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 75:
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(10);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      END_STATE();
    case 79:
      if (sym_rune_literal_character_set_1(lookahead)) ADVANCE(10);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'u') ADVANCE(93);
      if (lookahead == 'x') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(78);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 98:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(137);
      if (lookahead == '$') ADVANCE(120);
      if (lookahead == '\'') ADVANCE(17);
      if (lookahead == '.') ADVANCE(119);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(122);
      if (lookahead == '`') ADVANCE(20);
      if (lookahead == 'b') ADVANCE(49);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead == 'e') ADVANCE(50);
      if (lookahead == 'f') ADVANCE(22);
      if (lookahead == 'i') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == 'p') ADVANCE(42);
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == 'w') ADVANCE(43);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '}') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(102)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '{') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_pipeline_stub);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(15);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '8' ||
          lookahead == '9') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(130);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(71);
      if (lookahead == '_') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(74);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '_') ADVANCE(77);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == '_') ADVANCE(83);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == '_') ADVANCE(81);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_float_literal);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(71);
      if (lookahead == 'i') ADVANCE(131);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_imaginary_literal);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_rune_literal);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_nil);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 103},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 103},
  [76] = {.lex_state = 103},
  [77] = {.lex_state = 103},
  [78] = {.lex_state = 103},
  [79] = {.lex_state = 103},
  [80] = {.lex_state = 103},
  [81] = {.lex_state = 103},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 103},
  [84] = {.lex_state = 103},
  [85] = {.lex_state = 103},
  [86] = {.lex_state = 103},
  [87] = {.lex_state = 103},
  [88] = {.lex_state = 103},
  [89] = {.lex_state = 103},
  [90] = {.lex_state = 103},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 103},
  [93] = {.lex_state = 103},
  [94] = {.lex_state = 103},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 103},
  [99] = {.lex_state = 103},
  [100] = {.lex_state = 103},
  [101] = {.lex_state = 103},
  [102] = {.lex_state = 103},
  [103] = {.lex_state = 103},
  [104] = {.lex_state = 103},
  [105] = {.lex_state = 103},
  [106] = {.lex_state = 103},
  [107] = {.lex_state = 103},
  [108] = {.lex_state = 103},
  [109] = {.lex_state = 103},
  [110] = {.lex_state = 103},
  [111] = {.lex_state = 103},
  [112] = {.lex_state = 103},
  [113] = {.lex_state = 103},
  [114] = {.lex_state = 103},
  [115] = {.lex_state = 103},
  [116] = {.lex_state = 103},
  [117] = {.lex_state = 103},
  [118] = {.lex_state = 103},
  [119] = {.lex_state = 103},
  [120] = {.lex_state = 103},
  [121] = {.lex_state = 103},
  [122] = {.lex_state = 103},
  [123] = {.lex_state = 103},
  [124] = {.lex_state = 103},
  [125] = {.lex_state = 103},
  [126] = {.lex_state = 103},
  [127] = {.lex_state = 103},
  [128] = {.lex_state = 103},
  [129] = {.lex_state = 103},
  [130] = {.lex_state = 103},
  [131] = {.lex_state = 103},
  [132] = {.lex_state = 103},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 103},
  [135] = {.lex_state = 103},
  [136] = {.lex_state = 103},
  [137] = {.lex_state = 103},
  [138] = {.lex_state = 1},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 6},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 103},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 103},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 103},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 103},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 103},
  [163] = {.lex_state = 103},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 103},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 103},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 103},
  [171] = {.lex_state = 103},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 103},
  [174] = {.lex_state = 103},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 103},
  [177] = {.lex_state = 103},
  [178] = {.lex_state = 103},
  [179] = {.lex_state = 103},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 103},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
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
  [228] = {.lex_state = 103},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 103},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 103},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 103},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 103},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 103},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 103},
  [254] = {.lex_state = 103},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 103},
  [258] = {.lex_state = 103},
  [259] = {.lex_state = 103},
  [260] = {.lex_state = 103},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 103},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 103},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 103},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 103},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 103},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 103},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 103},
  [292] = {.lex_state = 103},
  [293] = {.lex_state = 103},
  [294] = {.lex_state = 103},
  [295] = {.lex_state = 103},
  [296] = {.lex_state = 103},
  [297] = {.lex_state = 103},
  [298] = {.lex_state = 103},
  [299] = {.lex_state = 103},
  [300] = {.lex_state = 103},
  [301] = {.lex_state = 103},
  [302] = {.lex_state = 103},
  [303] = {.lex_state = 103},
  [304] = {.lex_state = 103},
  [305] = {.lex_state = 6},
  [306] = {.lex_state = 103},
  [307] = {.lex_state = 103},
  [308] = {.lex_state = 103},
  [309] = {.lex_state = 103},
  [310] = {.lex_state = 103},
  [311] = {.lex_state = 103},
  [312] = {.lex_state = 103},
  [313] = {.lex_state = 103},
  [314] = {.lex_state = 103},
  [315] = {.lex_state = 103},
  [316] = {.lex_state = 103},
  [317] = {.lex_state = 103},
  [318] = {.lex_state = 103},
  [319] = {.lex_state = 103},
  [320] = {.lex_state = 103},
  [321] = {.lex_state = 103},
  [322] = {.lex_state = 103},
  [323] = {.lex_state = 103},
  [324] = {.lex_state = 103},
  [325] = {.lex_state = 103},
  [326] = {.lex_state = 103},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
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
    [sym_template] = STATE(330),
    [sym__block] = STATE(75),
    [sym__action] = STATE(75),
    [sym__comment_action] = STATE(75),
    [sym__pipeline_action] = STATE(75),
    [sym_if_action] = STATE(75),
    [sym_range_action] = STATE(75),
    [sym_template_action] = STATE(75),
    [sym_define_action] = STATE(75),
    [sym_block_action] = STATE(75),
    [sym_with_action] = STATE(75),
    [sym__left_delimiter] = STATE(59),
    [aux_sym_template_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
  [2] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [3] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(41),
    [anon_sym_end] = ACTIONS(43),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [4] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(45),
    [anon_sym_end] = ACTIONS(47),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [5] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_elseif] = ACTIONS(11),
    [anon_sym_else] = ACTIONS(49),
    [anon_sym_end] = ACTIONS(51),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [6] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(53),
    [anon_sym_end] = ACTIONS(55),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [7] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(57),
    [anon_sym_end] = ACTIONS(59),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [8] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(61),
    [anon_sym_end] = ACTIONS(63),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [9] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(65),
    [anon_sym_end] = ACTIONS(67),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [10] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(69),
    [anon_sym_end] = ACTIONS(71),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [11] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(73),
    [anon_sym_end] = ACTIONS(75),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [12] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(77),
    [anon_sym_end] = ACTIONS(79),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [13] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_else] = ACTIONS(81),
    [anon_sym_end] = ACTIONS(83),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [14] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
    [anon_sym_if] = ACTIONS(9),
    [anon_sym_end] = ACTIONS(85),
    [anon_sym_range] = ACTIONS(17),
    [anon_sym_template] = ACTIONS(19),
    [anon_sym_define] = ACTIONS(21),
    [anon_sym_block] = ACTIONS(23),
    [anon_sym_with] = ACTIONS(25),
    [sym_pipeline_stub] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(29),
    [anon_sym_DOLLAR] = ACTIONS(31),
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [15] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [16] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [17] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [18] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [19] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [20] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [21] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [22] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [23] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [24] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [25] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [26] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [27] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [28] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [29] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [30] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [31] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [32] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [33] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [34] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [35] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [36] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [37] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [38] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [39] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [40] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [41] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [42] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [43] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [44] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [45] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [46] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [47] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [48] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [49] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [50] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [51] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [52] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [53] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [54] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [55] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [56] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
  [57] = {
    [sym__pipeline] = STATE(247),
    [sym__expression] = STATE(183),
    [sym_selector_expression] = STATE(183),
    [sym_field] = STATE(183),
    [sym_variable] = STATE(183),
    [sym__literal] = STATE(183),
    [sym__boolean_literal] = STATE(183),
    [sym_dot] = STATE(183),
    [sym__string_literal] = STATE(183),
    [sym_interpreted_string_literal] = STATE(183),
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
    [sym_int_literal] = ACTIONS(33),
    [sym_float_literal] = ACTIONS(33),
    [sym_imaginary_literal] = ACTIONS(35),
    [sym_rune_literal] = ACTIONS(35),
    [sym_true] = ACTIONS(35),
    [sym_false] = ACTIONS(35),
    [sym_nil] = ACTIONS(35),
    [sym_raw_string_literal] = ACTIONS(35),
    [anon_sym_DQUOTE] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
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
      sym_pipeline_stub,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      sym_comment,
    STATE(247), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [60] = 15,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_if,
    ACTIONS(175), 1,
      anon_sym_range,
    ACTIONS(177), 1,
      anon_sym_template,
    ACTIONS(179), 1,
      anon_sym_define,
    ACTIONS(181), 1,
      anon_sym_block,
    ACTIONS(183), 1,
      anon_sym_with,
    ACTIONS(185), 1,
      sym_pipeline_stub,
    ACTIONS(187), 1,
      sym_comment,
    STATE(181), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [120] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(189), 1,
      sym_pipeline_stub,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(193), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(182), 1,
      sym__pipeline,
    STATE(295), 1,
      sym__right_delimiter,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [168] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(195), 1,
      sym_pipeline_stub,
    ACTIONS(197), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(117), 1,
      sym__right_delimiter,
    STATE(236), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [216] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 1,
      sym_pipeline_stub,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(203), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(233), 1,
      sym__pipeline,
    STATE(234), 1,
      sym__right_delimiter,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [264] = 11,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(205), 1,
      sym_pipeline_stub,
    ACTIONS(207), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(87), 1,
      sym__right_delimiter,
    STATE(208), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [312] = 3,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(211), 4,
      anon_sym_else,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(209), 18,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
  [342] = 3,
    ACTIONS(215), 1,
      anon_sym_DASH,
    ACTIONS(211), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(209), 18,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
  [371] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(217), 1,
      sym_pipeline_stub,
    STATE(184), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [410] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(219), 1,
      sym_pipeline_stub,
    STATE(282), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [449] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(221), 1,
      sym_pipeline_stub,
    STATE(185), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [488] = 2,
    ACTIONS(225), 4,
      anon_sym_else,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(223), 18,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
  [515] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(227), 1,
      sym_pipeline_stub,
    STATE(210), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [554] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(229), 1,
      sym_pipeline_stub,
    STATE(221), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [593] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(231), 1,
      sym_pipeline_stub,
    STATE(217), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [632] = 8,
    ACTIONS(29), 1,
      anon_sym_DOT,
    ACTIONS(31), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(233), 1,
      sym_pipeline_stub,
    STATE(215), 1,
      sym__pipeline,
    ACTIONS(33), 2,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(35), 6,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
    STATE(183), 9,
      sym__expression,
      sym_selector_expression,
      sym_field,
      sym_variable,
      sym__literal,
      sym__boolean_literal,
      sym_dot,
      sym__string_literal,
      sym_interpreted_string_literal,
  [671] = 2,
    ACTIONS(225), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(223), 18,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      anon_sym_define,
      anon_sym_block,
      anon_sym_with,
      sym_pipeline_stub,
      anon_sym_DOLLAR,
      sym_imaginary_literal,
      sym_rune_literal,
      sym_true,
      sym_false,
      sym_nil,
      sym_raw_string_literal,
      anon_sym_DQUOTE,
      sym_comment,
  [697] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      sym_text,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(76), 11,
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
  [723] = 5,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(241), 1,
      sym_text,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(59), 1,
      sym__left_delimiter,
    STATE(76), 11,
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
  [749] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(3), 1,
      sym__left_delimiter,
    STATE(250), 1,
      aux_sym_if_action_repeat1,
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
  [775] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(5), 1,
      sym__left_delimiter,
    STATE(249), 1,
      aux_sym_if_action_repeat1,
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
  [801] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 1,
      sym_text,
    STATE(2), 1,
      sym__left_delimiter,
    STATE(287), 1,
      aux_sym_if_action_repeat1,
    STATE(78), 11,
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
  [827] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(251), 1,
      sym_text,
    STATE(4), 1,
      sym__left_delimiter,
    STATE(242), 1,
      aux_sym_if_action_repeat1,
    STATE(77), 11,
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
  [853] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(15), 1,
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
  [876] = 2,
    ACTIONS(255), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(253), 11,
      sym_pipeline_stub,
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
  [895] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(41), 1,
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
  [918] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(38), 1,
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
  [941] = 4,
    ACTIONS(257), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(12), 1,
      sym__left_delimiter,
    STATE(91), 11,
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
  [964] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(261), 1,
      sym_text,
    STATE(36), 1,
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
  [987] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(263), 1,
      sym_text,
    STATE(39), 1,
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
  [1010] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(265), 1,
      sym_text,
    STATE(43), 1,
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
  [1033] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(14), 1,
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
  [1056] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(267), 1,
      sym_text,
    STATE(13), 1,
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
  [1079] = 4,
    ACTIONS(247), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(11), 1,
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
  [1102] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(42), 1,
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
  [1125] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(269), 1,
      sym_text,
    STATE(44), 1,
      sym__left_delimiter,
    STATE(96), 11,
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
  [1148] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(45), 1,
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
  [1171] = 4,
    ACTIONS(247), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(10), 1,
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
  [1194] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(49), 1,
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
  [1217] = 4,
    ACTIONS(247), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(6), 1,
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
  [1240] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(271), 1,
      sym_text,
    STATE(37), 1,
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
  [1263] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
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
  [1286] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(273), 1,
      sym_text,
    STATE(24), 1,
      sym__left_delimiter,
    STATE(89), 11,
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
  [1309] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(25), 1,
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
  [1332] = 4,
    ACTIONS(275), 1,
      sym_text,
    ACTIONS(277), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(58), 1,
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
  [1355] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(280), 1,
      sym_text,
    STATE(52), 1,
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
  [1378] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(34), 1,
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
  [1401] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(282), 1,
      sym_text,
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
  [1424] = 4,
    ACTIONS(247), 1,
      sym_text,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(7), 1,
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
  [1447] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(284), 1,
      sym_text,
    STATE(54), 1,
      sym__left_delimiter,
    STATE(81), 11,
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
  [1470] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(286), 1,
      sym_text,
    STATE(55), 1,
      sym__left_delimiter,
    STATE(125), 11,
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
  [1493] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(288), 1,
      sym_text,
    STATE(32), 1,
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
  [1516] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(57), 1,
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
  [1539] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(290), 1,
      sym_text,
    STATE(50), 1,
      sym__left_delimiter,
    STATE(129), 11,
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
  [1562] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(30), 1,
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
  [1585] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(292), 1,
      sym_text,
    STATE(29), 1,
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
  [1608] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(48), 1,
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
  [1631] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(294), 1,
      sym_text,
    STATE(51), 1,
      sym__left_delimiter,
    STATE(104), 11,
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
  [1654] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(296), 1,
      sym_text,
    STATE(8), 1,
      sym__left_delimiter,
    STATE(97), 11,
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
  [1677] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(298), 1,
      sym_text,
    STATE(56), 1,
      sym__left_delimiter,
    STATE(99), 11,
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
  [1700] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(300), 1,
      sym_text,
    STATE(47), 1,
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
  [1723] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(302), 1,
      sym_text,
    STATE(53), 1,
      sym__left_delimiter,
    STATE(101), 11,
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
  [1746] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(26), 1,
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
  [1769] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(304), 1,
      sym_text,
    STATE(20), 1,
      sym__left_delimiter,
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
  [1792] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(306), 1,
      sym_text,
    STATE(35), 1,
      sym__left_delimiter,
    STATE(136), 11,
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
  [1815] = 4,
    ACTIONS(247), 1,
      sym_text,
    ACTIONS(308), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(58), 1,
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
  [1838] = 4,
    ACTIONS(259), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(310), 1,
      sym_text,
    STATE(9), 1,
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
  [1861] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(31), 1,
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
  [1884] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(312), 1,
      sym_text,
    STATE(28), 1,
      sym__left_delimiter,
    STATE(132), 11,
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
  [1907] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(17), 1,
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
  [1930] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(314), 1,
      sym_text,
    STATE(40), 1,
      sym__left_delimiter,
    STATE(83), 11,
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
  [1953] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(27), 1,
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
  [1976] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(316), 1,
      sym_text,
    STATE(23), 1,
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
  [1999] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(46), 1,
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
  [2022] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(16), 1,
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
  [2045] = 2,
    ACTIONS(320), 3,
      anon_sym_DOT,
      sym_int_literal,
      sym_float_literal,
    ACTIONS(318), 11,
      sym_pipeline_stub,
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
  [2064] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(22), 1,
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
  [2087] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(19), 1,
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
  [2110] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(247), 1,
      sym_text,
    STATE(18), 1,
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
  [2133] = 4,
    ACTIONS(244), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(322), 1,
      sym_text,
    STATE(58), 1,
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
  [2156] = 3,
    ACTIONS(325), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(327), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2167] = 3,
    ACTIONS(329), 1,
      anon_sym_DQUOTE,
    STATE(139), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(331), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2178] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      sym_raw_string_literal,
    STATE(62), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2189] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      sym_raw_string_literal,
    STATE(213), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2200] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_raw_string_literal,
    STATE(63), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2211] = 3,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    STATE(138), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(342), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [2222] = 2,
    ACTIONS(346), 1,
      sym_identifier,
    ACTIONS(344), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2231] = 2,
    ACTIONS(350), 1,
      sym_identifier,
    ACTIONS(348), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2240] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(352), 1,
      sym_raw_string_literal,
    STATE(60), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2251] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      sym_raw_string_literal,
    STATE(61), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2262] = 3,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(356), 1,
      sym_raw_string_literal,
    STATE(211), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [2273] = 2,
    ACTIONS(360), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(358), 2,
      ts_builtin_sym_end,
      sym_text,
  [2281] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(362), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(307), 1,
      sym__right_delimiter,
  [2291] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(364), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(159), 1,
      sym__right_delimiter,
  [2301] = 2,
    ACTIONS(368), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(366), 2,
      ts_builtin_sym_end,
      sym_text,
  [2309] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(370), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(162), 1,
      sym__right_delimiter,
  [2319] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(372), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(163), 1,
      sym__right_delimiter,
  [2329] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(374), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(166), 1,
      sym__right_delimiter,
  [2339] = 2,
    ACTIONS(378), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(376), 2,
      ts_builtin_sym_end,
      sym_text,
  [2347] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(380), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(149), 1,
      sym__right_delimiter,
  [2357] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(382), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(168), 1,
      sym__right_delimiter,
  [2367] = 2,
    ACTIONS(386), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(384), 2,
      ts_builtin_sym_end,
      sym_text,
  [2375] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(388), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(170), 1,
      sym__right_delimiter,
  [2385] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(390), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(171), 1,
      sym__right_delimiter,
  [2395] = 2,
    ACTIONS(394), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(392), 2,
      ts_builtin_sym_end,
      sym_text,
  [2403] = 2,
    ACTIONS(398), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(396), 2,
      ts_builtin_sym_end,
      sym_text,
  [2411] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(400), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(173), 1,
      sym__right_delimiter,
  [2421] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(402), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(174), 1,
      sym__right_delimiter,
  [2431] = 2,
    ACTIONS(406), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(404), 2,
      ts_builtin_sym_end,
      sym_text,
  [2439] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(408), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(176), 1,
      sym__right_delimiter,
  [2449] = 2,
    ACTIONS(412), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(410), 2,
      ts_builtin_sym_end,
      sym_text,
  [2457] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(414), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(177), 1,
      sym__right_delimiter,
  [2467] = 2,
    ACTIONS(418), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(416), 2,
      ts_builtin_sym_end,
      sym_text,
  [2475] = 2,
    ACTIONS(422), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(420), 2,
      ts_builtin_sym_end,
      sym_text,
  [2483] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(424), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(178), 1,
      sym__right_delimiter,
  [2493] = 2,
    ACTIONS(428), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(426), 2,
      ts_builtin_sym_end,
      sym_text,
  [2501] = 2,
    ACTIONS(432), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(430), 2,
      ts_builtin_sym_end,
      sym_text,
  [2509] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(434), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(179), 1,
      sym__right_delimiter,
  [2519] = 2,
    ACTIONS(438), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(436), 2,
      ts_builtin_sym_end,
      sym_text,
  [2527] = 2,
    ACTIONS(442), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(440), 2,
      ts_builtin_sym_end,
      sym_text,
  [2535] = 2,
    ACTIONS(446), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(444), 2,
      ts_builtin_sym_end,
      sym_text,
  [2543] = 2,
    ACTIONS(450), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(448), 2,
      ts_builtin_sym_end,
      sym_text,
  [2551] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(452), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(228), 1,
      sym__right_delimiter,
  [2561] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(454), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(231), 1,
      sym__right_delimiter,
  [2571] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(456), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(310), 1,
      sym__right_delimiter,
  [2581] = 2,
    ACTIONS(458), 1,
      anon_sym_DOT,
    ACTIONS(460), 2,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2589] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(462), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(80), 1,
      sym__right_delimiter,
  [2599] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(464), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(124), 1,
      sym__right_delimiter,
  [2609] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(466), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(326), 1,
      sym__right_delimiter,
  [2619] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(468), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(291), 1,
      sym__right_delimiter,
  [2629] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(470), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(325), 1,
      sym__right_delimiter,
  [2639] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(472), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(324), 1,
      sym__right_delimiter,
  [2649] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(474), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(323), 1,
      sym__right_delimiter,
  [2659] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(476), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(130), 1,
      sym__right_delimiter,
  [2669] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(478), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(322), 1,
      sym__right_delimiter,
  [2679] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(480), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(321), 1,
      sym__right_delimiter,
  [2689] = 2,
    ACTIONS(484), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(482), 2,
      ts_builtin_sym_end,
      sym_text,
  [2697] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(486), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(320), 1,
      sym__right_delimiter,
  [2707] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(488), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(126), 1,
      sym__right_delimiter,
  [2717] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(490), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(319), 1,
      sym__right_delimiter,
  [2727] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(492), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(318), 1,
      sym__right_delimiter,
  [2737] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(494), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(122), 1,
      sym__right_delimiter,
  [2747] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(496), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(317), 1,
      sym__right_delimiter,
  [2757] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(498), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(118), 1,
      sym__right_delimiter,
  [2767] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(500), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(316), 1,
      sym__right_delimiter,
  [2777] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(502), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(111), 1,
      sym__right_delimiter,
  [2787] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(504), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(315), 1,
      sym__right_delimiter,
  [2797] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(506), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(108), 1,
      sym__right_delimiter,
  [2807] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(508), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(107), 1,
      sym__right_delimiter,
  [2817] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(510), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(103), 1,
      sym__right_delimiter,
  [2827] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(512), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(93), 1,
      sym__right_delimiter,
  [2837] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(514), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(314), 1,
      sym__right_delimiter,
  [2847] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(516), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(90), 1,
      sym__right_delimiter,
  [2857] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(518), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(119), 1,
      sym__right_delimiter,
  [2867] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(520), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(313), 1,
      sym__right_delimiter,
  [2877] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(522), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(86), 1,
      sym__right_delimiter,
  [2887] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(524), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(312), 1,
      sym__right_delimiter,
  [2897] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(526), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(85), 1,
      sym__right_delimiter,
  [2907] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(528), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(311), 1,
      sym__right_delimiter,
  [2917] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(530), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(79), 1,
      sym__right_delimiter,
  [2927] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(532), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(292), 1,
      sym__right_delimiter,
  [2937] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(534), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(309), 1,
      sym__right_delimiter,
  [2947] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(536), 1,
      anon_sym_else,
    ACTIONS(538), 1,
      anon_sym_end,
  [2957] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(540), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(116), 1,
      sym__right_delimiter,
  [2967] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(542), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(306), 1,
      sym__right_delimiter,
  [2977] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(544), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(304), 1,
      sym__right_delimiter,
  [2987] = 1,
    ACTIONS(546), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [2993] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(548), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(303), 1,
      sym__right_delimiter,
  [3003] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(550), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(302), 1,
      sym__right_delimiter,
  [3013] = 1,
    ACTIONS(552), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [3019] = 2,
    ACTIONS(556), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(554), 2,
      ts_builtin_sym_end,
      sym_text,
  [3027] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(558), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(301), 1,
      sym__right_delimiter,
  [3037] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(560), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(300), 1,
      sym__right_delimiter,
  [3047] = 2,
    ACTIONS(564), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(562), 2,
      ts_builtin_sym_end,
      sym_text,
  [3055] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(566), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(299), 1,
      sym__right_delimiter,
  [3065] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(568), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(243), 1,
      sym__right_delimiter,
  [3075] = 2,
    ACTIONS(572), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(570), 2,
      ts_builtin_sym_end,
      sym_text,
  [3083] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(574), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(298), 1,
      sym__right_delimiter,
  [3093] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(576), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(100), 1,
      sym__right_delimiter,
  [3103] = 2,
    ACTIONS(580), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(578), 2,
      ts_builtin_sym_end,
      sym_text,
  [3111] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(582), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(297), 1,
      sym__right_delimiter,
  [3121] = 1,
    ACTIONS(584), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [3127] = 1,
    ACTIONS(586), 3,
      anon_sym_DOT,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [3133] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(588), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(296), 1,
      sym__right_delimiter,
  [3143] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(220), 1,
      sym__left_delimiter,
    STATE(290), 1,
      aux_sym_if_action_repeat1,
  [3153] = 2,
    ACTIONS(594), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(592), 2,
      ts_builtin_sym_end,
      sym_text,
  [3161] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(596), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(115), 1,
      sym__right_delimiter,
  [3171] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(598), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(281), 1,
      sym__right_delimiter,
  [3181] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(600), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(293), 1,
      sym__right_delimiter,
  [3191] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(602), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(294), 1,
      sym__right_delimiter,
  [3201] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(604), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(156), 1,
      sym__right_delimiter,
  [3211] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(262), 1,
      sym__left_delimiter,
    STATE(290), 1,
      aux_sym_if_action_repeat1,
  [3221] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(278), 1,
      sym__left_delimiter,
    STATE(290), 1,
      aux_sym_if_action_repeat1,
  [3231] = 2,
    ACTIONS(608), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(606), 2,
      ts_builtin_sym_end,
      sym_text,
  [3239] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(610), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(152), 1,
      sym__right_delimiter,
  [3249] = 2,
    ACTIONS(614), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(612), 2,
      ts_builtin_sym_end,
      sym_text,
  [3257] = 2,
    ACTIONS(618), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(616), 2,
      ts_builtin_sym_end,
      sym_text,
  [3265] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(620), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(194), 1,
      sym__right_delimiter,
  [3275] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(622), 1,
      anon_sym_else,
    ACTIONS(624), 1,
      anon_sym_end,
  [3285] = 2,
    ACTIONS(628), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(626), 2,
      ts_builtin_sym_end,
      sym_text,
  [3293] = 2,
    ACTIONS(632), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(630), 2,
      ts_builtin_sym_end,
      sym_text,
  [3301] = 2,
    ACTIONS(636), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(634), 2,
      ts_builtin_sym_end,
      sym_text,
  [3309] = 2,
    ACTIONS(640), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(638), 2,
      ts_builtin_sym_end,
      sym_text,
  [3317] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(642), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(251), 1,
      sym__right_delimiter,
  [3327] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(644), 1,
      anon_sym_else,
    ACTIONS(646), 1,
      anon_sym_end,
  [3337] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(648), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(128), 1,
      sym__right_delimiter,
  [3347] = 2,
    ACTIONS(652), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(650), 2,
      ts_builtin_sym_end,
      sym_text,
  [3355] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(654), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(253), 1,
      sym__right_delimiter,
  [3365] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(656), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(121), 1,
      sym__right_delimiter,
  [3375] = 2,
    ACTIONS(660), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(658), 2,
      ts_builtin_sym_end,
      sym_text,
  [3383] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(662), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(254), 1,
      sym__right_delimiter,
  [3393] = 2,
    ACTIONS(666), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(664), 2,
      ts_builtin_sym_end,
      sym_text,
  [3401] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(668), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(257), 1,
      sym__right_delimiter,
  [3411] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(670), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(258), 1,
      sym__right_delimiter,
  [3421] = 2,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(672), 2,
      ts_builtin_sym_end,
      sym_text,
  [3429] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(676), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(259), 1,
      sym__right_delimiter,
  [3439] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(678), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(113), 1,
      sym__right_delimiter,
  [3449] = 2,
    ACTIONS(682), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(680), 2,
      ts_builtin_sym_end,
      sym_text,
  [3457] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(684), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(260), 1,
      sym__right_delimiter,
  [3467] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(686), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(109), 1,
      sym__right_delimiter,
  [3477] = 3,
    ACTIONS(11), 1,
      anon_sym_elseif,
    ACTIONS(688), 1,
      anon_sym_else,
    ACTIONS(690), 1,
      anon_sym_end,
  [3487] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(692), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(264), 1,
      sym__right_delimiter,
  [3497] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(694), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(105), 1,
      sym__right_delimiter,
  [3507] = 2,
    ACTIONS(698), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(696), 2,
      ts_builtin_sym_end,
      sym_text,
  [3515] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(700), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(102), 1,
      sym__right_delimiter,
  [3525] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(702), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(267), 1,
      sym__right_delimiter,
  [3535] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(704), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(98), 1,
      sym__right_delimiter,
  [3545] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(706), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(269), 1,
      sym__right_delimiter,
  [3555] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(708), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(272), 1,
      sym__right_delimiter,
  [3565] = 3,
    ACTIONS(590), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(256), 1,
      sym__left_delimiter,
    STATE(290), 1,
      aux_sym_if_action_repeat1,
  [3575] = 3,
    ACTIONS(201), 1,
      anon_sym_DASH2,
    ACTIONS(710), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(275), 1,
      sym__right_delimiter,
  [3585] = 3,
    ACTIONS(191), 1,
      anon_sym_DASH2,
    ACTIONS(712), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(88), 1,
      sym__right_delimiter,
  [3595] = 3,
    ACTIONS(714), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(290), 1,
      aux_sym_if_action_repeat1,
    STATE(327), 1,
      sym__left_delimiter,
  [3605] = 2,
    ACTIONS(680), 1,
      sym_text,
    ACTIONS(682), 1,
      anon_sym_LBRACE_LBRACE,
  [3612] = 2,
    ACTIONS(392), 1,
      sym_text,
    ACTIONS(394), 1,
      anon_sym_LBRACE_LBRACE,
  [3619] = 2,
    ACTIONS(554), 1,
      sym_text,
    ACTIONS(556), 1,
      anon_sym_LBRACE_LBRACE,
  [3626] = 2,
    ACTIONS(562), 1,
      sym_text,
    ACTIONS(564), 1,
      anon_sym_LBRACE_LBRACE,
  [3633] = 2,
    ACTIONS(570), 1,
      sym_text,
    ACTIONS(572), 1,
      anon_sym_LBRACE_LBRACE,
  [3640] = 2,
    ACTIONS(448), 1,
      sym_text,
    ACTIONS(450), 1,
      anon_sym_LBRACE_LBRACE,
  [3647] = 2,
    ACTIONS(444), 1,
      sym_text,
    ACTIONS(446), 1,
      anon_sym_LBRACE_LBRACE,
  [3654] = 2,
    ACTIONS(440), 1,
      sym_text,
    ACTIONS(442), 1,
      anon_sym_LBRACE_LBRACE,
  [3661] = 2,
    ACTIONS(436), 1,
      sym_text,
    ACTIONS(438), 1,
      anon_sym_LBRACE_LBRACE,
  [3668] = 2,
    ACTIONS(430), 1,
      sym_text,
    ACTIONS(432), 1,
      anon_sym_LBRACE_LBRACE,
  [3675] = 2,
    ACTIONS(426), 1,
      sym_text,
    ACTIONS(428), 1,
      anon_sym_LBRACE_LBRACE,
  [3682] = 2,
    ACTIONS(420), 1,
      sym_text,
    ACTIONS(422), 1,
      anon_sym_LBRACE_LBRACE,
  [3689] = 2,
    ACTIONS(416), 1,
      sym_text,
    ACTIONS(418), 1,
      anon_sym_LBRACE_LBRACE,
  [3696] = 2,
    ACTIONS(410), 1,
      sym_text,
    ACTIONS(412), 1,
      anon_sym_LBRACE_LBRACE,
  [3703] = 2,
    ACTIONS(717), 1,
      sym_identifier,
    STATE(240), 1,
      sym__field_identifier,
  [3710] = 2,
    ACTIONS(358), 1,
      sym_text,
    ACTIONS(360), 1,
      anon_sym_LBRACE_LBRACE,
  [3717] = 2,
    ACTIONS(404), 1,
      sym_text,
    ACTIONS(406), 1,
      anon_sym_LBRACE_LBRACE,
  [3724] = 2,
    ACTIONS(578), 1,
      sym_text,
    ACTIONS(580), 1,
      anon_sym_LBRACE_LBRACE,
  [3731] = 2,
    ACTIONS(396), 1,
      sym_text,
    ACTIONS(398), 1,
      anon_sym_LBRACE_LBRACE,
  [3738] = 2,
    ACTIONS(592), 1,
      sym_text,
    ACTIONS(594), 1,
      anon_sym_LBRACE_LBRACE,
  [3745] = 2,
    ACTIONS(384), 1,
      sym_text,
    ACTIONS(386), 1,
      anon_sym_LBRACE_LBRACE,
  [3752] = 2,
    ACTIONS(376), 1,
      sym_text,
    ACTIONS(378), 1,
      anon_sym_LBRACE_LBRACE,
  [3759] = 2,
    ACTIONS(366), 1,
      sym_text,
    ACTIONS(368), 1,
      anon_sym_LBRACE_LBRACE,
  [3766] = 2,
    ACTIONS(482), 1,
      sym_text,
    ACTIONS(484), 1,
      anon_sym_LBRACE_LBRACE,
  [3773] = 2,
    ACTIONS(606), 1,
      sym_text,
    ACTIONS(608), 1,
      anon_sym_LBRACE_LBRACE,
  [3780] = 2,
    ACTIONS(612), 1,
      sym_text,
    ACTIONS(614), 1,
      anon_sym_LBRACE_LBRACE,
  [3787] = 2,
    ACTIONS(616), 1,
      sym_text,
    ACTIONS(618), 1,
      anon_sym_LBRACE_LBRACE,
  [3794] = 2,
    ACTIONS(626), 1,
      sym_text,
    ACTIONS(628), 1,
      anon_sym_LBRACE_LBRACE,
  [3801] = 2,
    ACTIONS(630), 1,
      sym_text,
    ACTIONS(632), 1,
      anon_sym_LBRACE_LBRACE,
  [3808] = 2,
    ACTIONS(634), 1,
      sym_text,
    ACTIONS(636), 1,
      anon_sym_LBRACE_LBRACE,
  [3815] = 2,
    ACTIONS(638), 1,
      sym_text,
    ACTIONS(640), 1,
      anon_sym_LBRACE_LBRACE,
  [3822] = 2,
    ACTIONS(650), 1,
      sym_text,
    ACTIONS(652), 1,
      anon_sym_LBRACE_LBRACE,
  [3829] = 2,
    ACTIONS(658), 1,
      sym_text,
    ACTIONS(660), 1,
      anon_sym_LBRACE_LBRACE,
  [3836] = 2,
    ACTIONS(664), 1,
      sym_text,
    ACTIONS(666), 1,
      anon_sym_LBRACE_LBRACE,
  [3843] = 2,
    ACTIONS(672), 1,
      sym_text,
    ACTIONS(674), 1,
      anon_sym_LBRACE_LBRACE,
  [3850] = 2,
    ACTIONS(696), 1,
      sym_text,
    ACTIONS(698), 1,
      anon_sym_LBRACE_LBRACE,
  [3857] = 1,
    ACTIONS(11), 1,
      anon_sym_elseif,
  [3861] = 1,
    ACTIONS(719), 1,
      anon_sym_RBRACE_RBRACE,
  [3865] = 1,
    ACTIONS(721), 1,
      anon_sym_RBRACE_RBRACE,
  [3869] = 1,
    ACTIONS(723), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(58)] = 0,
  [SMALL_STATE(59)] = 60,
  [SMALL_STATE(60)] = 120,
  [SMALL_STATE(61)] = 168,
  [SMALL_STATE(62)] = 216,
  [SMALL_STATE(63)] = 264,
  [SMALL_STATE(64)] = 312,
  [SMALL_STATE(65)] = 342,
  [SMALL_STATE(66)] = 371,
  [SMALL_STATE(67)] = 410,
  [SMALL_STATE(68)] = 449,
  [SMALL_STATE(69)] = 488,
  [SMALL_STATE(70)] = 515,
  [SMALL_STATE(71)] = 554,
  [SMALL_STATE(72)] = 593,
  [SMALL_STATE(73)] = 632,
  [SMALL_STATE(74)] = 671,
  [SMALL_STATE(75)] = 697,
  [SMALL_STATE(76)] = 723,
  [SMALL_STATE(77)] = 749,
  [SMALL_STATE(78)] = 775,
  [SMALL_STATE(79)] = 801,
  [SMALL_STATE(80)] = 827,
  [SMALL_STATE(81)] = 853,
  [SMALL_STATE(82)] = 876,
  [SMALL_STATE(83)] = 895,
  [SMALL_STATE(84)] = 918,
  [SMALL_STATE(85)] = 941,
  [SMALL_STATE(86)] = 964,
  [SMALL_STATE(87)] = 987,
  [SMALL_STATE(88)] = 1010,
  [SMALL_STATE(89)] = 1033,
  [SMALL_STATE(90)] = 1056,
  [SMALL_STATE(91)] = 1079,
  [SMALL_STATE(92)] = 1102,
  [SMALL_STATE(93)] = 1125,
  [SMALL_STATE(94)] = 1148,
  [SMALL_STATE(95)] = 1171,
  [SMALL_STATE(96)] = 1194,
  [SMALL_STATE(97)] = 1217,
  [SMALL_STATE(98)] = 1240,
  [SMALL_STATE(99)] = 1263,
  [SMALL_STATE(100)] = 1286,
  [SMALL_STATE(101)] = 1309,
  [SMALL_STATE(102)] = 1332,
  [SMALL_STATE(103)] = 1355,
  [SMALL_STATE(104)] = 1378,
  [SMALL_STATE(105)] = 1401,
  [SMALL_STATE(106)] = 1424,
  [SMALL_STATE(107)] = 1447,
  [SMALL_STATE(108)] = 1470,
  [SMALL_STATE(109)] = 1493,
  [SMALL_STATE(110)] = 1516,
  [SMALL_STATE(111)] = 1539,
  [SMALL_STATE(112)] = 1562,
  [SMALL_STATE(113)] = 1585,
  [SMALL_STATE(114)] = 1608,
  [SMALL_STATE(115)] = 1631,
  [SMALL_STATE(116)] = 1654,
  [SMALL_STATE(117)] = 1677,
  [SMALL_STATE(118)] = 1700,
  [SMALL_STATE(119)] = 1723,
  [SMALL_STATE(120)] = 1746,
  [SMALL_STATE(121)] = 1769,
  [SMALL_STATE(122)] = 1792,
  [SMALL_STATE(123)] = 1815,
  [SMALL_STATE(124)] = 1838,
  [SMALL_STATE(125)] = 1861,
  [SMALL_STATE(126)] = 1884,
  [SMALL_STATE(127)] = 1907,
  [SMALL_STATE(128)] = 1930,
  [SMALL_STATE(129)] = 1953,
  [SMALL_STATE(130)] = 1976,
  [SMALL_STATE(131)] = 1999,
  [SMALL_STATE(132)] = 2022,
  [SMALL_STATE(133)] = 2045,
  [SMALL_STATE(134)] = 2064,
  [SMALL_STATE(135)] = 2087,
  [SMALL_STATE(136)] = 2110,
  [SMALL_STATE(137)] = 2133,
  [SMALL_STATE(138)] = 2156,
  [SMALL_STATE(139)] = 2167,
  [SMALL_STATE(140)] = 2178,
  [SMALL_STATE(141)] = 2189,
  [SMALL_STATE(142)] = 2200,
  [SMALL_STATE(143)] = 2211,
  [SMALL_STATE(144)] = 2222,
  [SMALL_STATE(145)] = 2231,
  [SMALL_STATE(146)] = 2240,
  [SMALL_STATE(147)] = 2251,
  [SMALL_STATE(148)] = 2262,
  [SMALL_STATE(149)] = 2273,
  [SMALL_STATE(150)] = 2281,
  [SMALL_STATE(151)] = 2291,
  [SMALL_STATE(152)] = 2301,
  [SMALL_STATE(153)] = 2309,
  [SMALL_STATE(154)] = 2319,
  [SMALL_STATE(155)] = 2329,
  [SMALL_STATE(156)] = 2339,
  [SMALL_STATE(157)] = 2347,
  [SMALL_STATE(158)] = 2357,
  [SMALL_STATE(159)] = 2367,
  [SMALL_STATE(160)] = 2375,
  [SMALL_STATE(161)] = 2385,
  [SMALL_STATE(162)] = 2395,
  [SMALL_STATE(163)] = 2403,
  [SMALL_STATE(164)] = 2411,
  [SMALL_STATE(165)] = 2421,
  [SMALL_STATE(166)] = 2431,
  [SMALL_STATE(167)] = 2439,
  [SMALL_STATE(168)] = 2449,
  [SMALL_STATE(169)] = 2457,
  [SMALL_STATE(170)] = 2467,
  [SMALL_STATE(171)] = 2475,
  [SMALL_STATE(172)] = 2483,
  [SMALL_STATE(173)] = 2493,
  [SMALL_STATE(174)] = 2501,
  [SMALL_STATE(175)] = 2509,
  [SMALL_STATE(176)] = 2519,
  [SMALL_STATE(177)] = 2527,
  [SMALL_STATE(178)] = 2535,
  [SMALL_STATE(179)] = 2543,
  [SMALL_STATE(180)] = 2551,
  [SMALL_STATE(181)] = 2561,
  [SMALL_STATE(182)] = 2571,
  [SMALL_STATE(183)] = 2581,
  [SMALL_STATE(184)] = 2589,
  [SMALL_STATE(185)] = 2599,
  [SMALL_STATE(186)] = 2609,
  [SMALL_STATE(187)] = 2619,
  [SMALL_STATE(188)] = 2629,
  [SMALL_STATE(189)] = 2639,
  [SMALL_STATE(190)] = 2649,
  [SMALL_STATE(191)] = 2659,
  [SMALL_STATE(192)] = 2669,
  [SMALL_STATE(193)] = 2679,
  [SMALL_STATE(194)] = 2689,
  [SMALL_STATE(195)] = 2697,
  [SMALL_STATE(196)] = 2707,
  [SMALL_STATE(197)] = 2717,
  [SMALL_STATE(198)] = 2727,
  [SMALL_STATE(199)] = 2737,
  [SMALL_STATE(200)] = 2747,
  [SMALL_STATE(201)] = 2757,
  [SMALL_STATE(202)] = 2767,
  [SMALL_STATE(203)] = 2777,
  [SMALL_STATE(204)] = 2787,
  [SMALL_STATE(205)] = 2797,
  [SMALL_STATE(206)] = 2807,
  [SMALL_STATE(207)] = 2817,
  [SMALL_STATE(208)] = 2827,
  [SMALL_STATE(209)] = 2837,
  [SMALL_STATE(210)] = 2847,
  [SMALL_STATE(211)] = 2857,
  [SMALL_STATE(212)] = 2867,
  [SMALL_STATE(213)] = 2877,
  [SMALL_STATE(214)] = 2887,
  [SMALL_STATE(215)] = 2897,
  [SMALL_STATE(216)] = 2907,
  [SMALL_STATE(217)] = 2917,
  [SMALL_STATE(218)] = 2927,
  [SMALL_STATE(219)] = 2937,
  [SMALL_STATE(220)] = 2947,
  [SMALL_STATE(221)] = 2957,
  [SMALL_STATE(222)] = 2967,
  [SMALL_STATE(223)] = 2977,
  [SMALL_STATE(224)] = 2987,
  [SMALL_STATE(225)] = 2993,
  [SMALL_STATE(226)] = 3003,
  [SMALL_STATE(227)] = 3013,
  [SMALL_STATE(228)] = 3019,
  [SMALL_STATE(229)] = 3027,
  [SMALL_STATE(230)] = 3037,
  [SMALL_STATE(231)] = 3047,
  [SMALL_STATE(232)] = 3055,
  [SMALL_STATE(233)] = 3065,
  [SMALL_STATE(234)] = 3075,
  [SMALL_STATE(235)] = 3083,
  [SMALL_STATE(236)] = 3093,
  [SMALL_STATE(237)] = 3103,
  [SMALL_STATE(238)] = 3111,
  [SMALL_STATE(239)] = 3121,
  [SMALL_STATE(240)] = 3127,
  [SMALL_STATE(241)] = 3133,
  [SMALL_STATE(242)] = 3143,
  [SMALL_STATE(243)] = 3153,
  [SMALL_STATE(244)] = 3161,
  [SMALL_STATE(245)] = 3171,
  [SMALL_STATE(246)] = 3181,
  [SMALL_STATE(247)] = 3191,
  [SMALL_STATE(248)] = 3201,
  [SMALL_STATE(249)] = 3211,
  [SMALL_STATE(250)] = 3221,
  [SMALL_STATE(251)] = 3231,
  [SMALL_STATE(252)] = 3239,
  [SMALL_STATE(253)] = 3249,
  [SMALL_STATE(254)] = 3257,
  [SMALL_STATE(255)] = 3265,
  [SMALL_STATE(256)] = 3275,
  [SMALL_STATE(257)] = 3285,
  [SMALL_STATE(258)] = 3293,
  [SMALL_STATE(259)] = 3301,
  [SMALL_STATE(260)] = 3309,
  [SMALL_STATE(261)] = 3317,
  [SMALL_STATE(262)] = 3327,
  [SMALL_STATE(263)] = 3337,
  [SMALL_STATE(264)] = 3347,
  [SMALL_STATE(265)] = 3355,
  [SMALL_STATE(266)] = 3365,
  [SMALL_STATE(267)] = 3375,
  [SMALL_STATE(268)] = 3383,
  [SMALL_STATE(269)] = 3393,
  [SMALL_STATE(270)] = 3401,
  [SMALL_STATE(271)] = 3411,
  [SMALL_STATE(272)] = 3421,
  [SMALL_STATE(273)] = 3429,
  [SMALL_STATE(274)] = 3439,
  [SMALL_STATE(275)] = 3449,
  [SMALL_STATE(276)] = 3457,
  [SMALL_STATE(277)] = 3467,
  [SMALL_STATE(278)] = 3477,
  [SMALL_STATE(279)] = 3487,
  [SMALL_STATE(280)] = 3497,
  [SMALL_STATE(281)] = 3507,
  [SMALL_STATE(282)] = 3515,
  [SMALL_STATE(283)] = 3525,
  [SMALL_STATE(284)] = 3535,
  [SMALL_STATE(285)] = 3545,
  [SMALL_STATE(286)] = 3555,
  [SMALL_STATE(287)] = 3565,
  [SMALL_STATE(288)] = 3575,
  [SMALL_STATE(289)] = 3585,
  [SMALL_STATE(290)] = 3595,
  [SMALL_STATE(291)] = 3605,
  [SMALL_STATE(292)] = 3612,
  [SMALL_STATE(293)] = 3619,
  [SMALL_STATE(294)] = 3626,
  [SMALL_STATE(295)] = 3633,
  [SMALL_STATE(296)] = 3640,
  [SMALL_STATE(297)] = 3647,
  [SMALL_STATE(298)] = 3654,
  [SMALL_STATE(299)] = 3661,
  [SMALL_STATE(300)] = 3668,
  [SMALL_STATE(301)] = 3675,
  [SMALL_STATE(302)] = 3682,
  [SMALL_STATE(303)] = 3689,
  [SMALL_STATE(304)] = 3696,
  [SMALL_STATE(305)] = 3703,
  [SMALL_STATE(306)] = 3710,
  [SMALL_STATE(307)] = 3717,
  [SMALL_STATE(308)] = 3724,
  [SMALL_STATE(309)] = 3731,
  [SMALL_STATE(310)] = 3738,
  [SMALL_STATE(311)] = 3745,
  [SMALL_STATE(312)] = 3752,
  [SMALL_STATE(313)] = 3759,
  [SMALL_STATE(314)] = 3766,
  [SMALL_STATE(315)] = 3773,
  [SMALL_STATE(316)] = 3780,
  [SMALL_STATE(317)] = 3787,
  [SMALL_STATE(318)] = 3794,
  [SMALL_STATE(319)] = 3801,
  [SMALL_STATE(320)] = 3808,
  [SMALL_STATE(321)] = 3815,
  [SMALL_STATE(322)] = 3822,
  [SMALL_STATE(323)] = 3829,
  [SMALL_STATE(324)] = 3836,
  [SMALL_STATE(325)] = 3843,
  [SMALL_STATE(326)] = 3850,
  [SMALL_STATE(327)] = 3857,
  [SMALL_STATE(328)] = 3861,
  [SMALL_STATE(329)] = 3865,
  [SMALL_STATE(330)] = 3869,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(280),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(76),
  [244] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(64),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 3),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [277] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 4, .production_id = 7), SHIFT_REPEAT(64),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 13),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_interpreted_string_literal, 2),
  [322] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(137),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [329] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(139),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot, 1),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 17),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 10, .production_id = 7),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 10, .production_id = 7),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 10, .production_id = 8),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 10, .production_id = 8),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 10, .production_id = 7),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 10, .production_id = 7),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 16),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 16),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 9),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 9),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 11, .production_id = 10),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 11, .production_id = 10),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [410] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 11, .production_id = 11),
  [412] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 11, .production_id = 11),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 16),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 16),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 11, .production_id = 9),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 11, .production_id = 9),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 18),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 18),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 14),
  [432] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 14),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 19),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 19),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 20),
  [442] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 20),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 12, .production_id = 18),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 12, .production_id = 18),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 21),
  [450] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 21),
  [452] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline, 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 9, .production_id = 15),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 9, .production_id = 15),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [514] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [528] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [536] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field, 2, .production_id = 1),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [552] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 1),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [562] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [564] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 2),
  [572] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 2),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [576] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_delimiter, 2),
  [580] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_delimiter, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__field_identifier, 1, .production_id = 3),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_selector_expression, 3, .production_id = 4),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [592] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 5),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 5),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 14),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 14),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 8, .production_id = 9),
  [614] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 8, .production_id = 9),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 12),
  [618] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 12),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [622] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 8, .production_id = 5),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 8, .production_id = 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 8, .production_id = 12),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 8, .production_id = 12),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 11),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 11),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 10),
  [640] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 10),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [644] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [650] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 9),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 9),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [656] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_with_action, 7, .production_id = 7),
  [660] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_with_action, 7, .production_id = 7),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_action, 7, .production_id = 2),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block_action, 7, .production_id = 2),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_define_action, 7, .production_id = 2),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_define_action, 7, .production_id = 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 7, .production_id = 8),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 7, .production_id = 8),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [688] = {.entry = {.count = 1, .reusable = false}}, SHIFT(263),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 7, .production_id = 7),
  [698] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 7, .production_id = 7),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 6), SHIFT_REPEAT(64),
  [717] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [723] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
