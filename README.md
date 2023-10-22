## Announcement 

I've stopped using helm (which I mostly written this package for) on a daily basis, so I don't really keep up with the development of tree sitter, and nvim-tree-sitter. So this project won't receive any attention from me in the near future.

If you are interested in maintaining the project, feel free to fork the repo, and if the fork is maintained I will gladly delegate you this repository or link it.

# tree-sitter-go-template

[![Build/test](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml/badge.svg)](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml)

[Golang templates][] grammar for [tree-sitter][].

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[Golang templates]: https://golang.org/pkg/text/template/

## NeoVim integration using [nvim-treesitter][]

* Add gotmpl parser following [nvim-treesitter instructions][]
  ```lua
  local parser_config = require'nvim-treesitter.parsers'.get_parser_configs()
  parser_config.gotmpl = {
    install_info = {
      url = "https://github.com/ngalaiko/tree-sitter-go-template",
      files = {"src/parser.c"}
    },
    filetype = "gotmpl",
    used_by = {"gohtmltmpl", "gotexttmpl", "gotmpl", "yaml"}
  }
  ```
  Note that `yaml` is listed under `used_by`. I've set this to highlight [helm][] templates as Go Templates instead of yaml.
  To ensure that yaml highlighting is still working, you should set up [language injection][] for gotmpl filetypes.

* Run `:TSInstallFromGrammar gotmpl` to download and compile the grammar into your tree-sitter installation
* Setup filetype detection in `~/.config/nvim/ftdetect/gotmpl.vim`:
  ```vimscript
  autocmd BufNewFile,BufRead * if search('{{.\+}}', 'nw') | setlocal filetype=gotmpl | endif
  ```
* Define language injection for yaml in ~/.config/nvim/queries/gotmpl/injections.scm:
  ```scheme
  ((text) @injection.content
   (#set! injection.language "yaml")
   (#set! injection.combined))
  ```
* Define highlights in `~/.config/nvim/queries/gotmpl/highlights.scm`, for example:
  ```scheme
  ; Identifiers

  [
      (field)
      (field_identifier)
  ] @property

  (variable) @variable

  ; Function calls

  (function_call
    function: (identifier) @function)

  (method_call
    method: (selector_expression
      field: (field_identifier) @method))

  ; Operators

  "|" @operator
  ":=" @operator

  ; Builtin functions

  ((identifier) @function.builtin
   (#match? @function.builtin "^(and|call|html|index|slice|js|len|not|or|print|printf|println|urlquery|eq|ne|lt|ge|gt|ge)$"))

  ; Delimiters

  "." @punctuation.delimiter
  "," @punctuation.delimiter

  "{{" @punctuation.bracket
  "}}" @punctuation.bracket
  "{{-" @punctuation.bracket
  "-}}" @punctuation.bracket
  ")" @punctuation.bracket
  "(" @punctuation.bracket

  ; Keywords

  [
      "else"
      "else if"
      "if"
      "with"
  ] @conditional

  [
      "range"
      "end"
      "template"
      "define"
      "block"
  ] @keyword

  ; Literals

  [
    (interpreted_string_literal)
    (raw_string_literal)
    (rune_literal)
  ] @string

  (escape_sequence) @string.special

  [
    (int_literal)
    (float_literal)
    (imaginary_literal)
  ] @number

  [
      (true)
      (false)
  ] @boolean

  [
    (nil)
  ] @constant.builtin

  (comment) @comment
  (ERROR) @error
  ```

[nvim-treesitter instructions]: https://github.com/nvim-treesitter/nvim-treesitter#adding-parsers
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
[helm]: https://helm.sh
[language injection]: https://tree-sitter.github.io/tree-sitter/syntax-highlighting#language-injection
