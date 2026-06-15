# Equal Subsequences
**Problem ID:** 2118A | **Rating:** 800 | **Tags:** `constructive algorithms`, `greedy`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 31 ms | **Memory:** 100 KB | **Solved At:** 2025-06-12 23:15
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2118/A)

---
## Description

We call a bitstring$^{\text{∗}}$ perfect if it has the same number of $\mathtt{101}$ and $\mathtt{010}$ subsequences$^{\text{†}}$. Construct a perfect bitstring of length $n$ where the number of $\mathtt{1}$ characters it contains is exactly $k$.

It can be proven that the construction is always possible. If there are multiple solutions, output any of them.

$^{\text{∗}}$A bitstring is a string consisting only of the characters $\mathtt{0}$ and $\mathtt{1}$.

$^{\text{†}}$A sequence $a$ is a subsequence of a string $b$ if $a$ can be obtained from $b$ by the deletion of several (possibly zero or all) characters.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 500$). The description of the test cases follows.

The first line of each test case contains two integers $n$ and $k$ ($1 \le n \le 100$, $0 \le k \le n$) — the size of the bitstring and the number of $\mathtt{1}$ characters in the bitstring.

## Output Specification

For each test case, output the constructed bitstring. If there are multiple solutions, output any of them.

## Sample Tests

### Sample 1
**Input:**
```
5
4 2
5 3
5 5
6 2
1 1
```

**Output:**
```
1010
10110
11111
100010
1
```

## Note

In the first test case, the number of $\mathtt{101}$ and $\mathtt{010}$ subsequences is the same, both being $1$, and the sequence contains exactly two $\mathtt{1}$ characters.

In the second test case, the number of $\mathtt{101}$ and $\mathtt{010}$ subsequences is the same, both being $2$, and the sequence contains exactly three $\mathtt{1}$ characters.

In the third test case, the number of $\mathtt{101}$ and $\mathtt{010}$ subsequences is the same, both being $0$, and the sequence contains exactly five $\mathtt{1}$ characters.

