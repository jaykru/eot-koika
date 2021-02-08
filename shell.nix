{ pkgs ? import <nixpkgs> {} }:
pkgs.mkShell {
  nativeBuildInputs = with pkgs; [ python38Packages.pip
                                   python38Packages.virtualenv
                                   python3Full
                                   python38Packages.ipython
                                   python38Packages.tkinter
                                   python38Packages.ipython
                                   gmp
                                   clang
                                   coq_8_11


                                   ocamlPackages.base
                                   ocamlPackages.core
                                   ocamlPackages.stdio
                                   ocamlPackages.parsexp
                                   # ocamlPackages.hashcons missing from nixpkgs
                                   ocamlPackages.zarith                                   
                                   gtkwave
                                   
                                   verilog ]; # icarus verilog simulator
}
