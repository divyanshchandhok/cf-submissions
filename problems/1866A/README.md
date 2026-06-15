# Ambitious Kid
**Problem ID:** 1866A | **Rating:** 800 | **Tags:** `math`
**Language:** PyPy 3-64 | **Time:** 108 ms | **Memory:** 9900 KB | **Solved At:** 2025-03-08 19:13
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1866/A)

---
## Description

Chaneka, Pak Chanek's child, is an ambitious kid, so Pak Chanek gives her the following problem to test her ambition.

Given an array of integers $[A_1, A_2, A_3, \ldots, A_N]$. In one operation, Chaneka can choose one element, then increase or decrease the element's value by $1$. Chaneka can do that operation multiple times, even for different elements.

What is the minimum number of operations that must be done to make it such that $A_1 \times A_2 \times A_3 \times \ldots \times A_N = 0$?

## Input Specification

The first line contains a single integer $N$ ($1 \leq N \leq 10^5$).

The second line contains $N$ integers $A_1, A_2, A_3, \ldots, A_N$ ($-10^5 \leq A_i \leq 10^5$).

## Output Specification

An integer representing the minimum number of operations that must be done to make it such that $A_1 \times A_2 \times A_3 \times \ldots \times A_N = 0$.

## Sample Tests

### Sample 1
**Input:**
```
3
2 -6 5
```

**Output:**
```
2
```

### Sample 2
**Input:**
```
1
-3
```

**Output:**
```
3
```

### Sample 3
**Input:**
```
5
0 -1 0 1 0
```

**Output:**
```
0
```

## Note

In the first example, initially, $A_1\times A_2\times A_3=2\times(-6)\times5=-60$. Chaneka can do the following sequence of operations:

1. Decrease the value of $A_1$ by $1$. Then, $A_1\times A_2\times A_3=1\times(-6)\times5=-30$
2. Decrease the value of $A_1$ by $1$. Then, $A_1\times A_2\times A_3=0\times(-6)\times5=0$

In the third example, Chaneka does not have to do any operations, because from the start, it already holds that $A_1\times A_2\times A_3\times A_4\times A_5=0\times(-1)\times0\times1\times0=0$

