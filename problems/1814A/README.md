# Coins
**Problem ID:** 1814A | **Rating:** 800 | **Tags:** `implementation`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 93 ms | **Memory:** 100 KB | **Solved At:** 2025-05-25 22:30
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1814/A)

---
## Description

In Berland, there are two types of coins, having denominations of $2$ and $k$ burles.

Your task is to determine whether it is possible to represent $n$ burles in coins, i. e. whether there exist non-negative integers $x$ and $y$ such that $2 \cdot x + k \cdot y = n$.

## Input Specification

The first line contains a single integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

The only line of each test case contains two integers $n$ and $k$ ($1 \le k \le n \le 10^{18}$; $k \ne 2$).

## Output Specification

For each test case, print `YES` if it is possible to represent $n$ burles in coins; otherwise, print `NO`. You may print each letter in any case (`YES`, `yes`, `Yes` will all be recognized as positive answer, `NO`, `no` and `nO` will all be recognized as negative answer).

## Sample Tests

### Sample 1
**Input:**
```
4
5 3
6 1
7 4
8 8
```

**Output:**
```
YES
YES
NO
YES
```

## Note

In the first test case, you can take one coin with denomination $2$ and one coin with denomination $k = 3$.

In the second test case, you can take three coins with denomination $2$. Alternatively, you can take six coins with denomination $k = 1$.

In the third test case, there is no way to represent $7$ burles.

In the fourth test case, you can take one coin with denomination $k = 8$.

