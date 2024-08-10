# shell.nix

{ pkgs ? import <nixpkgs> { } }:

pkgs.mkShell
{
  nativeBuildInputs = with pkgs; [
    gcc
    clang-tools
    clang

    gnumake
    bear

    #avr-gcc
    pkgsCross.avr.buildPackages.gcc
    #avr-gcc
    avrdude
    #binutils-avr
  ];
  buildInputs = with pkgs; [
#    avrlibc
  ];
}
