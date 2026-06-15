# Asuna and the Mosquitoes
**Problem ID:** 2092C | **Rating:** 1200 | **Tags:** `constructive algorithms`, `greedy`, `math`
**Language:** PyPy 3-64 | **Time:** 249 ms | **Memory:** 25900 KB | **Solved At:** 2025-03-29 21:27
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2092/C)

---
## Description

For her birthday, each of Asuna's $n$ admirers gifted her a tower. The height of the tower from the $i$-th admirer is equal to $a_i$.

Asuna evaluates the beauty of the received gifts as $\max(a_1, a_2, \ldots, a_n)$. She can perform the following operation an arbitrary number of times (possibly, zero).

- Take such $1 \le i \neq j \le n$ that $a_i + a_j$ is odd and $a_i  \gt  0$, then decrease $a_i$ by $1$ and increase $a_j$ by $1$.
 It is easy to see that the heights of the towers remain non-negative during the operations. 

Help Asuna find the maximum possible beauty of the gifts after any number of operations!

## Input Specification

Each test consists of several test cases. The first line of the input data contains one integer $t$ ($1 \le t \le 10^4$) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($1 \leq n \leq 2 \cdot 10^5$) — the number of admirers of Asuna.

The second line of each test case contains $n$ integers $a_1, a_2, \ldots, a_n \ (1 \le a_i \le 10^9)$ — the heights of the towers.

It is guaranteed that the sum of $n$ across all test cases does not exceed $2 \cdot 10^5$.

## Output Specification

For each test case, output a single integer: the maximum value of the beauty of the gifts that Asuna can achieve.

## Sample Tests

### Sample 1
**Input:**
```
4
3
5 3 9
2
3 2
4
1 2 2 1
5
5 4 3 2 9
```

**Output:**
```
9
5
5
21
```

## Note

In the first test case, no pair of towers satisfies the required condition for applying the operation, so no operations can be performed. In this case, the answer is $\max(5, \ 3, \ 9) = 9$.

In the second test case, the operation with $i = 2$ and $j = 1$ can be applied twice. After that, the array becomes: $a \ = \ [5, \ 0]$. Thus, the answer is 5.

In the third test case, the following sequence of operations can be applied:

1. Operation with $i=1$ and $j=2$.

$[1, \ 2, \ 2, \ 1] \quad \rightarrow \quad [0, \ 3, \ 2, \ 1]$
2. Operation with $i=3$ and $j=2$.

$[0, \ 3, \ 2, \ 1] \quad \rightarrow \quad [0, \ 4, \ 1, \ 1]$
3. Operation with $i=3$ and $j=2$.

$[0, \ 4, \ 1, \ 1] \quad \rightarrow \quad [0, \ 5, \ 0, \ 1]$

$\max(0, \ 5, \ 0, \ 1) \ = \ 5$.

Therefore, the answer is 5.

