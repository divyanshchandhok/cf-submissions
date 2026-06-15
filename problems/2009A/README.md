# Minimize!
**Problem ID:** 2009A | **Rating:** 800 | **Tags:** `brute force`, `math`
**Language:** PyPy 3-64 | **Time:** 61 ms | **Memory:** 0 KB | **Solved At:** 2025-05-28 19:53
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2009/A)

---
## Description

You are given two integers $a$ and $b$ ($a \leq b$). Over all possible integer values of $c$ ($a \leq c \leq b$), find the minimum value of $(c - a) + (b - c)$.

## Input Specification

The first line contains $t$ ($1 \leq t \leq 55$) — the number of test cases.

Each test case contains two integers $a$ and $b$ ($1 \leq a \leq b \leq 10$).

## Output Specification

For each test case, output the minimum possible value of $(c - a) + (b - c)$ on a new line.

## Sample Tests

### Sample 1
**Input:**
```
3
1 2
3 10
5 5
```

**Output:**
```
1
7
0
```

## Note

In the first test case, you can choose $c = 1$ and obtain an answer of $(1 - 1) + (2 - 1) = 1$. It can be shown this is the minimum value possible.

In the second test case, you can choose $c = 6$ and obtain an answer of $(6 - 3) + (10 - 6) = 7$. It can be shown this is the minimum value possible.

