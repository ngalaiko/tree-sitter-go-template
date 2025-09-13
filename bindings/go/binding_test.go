package tree_sitter_gotemplate_test

import (
	"context"
	"testing"

	"github.com/ngalaiko/tree-sitter-go-template/bindings/go"
	sitter "github.com/smacker/go-tree-sitter"
)

func TestGrammar(t *testing.T) {
	n, err := sitter.ParseCtx(context.Background(), []byte("{{ nil }}"), tree_sitter_gotemplate.GetLanguage())
	if err != nil {
		t.Error(err)
	}

	if n.String() != "(template (nil))" {
		t.Errorf("Parsing did not work")
	}
}
