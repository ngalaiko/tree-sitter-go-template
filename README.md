# tree-sitter-go-template

[![Build/test](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml/badge.svg)](https://github.com/ngalaiko/tree-sitter-go-template/actions/workflows/ci.yaml)

[Golang templates][] grammar for [tree-sitter][].
This includes languages that use Go templates like [helm][].

## Announcement

I've stopped using helm (which I mostly written this package for) on a daily
basis, so I don't really keep up with the development of tree sitter, and
nvim-tree-sitter. So this project won't receive any attention from me in the
near future.

If you are interested in mainaining the project, feel free to fork the repo, and
if the fork is maintained I will gladly delegate you this repository or link it.

## Dependencies

- [nvim-treesitter][]

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

The parsers will be installed once you restart neovim.

## Configuration

If you only want to install a subset of the additional languages or none at all,
you can pass these via the `additional_langs` option. By default all additional
languages are installed.

```lua
{
  "ngalaiko/tree-sitter-go-template",
  dependencies = "nvim-treesitter/nvim-treesitter",
  opts = {
    additional_langs = { "helm" },
  },
}
```

## Available additional languages

- [helm][]

[Golang templates]: https://golang.org/pkg/text/template/
[helm]: https://helm.sh
[nvim-treesitter]: https://github.com/nvim-treesitter/nvim-treesitter
[tree-sitter]: https://github.com/tree-sitter/tree-sitter
