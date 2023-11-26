{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell {
  buildInputs = with pkgs; [
    nodejs
    nodePackages.node-gyp
    tree-sitter
    python3
    graphviz
  ];

}
