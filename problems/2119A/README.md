# Add or XOR
**Problem ID:** 2119A | **Rating:** 800 | **Tags:** `bitmasks`, `greedy`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2025-07-05 20:19
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2119/A)

---
## Description

*r-906 & IA AI - Psychologic Disco*

You are given two non-negative integers $a, b$. You can apply two types of operations on $a$ any number of times and in any order:

- $a \gets a + 1$. The cost of this operation is $x$;
- $a \gets a \oplus 1$, where $\oplus$ denotes the bitwise XOR operation. The cost of this operation is $y$.

Now you are asked to make $a = b$. If it's possible, output the minimum cost; otherwise, report it.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The only line of each test case contains four integers $a, b, x, y$ ($1 \le a, b \le 100, 1 \le x, y \le 10^7$) — the two integers given to you and the respective costs of two types of operations.

## Output Specification

For each test case, output an integer — the minimum cost to make $a = b$, or $-1$ if it is impossible.

## Sample Tests

### Sample 1
**Input:**
```
7
1 4 1 2
1 5 2 1
3 2 2 1
1 3 2 1
2 1 1 2
3 1 1 2
1 100 10000000 10000000
```

**Output:**
```
3
6
1
3
-1
-1
990000000
```

## Note

In the first test case, the optimal strategy is to apply $a \gets a + 1$ three times. The total cost is $1+1+1=3$.

In the second test case, the optimal strategy is to apply $a \gets a + 1$, $a \gets a \oplus 1$, $a \gets a + 1$, $a \gets a \oplus 1$ in order. The total cost is $2+1+2+1=6$.

In the fifth test case, it can be proved that there isn't a way to make $a = b$.

