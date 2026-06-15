# Klee's SUPER DUPER LARGE Array!!!
**Problem ID:** 2009E | **Rating:** 1400 | **Tags:** `binary search`, `math`, `ternary search`
**Language:** PyPy 3-64 | **Time:** 171 ms | **Memory:** 4200 KB | **Solved At:** 2025-05-28 21:05
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2009/E)

---
## Description

Klee has an array $a$ of length $n$ containing integers $[k, k+1, ..., k+n-1]$ in that order. Klee wants to choose an index $i$ ($1 \leq i \leq n$) such that $x = |a_1 + a_2 + \dots + a_i - a_{i+1} - \dots - a_n|$ is minimized. Note that for an arbitrary integer $z$, $|z|$ represents the absolute value of $z$.

Output the minimum possible value of $x$.

## Input Specification

The first line contains $t$ ($1 \leq t \leq 10^4$) — the number of test cases.

Each test case contains two integers $n$ and $k$ ($2 \leq n, k \leq 10^9$) — the length of the array and the starting element of the array.

## Output Specification

For each test case, output the minimum value of $x$ on a new line.

## Sample Tests

### Sample 1
**Input:**
```
4
2 2
7 2
5 3
1000000000 1000000000
```

**Output:**
```
1
5
1
347369930
```

## Note

In the first sample, $a = [2, 3]$. When $i = 1$ is chosen, $x = |2-3| = 1$. It can be shown this is the minimum possible value of $x$.

In the third sample, $a = [3, 4, 5, 6, 7]$. When $i = 3$ is chosen, $x = |3 + 4 + 5 - 6 - 7| = 1$. It can be shown this is the minimum possible value of $x$.

