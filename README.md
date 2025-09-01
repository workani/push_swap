## push_swap

High-performance sorting project using a minimal set of stack operations on two stacks (A and B). The goal is to sort integers with as few operations as possible.

### Why this project?
push_swap demonstrates algorithm design, data-structure proficiency (doubly linked lists), and writing tight, safe C code that respects strict constraints on allowed functions and output format.

## Features
- Doubly linked list stack implementation (`t_list`)
- All required operations: sa/sb/ss, pa/pb, ra/rb/rr, rra/rrb/rrr
- Robust parsing and validation (duplicates, non-numeric, overflow)
- Cost-based strategy to choose the cheapest next move
- Small-sort optimization for 2–3 elements

## Constraints
- Allowed external functions: `read`, `write`, `malloc`, `free`, `exit`
- Error output strictly: `Error` followed by a newline
- Undefined behavior is avoided; inputs are validated before processing

## Requirements
- GCC or Clang
- Make

## Build
```bash
make
```

Common targets:
- `make` — builds `push_swap`
- `make clean` — removes object files
- `make fclean` — removes objects and binaries
- `make re` — full rebuild

## Usage
You can pass numbers as separate arguments or as a single quoted string.

```bash
./push_swap 2 1 3 6 5 8

./push_swap "2 1 3 6 5 8"
```

The program prints the sequence of operations to stdout, one per line, for the checker to validate and score.

Invalid input examples (program prints `Error` and exits with a non-zero status):
- Non-numeric token: `./push_swap 2 a 3`
- Duplicate: `./push_swap 1 2 2`
- Out of 32-bit int range: `./push_swap 2147483648`

## Algorithm Overview
The solution uses a cost-driven approach with two stacks:
- Represent each node as `t_list` with fields: `value`, `pos`, `pair_pos`, `cost_a`, `cost_b`, and `prev/next` pointers.
- For >3 elements:
  - Push a couple of elements to stack B to bootstrap.
  - Repeatedly:
    - Compute positions and rotation costs in both stacks.
    - Pair each candidate with its optimal insertion spot across stacks.
    - Select the cheapest element (`get_cheapest_element`) using `calculate_cost`.
    - Execute combined rotations to minimize moves and push between stacks.
  - Small-sort the remaining 3 elements in A.
  - Merge back from B to A using the same pairing/cost logic, then rotate A to final order.

For 2–3 elements, a dedicated small-sort routine is used for minimal steps.

### Time/Move Complexity (practical)
- The algorithm is heuristic and aims to minimize moves via combined rotations; typical performance is competitive with common push_swap strategies.
- Small inputs (≤3): optimal or near-optimal.
- Larger inputs: near O(n log n) behavioral patterns for many distributions, with worst-cases bounded by the constraints of the operation set.

## Testing
Manual quick checks:
```bash
./push_swap 2 1
./push_swap 3 2 1
./push_swap 2 3 1 5 4
./push_swap "-3 0 42 7 -1 5 5"   # duplicate -> Error
./push_swap 2147483648            # overflow -> Error
```

If you have a checker (e.g., 42’s `checker_linux`), pipe the output:
```bash
ARG="3 2 1 6 5 4"; ./push_swap $ARG | ./checker_linux $ARG
```

Optionally measure move counts:
```bash
ARG=$(seq 1 100 | shuf | tr '\n' ' '); OPS=$(./push_swap $ARG | wc -l); echo $OPS
```

## Project Structure
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

## Notes
- Error handling frees allocated memory before exiting.
- Output is limited to the operation sequence and `Error` on invalid inputs.

## License
This repository is provided as-is for educational purposes. Choose and add a license if you plan to publish/distribute.


