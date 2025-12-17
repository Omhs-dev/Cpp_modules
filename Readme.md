# C++ Modules

This repo contains C++ modules `cpp00` to `cpp09`, each with small exercises (`ex00`, `ex01`, …). Every exercise is self-contained and usually has its own `Makefile`.

## Prerequisites
- macOS with clang++ (or g++)
- make
- VS Code (optional)

## Build & Run
From an exercise folder (e.g., `cpp00/ex00`):
```sh
make          # build
./megaphone   # run (binary name varies per exercise)
make clean    # remove objects
make fclean   # full cleanup
```

Example for `cpp00/ex01`:
```sh
make
./phonebook
```

## Tips
- Work inside each exercise directory.
- Use VS Code’s integrated terminal to run `make`.
- Clean artifacts with `make clean` or `make fclean`.

## Structure
- cpp00/…cpp09/
  - ex00/, ex01/, …
  - Source files + Makefile per exercise