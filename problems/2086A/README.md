# Cloudberry Jam
**Problem ID:** 2086A | **Rating:** 800 | **Tags:** `math`
**Language:** PyPy 3-64 | **Time:** 140 ms | **Memory:** 2800 KB | **Solved At:** 2025-04-03 20:06
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2086/A)

---
## Description

The most valuable berry of the Karelian forests is cloudberry. To make jam from cloudberries, you take equal amounts of berries and sugar and cook them. Thus, if you have $2$ kg of berries, you need $2$ kg of sugar. However, from $2$ kg of berries and $2$ kg of sugar, you will not get $4$ kg of jam, as one might expect, but only $3$ kg, since some of the jam evaporates during cooking. Specifically, during standard cooking, exactly a quarter (or $25\%$) of the jam evaporates.

How many kilograms of cloudberries are needed to prepare $n$ $3$-kilogram jars of jam?

## Input Specification

Each test consists of several test cases. The first line contains a single integer $t$ ($1 \le t \le 10^{4}$) — the number of test cases. The following lines describe the test cases.

Each test case contains a single integer $n$ ($1 \le n \le 10^8$) — the number of jars of jam that need to be prepared.

## Output Specification

For each test case, output a single integer — the amount of berries needed for the jam in kilograms.

## Sample Tests

### Sample 1
**Input:**
```
2
1
3
```

**Output:**
```
2
6
```

## Note

For the test case $1$, explanations are given in the text of the statement — to prepare $1$ jar of jam, you need $2$ kilograms of cloudberries.

Consider the test case $2$: if we take $6$ kilograms of berries and $6$ kilograms of sugar, we get $\frac{(6 + 6) \cdot 3}{4} = 9$ kilograms of jam; which gives $\frac{9}{3} = 3$ jars of jam.

