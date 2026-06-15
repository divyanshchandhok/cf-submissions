# Pride
**Problem ID:** 891A | **Rating:** 1500 | **Tags:** `brute force`, `dp`, `greedy`, `math`, `number theory`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2026-01-31 02:06
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/891/A)

---
## Description

You have an array *a* with length *n*, you can perform operations. Each operation is like this: choose two **adjacent** elements from *a*, say *x* and *y*, and replace one of them with *gcd*(*x*, *y*), where *gcd* denotes the greatest common divisor.

What is the minimum number of operations you need to make all of the elements equal to 1?

## Input Specification

The first line of the input contains one integer *n* (1 ≤ *n* ≤ 2000) — the number of elements in the array.

The second line contains *n* space separated integers *a*1, *a*2, ..., *a**n* (1 ≤ *a**i* ≤ 109) — the elements of the array.

## Output Specification

Print `-1`, if it is impossible to turn all numbers to 1. Otherwise, print the minimum number of operations needed to make all numbers equal to 1.

## Sample Tests

### Sample 1
**Input:**
```
5
2 2 3 4 6
```

**Output:**
```
5
```

### Sample 2
**Input:**
```
4
2 4 6 8
```

**Output:**
```
-1
```

### Sample 3
**Input:**
```
3
2 6 9
```

**Output:**
```
4
```

## Note

In the first sample you can turn all numbers to 1 using the following 5 moves:

- [2, 2, 3, 4, 6].
- [2, 1, 3, 4, 6]
- [2, 1, 3, 1, 6]
- [2, 1, 1, 1, 6]
- [1, 1, 1, 1, 6]
- [1, 1, 1, 1, 1]

We can prove that in this case it is not possible to make all numbers one using less than 5 moves.

