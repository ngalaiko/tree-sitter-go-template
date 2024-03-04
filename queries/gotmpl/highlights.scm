; Identifiers

([
  (field)
  (field_identifier)
  ] @variable.member (#set! priority 105))

((variable) @variable (#set! priority 105))

; Function calls

(function_call
  function: (identifier) @function (#set! priority 105))

(method_call
  method: (selector_expression
            field: (field_identifier) @function (#set! priority 105)))

; Builtin functions

(function_call
  function: (identifier) @function.builtin
  (#set! priority 105)
  (#any-of? @function.builtin
   "and" "call" "html" "index" "slice" "js" "len" "not" "or" "print" "printf" "println" "urlquery"
   "eq" "ne" "lt" "ge" "gt" "ge"))

; Operators

([
  "|"
  ":="
  ] @operator (#set! priority 105))

; Delimiters

([
  "."
  ","
  ] @punctuation.delimiter (#set! priority 105))

([
  "{{"
  "}}"
  "{{-"
  "-}}"
  ")"
  "("
  ] @punctuation.bracket (#set! priority 105))

; Actions

(if_action
  [
   "if"
   "else"
   "else if"
   "end"
   ] @keyword.conditional (#set! priority 105))

(range_action
  [
   "range"
   "else"
   "end"
   ] @keyword.repeat (#set! priority 105))

(template_action
  [
   "template"
   ] @function.builtin (#set! priority 105))

(block_action
  [
   "block"
   "end"
   ] @keyword.directive (#set! priority 105))

(define_action
  [
   "define"
   "end"
   ] @keyword.directive.define (#set! priority 105))

(with_action
  [
   "with"
   "else"
   "end"
   ] @keyword.conditional (#set! priority 105))

; Literals

([
  (interpreted_string_literal)
  (raw_string_literal)
  ] @string (#set! priority 105))

((rune_literal) @string.special.symbol (#set! priority 105))

((escape_sequence) @string.escape (#set! priority 105))

([
  (int_literal)
  (imaginary_literal)
  ] @number (#set! priority 105))

((float_literal) @number.float (#set! priority 105))

([
  (true)
  (false)
  ] @boolean (#set! priority 105))

((nil) @constant.builtin (#set! priority 105))

((comment) @comment @spell (#set! priority 105))
