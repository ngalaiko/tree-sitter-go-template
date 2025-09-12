package tree_sitter_gotemplate

// #cgo CFLAGS: -std=c11 -fPIC
// #include "../../src/parser.c"
import "C"

import (
	"unsafe"
)

func Language() unsafe.Pointer {
	return unsafe.Pointer(C.tree_sitter_gotmpl())
}
