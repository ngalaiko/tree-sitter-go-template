from unittest import TestCase

from tree_sitter import Language, Parser
import tree_sitter_go_template


class TestLanguage(TestCase):
    def test_can_load_grammar(self):
        try:
            Parser(Language(tree_sitter_go_template.language()))
        except Exception:
            self.fail("Error loading Go Template grammar")
