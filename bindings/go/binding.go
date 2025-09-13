package tree_sitter_gotemplate

// #cgo CFLAGS: -std=c11 -fPIC -I../../src/
// #include "../../src/parser.c"
import "C"

import (
	"unsafe"

	sitter "github.com/smacker/go-tree-sitter"
)

func GetLanguage() *sitter.Language {
	ptr := unsafe.Pointer(C.tree_sitter_gotmpl())
	return sitter.NewLanguage(ptr)
}
