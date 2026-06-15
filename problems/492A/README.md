# Vanya and Cubes
**Problem ID:** 492A | **Rating:** 800 | **Tags:** `implementation`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2025-09-06 10:03
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/492/A)

---
## Description

Vanya got *n* cubes. He decided to build a pyramid from them. Vanya wants to build the pyramid as follows: the top level of the pyramid must consist of 1 cube, the second level must consist of 1 + 2 = 3 cubes, the third level must have 1 + 2 + 3 = 6 cubes, and so on. Thus, the *i*-th level of the pyramid must have 1 + 2 + ... + (*i* - 1) + *i* cubes.

Vanya wants to know what is the maximum height of the pyramid that he can make using the given cubes.

## Input Specification

The first line contains integer *n* (1 ≤ *n* ≤ 104) — the number of cubes given to Vanya.

## Output Specification

Print the maximum possible height of the pyramid in the single line.

## Sample Tests

### Sample 1
**Input:**
```
1
```

**Output:**
```
1
```

### Sample 2
**Input:**
```
25
```

**Output:**
```
4
```

## Note

Illustration to the second sample:

