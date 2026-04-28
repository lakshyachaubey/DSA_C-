# Print 1 to N using Recursion (Extra Parameter)

## File
`06_print_1_to_n_extra_para.cpp`

## What this code does
This program prints numbers from `1` to `n` using recursion.

It uses an extra parameter `i` (current number) in:

```cpp
void print(int i, int n)
```

- `i` = current value to print
- `n` = final value

## Logic
1. **Base case**: if `i > n`, stop recursion.
2. Print `i`.
3. Call `print(i + 1, n)`.

So the sequence becomes: `1, 2, 3, ..., n`.

## Dry Run (Example: `n = 4`)
Initial call from `main`:

```cpp
print(1, 4)
```

Call flow:
1. `print(1,4)` -> `1` printed -> calls `print(2,4)`
2. `print(2,4)` -> `2` printed -> calls `print(3,4)`
3. `print(3,4)` -> `3` printed -> calls `print(4,4)`
4. `print(4,4)` -> `4` printed -> calls `print(5,4)`
5. `print(5,4)` -> `i > n` -> return , (4,4)return, (3,4)return, (2,4)return, (1,4)return

Output:
```text
1
2
3
4
```

## Time and Space
- **Time Complexity**: `O(n)`
- **Auxiliary Space (recursion stack)**: `O(n)`
