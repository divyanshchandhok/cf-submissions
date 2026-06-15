# Twin Permutations
**Problem ID:** 1831A | **Rating:** 800 | **Tags:** `constructive algorithms`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 343 ms | **Memory:** 100 KB | **Solved At:** 2025-06-12 02:26
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1831/A)

---
## Description

You are given a permutation$^\dagger$ $a$ of length $n$.

Find any permutation $b$ of length $n$ such that $a_1+b_1 \le a_2+b_2 \le a_3+b_3 \le \ldots \le a_n+b_n$.

It can be proven that a permutation $b$ that satisfies the condition above always exists.

$^\dagger$ A permutation of length $n$ is an array consisting of $n$ distinct integers from $1$ to $n$ in arbitrary order. For example, $[2,3,1,5,4]$ is a permutation, but $[1,2,2]$ is not a permutation ($2$ appears twice in the array), and $[1,3,4]$ is also not a permutation ($n=3$ but there is $4$ in the array).

## Input Specification

Each test contains multiple test cases. The first line of input contains a single integer $t$ ($1 \le t \le 2000$) — the number of test cases. The description of test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 100$) — the length of permutations $a$ and $b$.

The second line of each test case contains $n$ distinct integers $a_1,a_2,\ldots,a_n$ ($1 \le a_i \le n$) — the elements of permutation $a$. All elements of $a$ are distinct.

Note that there is no bound on the sum of $n$ over all test cases.

## Output Specification

For each test case, output **any** permutation $b$ which satisfies the constraints mentioned in the statement. It can be proven that a permutation $b$ that satisfies the condition above always exists.

## Sample Tests

### Sample 1
**Input:**
```
5
5
1 2 4 5 3
2
1 2
1
1
3
3 2 1
4
1 4 3 2
```

**Output:**
```
1 2 4 3 5
2 1
1
1 2 3
1 2 3 4
```

## Note

In the first test case $a=[1, 2, 4, 5, 3]$. Then the permutation $b=[1, 2, 4, 3, 5]$ satisfies the condition because $1 + 1 \le 2 + 2 \le 4 + 4 \le 5 + 3 \le 3 + 5$.

