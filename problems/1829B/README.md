# Blank Space
**Problem ID:** 1829B | **Rating:** 800 | **Tags:** `implementation`
**Language:** PyPy 3-64 | **Time:** 124 ms | **Memory:** 2900 KB | **Solved At:** 2025-03-18 23:45
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1829/B)

---
## Description

You are given a binary array $a$ of $n$ elements, a binary array is an array consisting only of $0$s and $1$s.

A blank space is a segment of **consecutive** elements consisting of only $0$s.

Your task is to find the length of the longest blank space.

## Input Specification

The first line contains a single integer $t$ ($1 \leq t \leq 1000$) — the number of test cases.

The first line of each test case contains a single integer $n$ ($1 \leq n \leq 100$) — the length of the array.

The second line of each test case contains $n$ space-separated integers $a_i$ ($0 \leq a_i \leq 1$) — the elements of the array.

## Output Specification

For each test case, output a single integer — the length of the longest blank space.

## Sample Tests

### Sample 1
**Input:**
```
5
5
1 0 0 1 0
4
0 1 1 1
1
0
3
1 1 1
9
1 0 0 0 1 0 0 0 1
```

**Output:**
```
2
1
1
0
3
```

