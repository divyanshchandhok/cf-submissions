# Square
**Problem ID:** 1921A | **Rating:** 800 | **Tags:** `greedy`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2025-08-26 18:50
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1921/A)

---
## Description

A square of positive (strictly greater than $0$) area is located on the coordinate plane, with sides parallel to the coordinate axes. You are given the coordinates of its corners, in random order. Your task is to find the area of the square.

## Input Specification

Each test consists of several testcases. The first line contains one integer $t$ ($1 \le t \le 100$) — the number of testcases. The following is a description of the testcases.

Each testcase contains four lines, each line contains two integers $x_i, y_i$ ($-1000\le x_i, y_i\le 1000$), coordinates of the corners of the square.

It is guaranteed that there is a square with sides parallel to the coordinate axes, with positive (strictly greater than $0$) area, with corners in given points.

## Output Specification

For each test case, print a single integer, the area of the square.

## Sample Tests

### Sample 1
**Input:**
```
3
1 2
4 5
1 5
4 2
-1 1
1 -1
1 1
-1 -1
45 11
45 39
17 11
17 39
```

**Output:**
```
9
4
784
```

