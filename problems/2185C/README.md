# Shifted MEX
**Problem ID:** 2185C | **Rating:** 900 | **Tags:** `implementation`, `sortings`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 100 KB | **Solved At:** 2026-02-06 20:47
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2185/C)

---
## Description

You are given an array of $n$ integers $a_1, a_2, \ldots, a_n$. You are allowed to perform the following operation once.

- Select an integer $x$ (which may be negative), and for each value $i$ $(1 \leq i \leq n)$, set $a_i = a_i + x$.

For example, if $a = [1, 3, 4, 2]$, and you perform the operation with $x = 3$, $a$ is now equal to $[4, 6, 7, 5]$.

Output the maximum possible value of $\operatorname{MEX}(a)$$^{\text{∗}}$ after the operation is performed.

$^{\text{∗}}$$\operatorname{MEX}(a)$ is defined as the smallest non-negative integer that is not present in the array. For example, $\operatorname{MEX}([1, 2, 0, 5])$ is $3$, and $\operatorname{MEX}([1, 2, 4, 9])$ is $0$.

## Input Specification

The first line of the input contains a single integer $t$ ($1 \leq t \leq 1000$) — the number of test cases.

The first line of each test case contains a single integer $n$ ($1 \le n \le 3000$) — the length of array $a$.

The second line contains $n$ integers $a_1, a_2, \ldots, a_n$ ($-10^9 \le a_i \le 10^9$) — the array $a$.

It is guaranteed that the sum of $n$ over all test cases does not exceed $3000$.

## Output Specification

For each test case, output the maximum possible value of $\operatorname{MEX}(a)$ after the operation has been performed.

## Sample Tests

### Sample 1
**Input:**
```
6
1
4
5
0 1 1 2 3
2
1 1
4
4 2 3 6
5
2 4 1 0 -1
6
-1 1 2 3 5 6
```

**Output:**
```
1
4
1
3
4
3
```

## Note

For the first test case, performing the operation with $x = -4$ makes $a = [0]$, and $\operatorname{MEX}([0]) = 1$.

For the second test case, the $\operatorname{MEX}$ is already $4$, which is the highest possible, so we can perform the operation with $x = 0$, which will not change the array.

