#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 117
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 8
#define MAX_ALIAS_SEQUENCE_LENGTH 13
#define PRODUCTION_ID_COUNT 11

enum {
  sym_text = 1,
  anon_sym_if = 2,
  anon_sym_elseif = 3,
  anon_sym_else = 4,
  anon_sym_end = 5,
  anon_sym_range = 6,
  anon_sym_template = 7,
  sym_pipeline_stub = 8,
  sym_raw_string_literal = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_interpreted_string_literal_token1 = 11,
  sym_escape_sequence = 12,
  sym_comment = 13,
  anon_sym_LBRACE_LBRACE = 14,
  anon_sym_DASH = 15,
  anon_sym_DASH2 = 16,
  anon_sym_RBRACE_RBRACE = 17,
  sym_template = 18,
  sym__block = 19,
  sym__action = 20,
  sym__comment_action = 21,
  sym__pipeline_action = 22,
  sym_if_action = 23,
  sym_range_action = 24,
  sym_template_action = 25,
  sym__pipeline = 26,
  sym__string_literal = 27,
  sym_interpreted_string_literal = 28,
  sym__left_delimiter = 29,
  sym__right_delimiter = 30,
  aux_sym_template_repeat1 = 31,
  aux_sym_if_action_repeat1 = 32,
  aux_sym_interpreted_string_literal_repeat1 = 33,
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
  [sym_pipeline_stub] = "pipeline_stub",
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
  [sym__pipeline] = "_pipeline",
  [sym__string_literal] = "_string_literal",
  [sym_interpreted_string_literal] = "interpreted_string_literal",
  [sym__left_delimiter] = "_left_delimiter",
  [sym__right_delimiter] = "_right_delimiter",
  [aux_sym_template_repeat1] = "template_repeat1",
  [aux_sym_if_action_repeat1] = "if_action_repeat1",
  [aux_sym_interpreted_string_literal_repeat1] = "interpreted_string_literal_repeat1",
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
  [sym_pipeline_stub] = sym_pipeline_stub,
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
  [sym__pipeline] = sym__pipeline,
  [sym__string_literal] = sym__string_literal,
  [sym_interpreted_string_literal] = sym_interpreted_string_literal,
  [sym__left_delimiter] = sym__left_delimiter,
  [sym__right_delimiter] = sym__right_delimiter,
  [aux_sym_template_repeat1] = aux_sym_template_repeat1,
  [aux_sym_if_action_repeat1] = aux_sym_if_action_repeat1,
  [aux_sym_interpreted_string_literal_repeat1] = aux_sym_interpreted_string_literal_repeat1,
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
  [sym_pipeline_stub] = {
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
  [sym__pipeline] = {
    .visible = false,
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
};

enum {
  field_alternative = 1,
  field_argument = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_name = 6,
  field_option = 7,
  field_range = 8,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_argument] = "argument",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_name] = "name",
  [field_option] = "option",
  [field_range] = "range",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 4},
  [4] = {.index = 7, .length = 2},
  [5] = {.index = 9, .length = 2},
  [6] = {.index = 11, .length = 4},
  [7] = {.index = 15, .length = 2},
  [8] = {.index = 17, .length = 3},
  [9] = {.index = 20, .length = 3},
  [10] = {.index = 23, .length = 5},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_argument, 3},
    {field_name, 2},
  [3] =
    {field_condition, 0, .inherited = true},
    {field_condition, 1, .inherited = true},
    {field_option, 0, .inherited = true},
    {field_option, 1, .inherited = true},
  [7] =
    {field_condition, 2},
    {field_consequence, 4},
  [9] =
    {field_body, 4},
    {field_range, 2},
  [11] =
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
  [15] =
    {field_condition, 2},
    {field_option, 4},
  [17] =
    {field_alternative, 8},
    {field_condition, 2},
    {field_consequence, 4},
  [20] =
    {field_alternative, 8},
    {field_body, 4},
    {field_range, 2},
  [23] =
    {field_alternative, 9},
    {field_condition, 2},
    {field_condition, 5, .inherited = true},
    {field_consequence, 4},
    {field_option, 5, .inherited = true},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0) ADVANCE(67);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(74);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(32);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(50);
      if (lookahead == 'u') ADVANCE(46);
      if (lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (lookahead != 0) ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(64);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(33);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(57);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(38);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 37:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == '{') ADVANCE(73);
      END_STATE();
    case 42:
      if (lookahead == '}') ADVANCE(76);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 51:
      if (eof) ADVANCE(53);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '"') ADVANCE(65);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '`') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(23);
      if (lookahead == 'p') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(13);
      if (lookahead == 't') ADVANCE(16);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '}') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(51)
      END_STATE();
    case 52:
      if (eof) ADVANCE(53);
      if (lookahead == '{') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_elseif);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_else);
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_range);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_template);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_pipeline_stub);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_raw_string_literal);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_interpreted_string_literal_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DASH2);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_RBRACE_RBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 52},
  [2] = {.lex_state = 52},
  [3] = {.lex_state = 52},
  [4] = {.lex_state = 52},
  [5] = {.lex_state = 52},
  [6] = {.lex_state = 52},
  [7] = {.lex_state = 52},
  [8] = {.lex_state = 52},
  [9] = {.lex_state = 52},
  [10] = {.lex_state = 52},
  [11] = {.lex_state = 52},
  [12] = {.lex_state = 52},
  [13] = {.lex_state = 52},
  [14] = {.lex_state = 52},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 52},
  [17] = {.lex_state = 52},
  [18] = {.lex_state = 52},
  [19] = {.lex_state = 52},
  [20] = {.lex_state = 52},
  [21] = {.lex_state = 52},
  [22] = {.lex_state = 52},
  [23] = {.lex_state = 52},
  [24] = {.lex_state = 52},
  [25] = {.lex_state = 52},
  [26] = {.lex_state = 52},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 9},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 10},
  [31] = {.lex_state = 10},
  [32] = {.lex_state = 10},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 10},
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
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 52},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 52},
  [55] = {.lex_state = 52},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 52},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 52},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 52},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 52},
  [86] = {.lex_state = 52},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 52},
  [91] = {.lex_state = 52},
  [92] = {.lex_state = 52},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 52},
  [98] = {.lex_state = 52},
  [99] = {.lex_state = 52},
  [100] = {.lex_state = 52},
  [101] = {.lex_state = 52},
  [102] = {.lex_state = 52},
  [103] = {.lex_state = 52},
  [104] = {.lex_state = 52},
  [105] = {.lex_state = 52},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 52},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 52},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
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
    [sym_pipeline_stub] = ACTIONS(1),
    [sym_raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(1),
    [anon_sym_DASH2] = ACTIONS(1),
    [anon_sym_RBRACE_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_template] = STATE(115),
    [sym__block] = STATE(5),
    [sym__action] = STATE(5),
    [sym__comment_action] = STATE(5),
    [sym__pipeline_action] = STATE(5),
    [sym_if_action] = STATE(5),
    [sym_range_action] = STATE(5),
    [sym_template_action] = STATE(5),
    [sym__left_delimiter] = STATE(41),
    [aux_sym_template_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_LBRACE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      sym_text,
    ACTIONS(14), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(41), 1,
      sym__left_delimiter,
    STATE(2), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [23] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(29), 1,
      sym__left_delimiter,
    STATE(67), 1,
      aux_sym_if_action_repeat1,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [46] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(27), 1,
      sym__left_delimiter,
    STATE(80), 1,
      aux_sym_if_action_repeat1,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [69] = 5,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_text,
    STATE(41), 1,
      sym__left_delimiter,
    STATE(2), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [92] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(38), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [112] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(23), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(23), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [132] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(25), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(13), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [152] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(27), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(6), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [172] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(29), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(15), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [192] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(31), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(4), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [212] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(40), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [232] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(39), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [252] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(37), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [272] = 4,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(31), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [292] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(36), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [312] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(35), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(12), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [332] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(37), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(16), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [352] = 4,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(39), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [372] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(41), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(3), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [392] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(43), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(26), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [412] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(45), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(14), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [432] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(17), 1,
      sym_text,
    STATE(35), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [452] = 4,
    ACTIONS(14), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(47), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [472] = 4,
    ACTIONS(7), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(50), 1,
      sym_text,
    STATE(42), 1,
      sym__left_delimiter,
    STATE(19), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [492] = 4,
    ACTIONS(17), 1,
      sym_text,
    ACTIONS(33), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(32), 1,
      sym__left_delimiter,
    STATE(24), 8,
      sym__block,
      sym__action,
      sym__comment_action,
      sym__pipeline_action,
      sym_if_action,
      sym_range_action,
      sym_template_action,
      aux_sym_template_repeat1,
  [512] = 9,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_elseif,
    ACTIONS(56), 1,
      anon_sym_else,
    ACTIONS(58), 1,
      anon_sym_end,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    STATE(84), 1,
      sym__pipeline,
  [540] = 3,
    ACTIONS(70), 1,
      anon_sym_else,
    ACTIONS(72), 1,
      anon_sym_DASH,
    ACTIONS(68), 7,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      sym_pipeline_stub,
      sym_comment,
  [556] = 9,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(54), 1,
      anon_sym_elseif,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_else,
    ACTIONS(76), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [584] = 2,
    ACTIONS(78), 1,
      anon_sym_DASH,
    ACTIONS(68), 7,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      sym_pipeline_stub,
      sym_comment,
  [597] = 8,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(80), 1,
      anon_sym_else,
    ACTIONS(82), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [622] = 8,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(84), 1,
      anon_sym_else,
    ACTIONS(86), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [647] = 2,
    ACTIONS(90), 1,
      anon_sym_else,
    ACTIONS(88), 7,
      anon_sym_if,
      anon_sym_elseif,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      sym_pipeline_stub,
      sym_comment,
  [660] = 1,
    ACTIONS(88), 7,
      anon_sym_if,
      anon_sym_else,
      anon_sym_end,
      anon_sym_range,
      anon_sym_template,
      sym_pipeline_stub,
      sym_comment,
  [670] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [692] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(94), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [714] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [736] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(98), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [758] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [780] = 7,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    ACTIONS(102), 1,
      anon_sym_end,
    STATE(84), 1,
      sym__pipeline,
  [802] = 6,
    ACTIONS(104), 1,
      anon_sym_if,
    ACTIONS(106), 1,
      anon_sym_range,
    ACTIONS(108), 1,
      anon_sym_template,
    ACTIONS(110), 1,
      sym_pipeline_stub,
    ACTIONS(112), 1,
      sym_comment,
    STATE(73), 1,
      sym__pipeline,
  [821] = 6,
    ACTIONS(52), 1,
      anon_sym_if,
    ACTIONS(60), 1,
      anon_sym_range,
    ACTIONS(62), 1,
      anon_sym_template,
    ACTIONS(64), 1,
      sym_pipeline_stub,
    ACTIONS(66), 1,
      sym_comment,
    STATE(84), 1,
      sym__pipeline,
  [840] = 5,
    ACTIONS(114), 1,
      sym_pipeline_stub,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(118), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(71), 1,
      sym__pipeline,
    STATE(104), 1,
      sym__right_delimiter,
  [856] = 5,
    ACTIONS(120), 1,
      sym_pipeline_stub,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(124), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(92), 1,
      sym__right_delimiter,
    STATE(94), 1,
      sym__pipeline,
  [872] = 3,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(128), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [883] = 3,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
    STATE(45), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(133), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [894] = 3,
    ACTIONS(135), 1,
      sym_raw_string_literal,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    STATE(44), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [905] = 3,
    ACTIONS(139), 1,
      anon_sym_DQUOTE,
    STATE(46), 1,
      aux_sym_interpreted_string_literal_repeat1,
    ACTIONS(141), 2,
      aux_sym_interpreted_string_literal_token1,
      sym_escape_sequence,
  [916] = 3,
    ACTIONS(137), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      sym_raw_string_literal,
    STATE(43), 2,
      sym__string_literal,
      sym_interpreted_string_literal,
  [927] = 1,
    ACTIONS(145), 3,
      sym_pipeline_stub,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [933] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      sym_text,
  [941] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(151), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(55), 1,
      sym__right_delimiter,
  [951] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(153), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(17), 1,
      sym__right_delimiter,
  [961] = 2,
    ACTIONS(157), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      sym_text,
  [969] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      sym_text,
  [977] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(163), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(8), 1,
      sym__right_delimiter,
  [987] = 3,
    ACTIONS(54), 1,
      anon_sym_elseif,
    ACTIONS(165), 1,
      anon_sym_else,
    ACTIONS(167), 1,
      anon_sym_end,
  [997] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(169), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(86), 1,
      sym__right_delimiter,
  [1007] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(171), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(62), 1,
      sym__right_delimiter,
  [1017] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(173), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(22), 1,
      sym__right_delimiter,
  [1027] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(175), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(51), 1,
      sym__right_delimiter,
  [1037] = 2,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(177), 2,
      ts_builtin_sym_end,
      sym_text,
  [1045] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(181), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(98), 1,
      sym__right_delimiter,
  [1055] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(183), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(9), 1,
      sym__right_delimiter,
  [1065] = 2,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(185), 2,
      ts_builtin_sym_end,
      sym_text,
  [1073] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(189), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(10), 1,
      sym__right_delimiter,
  [1083] = 3,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(57), 1,
      sym__left_delimiter,
    STATE(96), 1,
      aux_sym_if_action_repeat1,
  [1093] = 2,
    ACTIONS(195), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(193), 2,
      ts_builtin_sym_end,
      sym_text,
  [1101] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(197), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(11), 1,
      sym__right_delimiter,
  [1111] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(199), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(54), 1,
      sym__right_delimiter,
  [1121] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(201), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(102), 1,
      sym__right_delimiter,
  [1131] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(203), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(85), 1,
      sym__right_delimiter,
  [1141] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(205), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(90), 1,
      sym__right_delimiter,
  [1151] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(207), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(20), 1,
      sym__right_delimiter,
  [1161] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(209), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(101), 1,
      sym__right_delimiter,
  [1171] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(211), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(100), 1,
      sym__right_delimiter,
  [1181] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(213), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(21), 1,
      sym__right_delimiter,
  [1191] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(215), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(99), 1,
      sym__right_delimiter,
  [1201] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(217), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(25), 1,
      sym__right_delimiter,
  [1211] = 3,
    ACTIONS(191), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(93), 1,
      sym__left_delimiter,
    STATE(96), 1,
      aux_sym_if_action_repeat1,
  [1221] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(219), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(110), 1,
      sym__right_delimiter,
  [1231] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(221), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(65), 1,
      sym__right_delimiter,
  [1241] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(223), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(7), 1,
      sym__right_delimiter,
  [1251] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(225), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(105), 1,
      sym__right_delimiter,
  [1261] = 2,
    ACTIONS(229), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(227), 2,
      ts_builtin_sym_end,
      sym_text,
  [1269] = 2,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(231), 2,
      ts_builtin_sym_end,
      sym_text,
  [1277] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(235), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(108), 1,
      sym__right_delimiter,
  [1287] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(237), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(97), 1,
      sym__right_delimiter,
  [1297] = 1,
    ACTIONS(239), 3,
      sym_pipeline_stub,
      anon_sym_DASH2,
      anon_sym_RBRACE_RBRACE,
  [1303] = 2,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(241), 2,
      ts_builtin_sym_end,
      sym_text,
  [1311] = 2,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      sym_text,
  [1319] = 2,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE,
    ACTIONS(249), 2,
      ts_builtin_sym_end,
      sym_text,
  [1327] = 3,
    ACTIONS(54), 1,
      anon_sym_elseif,
    ACTIONS(253), 1,
      anon_sym_else,
    ACTIONS(255), 1,
      anon_sym_end,
  [1337] = 3,
    ACTIONS(122), 1,
      anon_sym_DASH2,
    ACTIONS(257), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(68), 1,
      sym__right_delimiter,
  [1347] = 3,
    ACTIONS(116), 1,
      anon_sym_DASH2,
    ACTIONS(259), 1,
      anon_sym_RBRACE_RBRACE,
    STATE(18), 1,
      sym__right_delimiter,
  [1357] = 3,
    ACTIONS(261), 1,
      anon_sym_LBRACE_LBRACE,
    STATE(96), 1,
      aux_sym_if_action_repeat1,
    STATE(116), 1,
      sym__left_delimiter,
  [1367] = 2,
    ACTIONS(185), 1,
      sym_text,
    ACTIONS(187), 1,
      anon_sym_LBRACE_LBRACE,
  [1374] = 2,
    ACTIONS(147), 1,
      sym_text,
    ACTIONS(149), 1,
      anon_sym_LBRACE_LBRACE,
  [1381] = 2,
    ACTIONS(159), 1,
      sym_text,
    ACTIONS(161), 1,
      anon_sym_LBRACE_LBRACE,
  [1388] = 2,
    ACTIONS(155), 1,
      sym_text,
    ACTIONS(157), 1,
      anon_sym_LBRACE_LBRACE,
  [1395] = 2,
    ACTIONS(231), 1,
      sym_text,
    ACTIONS(233), 1,
      anon_sym_LBRACE_LBRACE,
  [1402] = 2,
    ACTIONS(193), 1,
      sym_text,
    ACTIONS(195), 1,
      anon_sym_LBRACE_LBRACE,
  [1409] = 2,
    ACTIONS(245), 1,
      sym_text,
    ACTIONS(247), 1,
      anon_sym_LBRACE_LBRACE,
  [1416] = 2,
    ACTIONS(249), 1,
      sym_text,
    ACTIONS(251), 1,
      anon_sym_LBRACE_LBRACE,
  [1423] = 2,
    ACTIONS(241), 1,
      sym_text,
    ACTIONS(243), 1,
      anon_sym_LBRACE_LBRACE,
  [1430] = 2,
    ACTIONS(264), 1,
      sym_pipeline_stub,
    STATE(77), 1,
      sym__pipeline,
  [1437] = 2,
    ACTIONS(266), 1,
      sym_pipeline_stub,
    STATE(74), 1,
      sym__pipeline,
  [1444] = 2,
    ACTIONS(227), 1,
      sym_text,
    ACTIONS(229), 1,
      anon_sym_LBRACE_LBRACE,
  [1451] = 2,
    ACTIONS(268), 1,
      sym_pipeline_stub,
    STATE(79), 1,
      sym__pipeline,
  [1458] = 2,
    ACTIONS(177), 1,
      sym_text,
    ACTIONS(179), 1,
      anon_sym_LBRACE_LBRACE,
  [1465] = 2,
    ACTIONS(270), 1,
      sym_pipeline_stub,
    STATE(69), 1,
      sym__pipeline,
  [1472] = 2,
    ACTIONS(272), 1,
      sym_pipeline_stub,
    STATE(66), 1,
      sym__pipeline,
  [1479] = 1,
    ACTIONS(274), 1,
      anon_sym_RBRACE_RBRACE,
  [1483] = 1,
    ACTIONS(276), 1,
      anon_sym_RBRACE_RBRACE,
  [1487] = 1,
    ACTIONS(278), 1,
      ts_builtin_sym_end,
  [1491] = 1,
    ACTIONS(54), 1,
      anon_sym_elseif,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 212,
  [SMALL_STATE(13)] = 232,
  [SMALL_STATE(14)] = 252,
  [SMALL_STATE(15)] = 272,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 312,
  [SMALL_STATE(18)] = 332,
  [SMALL_STATE(19)] = 352,
  [SMALL_STATE(20)] = 372,
  [SMALL_STATE(21)] = 392,
  [SMALL_STATE(22)] = 412,
  [SMALL_STATE(23)] = 432,
  [SMALL_STATE(24)] = 452,
  [SMALL_STATE(25)] = 472,
  [SMALL_STATE(26)] = 492,
  [SMALL_STATE(27)] = 512,
  [SMALL_STATE(28)] = 540,
  [SMALL_STATE(29)] = 556,
  [SMALL_STATE(30)] = 584,
  [SMALL_STATE(31)] = 597,
  [SMALL_STATE(32)] = 622,
  [SMALL_STATE(33)] = 647,
  [SMALL_STATE(34)] = 660,
  [SMALL_STATE(35)] = 670,
  [SMALL_STATE(36)] = 692,
  [SMALL_STATE(37)] = 714,
  [SMALL_STATE(38)] = 736,
  [SMALL_STATE(39)] = 758,
  [SMALL_STATE(40)] = 780,
  [SMALL_STATE(41)] = 802,
  [SMALL_STATE(42)] = 821,
  [SMALL_STATE(43)] = 840,
  [SMALL_STATE(44)] = 856,
  [SMALL_STATE(45)] = 872,
  [SMALL_STATE(46)] = 883,
  [SMALL_STATE(47)] = 894,
  [SMALL_STATE(48)] = 905,
  [SMALL_STATE(49)] = 916,
  [SMALL_STATE(50)] = 927,
  [SMALL_STATE(51)] = 933,
  [SMALL_STATE(52)] = 941,
  [SMALL_STATE(53)] = 951,
  [SMALL_STATE(54)] = 961,
  [SMALL_STATE(55)] = 969,
  [SMALL_STATE(56)] = 977,
  [SMALL_STATE(57)] = 987,
  [SMALL_STATE(58)] = 997,
  [SMALL_STATE(59)] = 1007,
  [SMALL_STATE(60)] = 1017,
  [SMALL_STATE(61)] = 1027,
  [SMALL_STATE(62)] = 1037,
  [SMALL_STATE(63)] = 1045,
  [SMALL_STATE(64)] = 1055,
  [SMALL_STATE(65)] = 1065,
  [SMALL_STATE(66)] = 1073,
  [SMALL_STATE(67)] = 1083,
  [SMALL_STATE(68)] = 1093,
  [SMALL_STATE(69)] = 1101,
  [SMALL_STATE(70)] = 1111,
  [SMALL_STATE(71)] = 1121,
  [SMALL_STATE(72)] = 1131,
  [SMALL_STATE(73)] = 1141,
  [SMALL_STATE(74)] = 1151,
  [SMALL_STATE(75)] = 1161,
  [SMALL_STATE(76)] = 1171,
  [SMALL_STATE(77)] = 1181,
  [SMALL_STATE(78)] = 1191,
  [SMALL_STATE(79)] = 1201,
  [SMALL_STATE(80)] = 1211,
  [SMALL_STATE(81)] = 1221,
  [SMALL_STATE(82)] = 1231,
  [SMALL_STATE(83)] = 1241,
  [SMALL_STATE(84)] = 1251,
  [SMALL_STATE(85)] = 1261,
  [SMALL_STATE(86)] = 1269,
  [SMALL_STATE(87)] = 1277,
  [SMALL_STATE(88)] = 1287,
  [SMALL_STATE(89)] = 1297,
  [SMALL_STATE(90)] = 1303,
  [SMALL_STATE(91)] = 1311,
  [SMALL_STATE(92)] = 1319,
  [SMALL_STATE(93)] = 1327,
  [SMALL_STATE(94)] = 1337,
  [SMALL_STATE(95)] = 1347,
  [SMALL_STATE(96)] = 1357,
  [SMALL_STATE(97)] = 1367,
  [SMALL_STATE(98)] = 1374,
  [SMALL_STATE(99)] = 1381,
  [SMALL_STATE(100)] = 1388,
  [SMALL_STATE(101)] = 1395,
  [SMALL_STATE(102)] = 1402,
  [SMALL_STATE(103)] = 1409,
  [SMALL_STATE(104)] = 1416,
  [SMALL_STATE(105)] = 1423,
  [SMALL_STATE(106)] = 1430,
  [SMALL_STATE(107)] = 1437,
  [SMALL_STATE(108)] = 1444,
  [SMALL_STATE(109)] = 1451,
  [SMALL_STATE(110)] = 1458,
  [SMALL_STATE(111)] = 1465,
  [SMALL_STATE(112)] = 1472,
  [SMALL_STATE(113)] = 1479,
  [SMALL_STATE(114)] = 1483,
  [SMALL_STATE(115)] = 1487,
  [SMALL_STATE(116)] = 1491,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template, 1),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_action_repeat1, 5, .production_id = 7),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_template_repeat1, 2), SHIFT_REPEAT(24),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__left_delimiter, 2),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__left_delimiter, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(45),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 12, .production_id = 9),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 12, .production_id = 9),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_action, 8, .production_id = 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_action, 8, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 9, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 9, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 12, .production_id = 8),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 12, .production_id = 8),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 13, .production_id = 10),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 13, .production_id = 10),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 5, .production_id = 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 5, .production_id = 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_action, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_action, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_action, 8, .production_id = 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_action, 8, .production_id = 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_interpreted_string_literal, 3),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pipeline_action, 3),
  [243] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pipeline_action, 3),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__right_delimiter, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__right_delimiter, 2),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_template_action, 4, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_template_action, 4, .production_id = 1),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_action_repeat1, 2, .production_id = 3), SHIFT_REPEAT(28),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [278] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
