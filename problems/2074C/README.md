# XOR and Triangle
**Problem ID:** 2074C | **Rating:** 1100 | **Tags:** `bitmasks`, `brute force`, `geometry`, `greedy`, `probabilities`
**Language:** PyPy 3-64 | **Time:** 171 ms | **Memory:** 4100 KB | **Solved At:** 2025-03-12 02:05
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2074/C)

---
## Description

This time, the pink soldiers have given you an integer $x$ ($x \ge 2$).

Please determine if there exists a **positive** integer $y$ that satisfies the following conditions.

- $y$ is **strictly** less than $x$.
- There exists a **non-degenerate triangle**$^{\text{∗}}$ with side lengths $x$, $y$, $x \oplus y$. Here, $\oplus$ denotes the bitwise XOR operation.

Additionally, if there exists such an integer $y$, output any.

$^{\text{∗}}$A triangle with side lengths $a$, $b$, $c$ is non-degenerate when $a+b  \gt  c$, $a+c  \gt  b$, $b+c  \gt  a$.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 2000$). The description of the test cases follows.

The only line of each test case contains a single integer $x$ ($2 \le x \le 10^9$).

## Output Specification

For each test case, print one integer on a separate line. The integer you must output is as follows:

- If there exists an integer $y$ satisfying the conditions, output the value of $y$ ($1 \le y  \lt  x$);
- Otherwise, output $-1$.

If there exist multiple integers that satisfy the conditions, you may output any.

## Sample Tests

### Sample 1
**Input:**
```
7
5
2
6
3
69
4
420
```

**Output:**
```
3
-1
5
-1
66
-1
320
```

## Note

In the first test case, there exists a non-degenerate triangle with side lengths $3$, $5$, and $3 \oplus 5 = 6$. Therefore, $y=3$ is a valid answer.

In the second test case, $1$ is the only possible candidate for $y$, but it cannot make a non-degenerate triangle. Therefore, the answer is $-1$.

