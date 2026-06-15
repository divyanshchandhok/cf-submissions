# Reverse a Permutation
**Problem ID:** 2193B | **Rating:** 800 | **Tags:** `greedy`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 156 ms | **Memory:** 11900 KB | **Solved At:** 2026-01-28 23:52
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2193/B)

---
## Description

A permutation of length $n$ is an array consisting of $n$ distinct integers from $1$ to $n$ in arbitrary order. For example, $[2,3,1,5,4]$ is a permutation, but $[1,2,2]$ and $[1,3,4]$ are not permutations.

You are given a permutation $p$ of length $n$. You can perform the following operation **exactly once**:

- Choose two integers $l,$ $r$ ($1\le l\le r\le n$).
- Reverse the segment $[l, r]$ in the permutation $p$.
 Your task is to output the lexicographically maximum permutation that can be obtained by performing this operation. A permutation $a$ is lexicographically greater than a permutation $b$ if for the first position $i$ where they differ, it holds that $a_i\gt b_i$.

## Input Specification

Each test consists of several test cases. The first line contains a single integer $t$ ($1\le t\le 10^4$) — the number of test cases. The description of the test cases follows.

The first line of each test case contains the number $n$ ($1\le n\le 2\cdot 10^5$).

The second line of each test case contains $n$ distinct integers $p_1, p_2,...,p_n$ $(1\le p_i\le n)$.

It is guaranteed that the sum of the values of $n$ across all test cases does not exceed $2\cdot 10^5$.

## Output Specification

For each test case, output the lexicographically maximum permutation that can be obtained with one operation.

## Sample Tests

### Sample 1
**Input:**
```
4
4
3 2 1 4
3
3 1 2
4
4 3 2 1
2
2 1
```

**Output:**
```
4 1 2 3 
3 2 1 
4 3 2 1 
2 1 
```

## Note

For the first test case, the best segment is $[1, 4]$. After reversing, $a = [4, 1, 2, 3]$. For the second test case, the best segment is $[2, 3]$. After reversing, $a = [3, 2, 1]$.

