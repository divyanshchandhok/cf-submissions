# Only One Digit
**Problem ID:** 2126A | **Rating:** 800 | **Tags:** `brute force`, `implementation`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2025-08-02 15:21
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2126/A)

---
## Description

You are given an integer $x$. You need to find the smallest non-negative integer $y$ such that the numbers $x$ and $y$ share at least one common digit. In other words, there must exist a decimal digit $d$ that appears in both the representation of the number $x$ and the number $y$.

## Input Specification

The first line contains an integer $t$ ($1 \le t \le 1000$) — the number of test cases.

The first line of each test case contains one integer $x$ ($1 \le x \le 1000$).

## Output Specification

For each test case, output one integer $y$ — the minimum non-negative number that satisfies the condition.

## Sample Tests

### Sample 1
**Input:**
```
5
6
96
78
122
696
```

**Output:**
```
6
6
7
1
6
```

## Note

In the first test case, the numbers $6$ and $6$ share the common digit '`6`'. Moreover, there is no natural number smaller than this that shares a common digit.

In the second test case, the numbers $6$ and $96$ share the common digit '`6`'.

