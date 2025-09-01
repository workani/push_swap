<h1 align="center">🚀 push_swap</h1>
<p align="center">An efficient stack-sorting algorithm powered by <strong>Turk Sort</strong></p>

<p align="center">
  <img src="https://i.postimg.cc/fb07syJt/image.jpg" alt="push_swap 42 score" width="350" />
</p>


## 🚧 Constraints
- Only the following external functions are allowed: read, write, malloc, free, exit
- On error, the program must print Error followed by a newline and exit with a non-zero status
- All inputs are validated before processing to avoid undefined behavior. No duplicates or non numeric input.


## 📋 Requirements
- GCC or Clang
- Make

## 🛠️ Build
Use make in your terminal to build and manage the project:

```bash
make
```
Common targets:
- `make` — builds `push_swap`
- `make clean` — removes object files
- `make fclean` — removes objects and binaries
- `make re` — full rebuild

## ▶️ Usage
You can pass numbers either as separate arguments or as a single-quoted string:

```bash
./push_swap 2 1 3 6 5 8

./push_swap "2 1 3 6 5 8"
```

The program prints the sequence of operations to stdout, one per line, for the checker to validate and score.

Invalid input examples (program prints `Error` and exits with a non-zero status):
- Non-numeric token: `./push_swap 2 a 3`
- Duplicate: `./push_swap 1 2 2`
- Out of 32-bit int range: `./push_swap 2147483648`


## 🛃 Testing
Manual quick checks:
```bash
./push_swap 2 1
./push_swap 3 2 1
./push_swap 2 3 1 5 4
./push_swap "-3 0 42 7 -1 5 5"    # duplicate -> Error
./push_swap 2147483648            # overflow -> Error
```


Optionally measure move counts:
```bash
ARG=$(seq 1 100 | shuf | tr '\n' ' '); OPS=$(./push_swap $ARG | wc -l); echo $OPS
```

## 🧬 Project Structure
```
include/
  list.h        # t_list struct and typedef
  ops_base.h    # low-level stack ops API
  push_swap.h   # public API, parsing, sorting
src/
  ops/          # op_* and ops_base/execute
  parser/       # input parsing and utils
  sort/         # cost calc, helpers, main sort
  stack/        # list utils, search, push/pop
libft/          # local lib (printf, utils, etc.)
Makefile        # build rules
```
