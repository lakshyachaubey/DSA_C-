# Print 1 to N using Recursion (After Call)

## File
`07_print_1_to_n_after_call.cpp`

## What this code does
This program prints numbers from `1` to `n` using recursion.

Unlike the "extra parameter" approach, this method relies on the **Call Stack** unwinding to print numbers in ascending order. This is often referred to as **Head Recursion** logic (processing after the call).

## Logic
```cpp
void print(int n)
```
1. **Base case**: If `n == 0`, return (stop recursion).
2. **Recursive Call**: Call `print(n - 1)` first.
3. **Operation (Kaam)**: Print `n`.

Because the `cout` statement is placed **after** the recursive call, it does not execute until the called function returns. This reverses the order of execution relative to the calls, resulting in `1` to `n`.

## Dry Run (Example: `n = 3`)
Initial call: `print(3)`

**Phase 1: Calling (Stack Building)**
1. `print(3)` calls `print(2)` (execution pauses at line 6)
2. `print(2)` calls `print(1)` (execution pauses at line 6)
3. `print(1)` calls `print(0)` (execution pauses at line 6)
4. `print(0)` -> Base case met (`n==0`) -> Returns.

**Phase 2: Returning (Stack Unwinding / Printing)**
1. Control returns to `print(1)` -> Prints `1` -> Returns.
2. Control returns to `print(2)` -> Prints `2` -> Returns.
3. Control returns to `print(3)` -> Prints `3` -> Returns.

Output:
```text
1
2
3
```

## Time and Space
- **Time Complexity**: `O(n)` (n recursive calls)
- **Auxiliary Space**: `O(n)` (Stack depth is n)