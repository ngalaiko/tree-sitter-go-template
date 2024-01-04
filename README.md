# tree-sitter-go-template

[![Build/test](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml/badge.svg)](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml)

[Golang templates][] grammar for [tree-sitter][].
This includes languages that use Go templates like [helm][].

[tree-sitter]: https://github.com/tree-sitter/tree-sitter
[Golang templates]: https://golang.org/pkg/text/template/

## Announcement

I've stopped using helm (which I mostly written this package for) on a daily
basis, so I don't really keep up with the development of tree sitter, and
nvim-tree-sitter. So this project won't receive any attention from me in the
near future.

If you are interested in mainaining the project, feel free to fork the repo, and
if the fork is maintained I will gladly delegate you this repository or link it.

## Installation

Install with your favorite package manager.

Lazy:

```lua
{
  "ngalaiko/tree-sitter-go-template",
  dependencies = "nvim-treesitter/nvim-treesitter",
  config = true,
}
```

Then either open a `.gotmpl` file or run `:TSInstall gotmpl` once. Afterwards
you should be able to open helm files and the helm highlighting should work
after installing. If you get an error message after the parser has been
installed, just reload the file and it should work.

[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
[helm]: https://helm.sh
