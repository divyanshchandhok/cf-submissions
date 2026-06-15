# Place of the Olympiad
**Problem ID:** 2091D | **Rating:** 1200 | **Tags:** `binary search`, `greedy`, `math`
**Language:** PyPy 3-64 | **Time:** 202 ms | **Memory:** 3900 KB | **Solved At:** 2025-03-25 21:17
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2091/D)

---
## Description

For the final of the first Olympiad by IT Campus "NEIMARK", a rectangular venue was prepared. You may assume that the venue is divided into $n$ rows, each containing $m$ spots for participants' desks. A total of $k$ participants have registered for the final, and each participant will sit at an individual desk. Now, the organizing committee must choose the locations for the desks in the venue.

Each desk occupies one of the $m$ spots in a row. Moreover, if several desks occupy consecutive spots in the same row, we call such a group of desks a *bench*, and the number of desks in the group is the bench's length. For example, seating $7$ participants on a $3 \times 4$ venue (with $n = 3, m = 4$) can be arranged as follows:

In the figure above, the first row has one bench of length $3$, the second row has one bench of length $2$, and the third row has two benches of length $1$.

The organizing committee wants to choose the locations so that the length of the longest bench is as small as possible. In particular, the same $7$ desks can be arranged in a more optimal way, so that the lengths of all benches do not exceed $2$:

Given the integers $n$, $m$, and $k$, determine the minimum possible length of the longest bench.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \leq t \leq 10^4$). The description of the test cases follows.

A single line of each test case contains three positive integers — $n$, $m$, $k$ ($1 \leq n, m, k \leq 10^9$, $k \leq n\cdot m$).

## Output Specification

For each test case, output a single number — the minimum possible length of the longest bench.

## Sample Tests

### Sample 1
**Input:**
```
5
3 4 7
5 5 5
1 13 2
2 4 7
1 5 4
```

**Output:**
```
2
1
1
4
2
```

