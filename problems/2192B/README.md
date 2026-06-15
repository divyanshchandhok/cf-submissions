# Flipping Binary String
**Problem ID:** 2192B | **Rating:** 1000 | **Tags:** `constructive algorithms`, `strings`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 400 KB | **Solved At:** 2026-02-22 02:09
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2192/B)

---
## Description

You are given a binary string $s$ of length $n$. You can perform the following operation on the string:

- Choose an index $i$, and flip the bit present at all other indices except for the index $i$. In other words, choose an integer $i$ ($1 \le i \le n$), and for all $j$ such that $1 \le j \le n$ and $j \ne i$, if $s_j = 0$, then set $s_j:=1$, otherwise set $s_j:=0$.

You can perform the operation any number of times, but each index can be chosen by **at most one** operation.

Your task is to make all bits present in the string $s$ equal $0$, or report that it is impossible to do so. You don't have to minimize the number of operations.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \le n \le 2 \cdot 10^5$).

The second line of each test case contains the binary string $s$ of length $n$.

It is guaranteed that the sum of $n$ over all test cases does not exceed $2 \cdot 10^5$.

## Output Specification

For each test case, output $-1$ if it is impossible to transform all bits to $0$. Otherwise, output two lines in the following format:

- In the first line, print the number of operations $x$ ($0 \leq x \leq n$).
- In the second line of each test case, print $x$ numbers – the indices you select in each operation in order. You should guarantee that each index is chosen at most once.

If there are multiple possible solutions, you may output any.

## Sample Tests

### Sample 1
**Input:**
```
4
3
101
3
100
4
0000
4
1010
```

**Output:**
```
1
2 
-1
0
2
1 3 
```

## Note

In the first test case, performing the operation on index $2$ means flipping bits present at index $1$ and $3$. So the new string formed will be $000$.

In the second test case, it can be shown that we cannot make string $a$ equal to $000$ using the described operations.

