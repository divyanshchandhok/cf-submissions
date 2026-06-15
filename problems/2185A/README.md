# Perfect Root
**Problem ID:** 2185A | **Rating:** 800 | **Tags:** `constructive algorithms`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 31 ms | **Memory:** 0 KB | **Solved At:** 2026-02-06 20:35
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2185/A)

---
## Description

A positive integer $x$ is a perfect root if there exists an integer $y$ such that $\sqrt{y} = x$. For example, $5$ is a perfect root because $\sqrt{25} = 5$.

For each test case, output $n$ distinct perfect roots. Note that the values only need to be distinct within each test case; you can use the same value in different test cases.

## Input Specification

The first line of the input contains a single integer $t$ ($1 \leq t \leq 20$) — the number of test cases.

The only line of each test case contains an integer $n$ ($1 \leq n \leq 20$) — the number of perfect roots to output.

## Output Specification

For each test case, output $n$ distinct perfect roots. Each perfect root $x$ must be in the range $1 \leq x \leq 10^9$.

## Sample Tests

### Sample 1
**Input:**
```
3
1
2
5
```

**Output:**
```
1
2 4
2 102 43 1 21
```

## Note

For the first test case:

- $1$ is a perfect root because $\sqrt{1} = 1$.

For the second test case:

- $2$ is a perfect root because $\sqrt{4} = 2$.
- $4$ is a perfect root because $\sqrt{16} = 4$.

