# Retaliation
**Problem ID:** 2117D | **Rating:** 1200 | **Tags:** `binary search`, `math`, `number theory`
**Language:** PyPy 3-64 | **Time:** 311 ms | **Memory:** 28000 KB | **Solved At:** 2025-06-08 21:38
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2117/D)

---
## Description

Yousef wants to explode an array $a_1, a_2, \dots, a_n$. An array gets exploded when all of its elements become equal to zero.

In one operation, Yousef can do **exactly** one of the following:

1. For every index $i$ in $a$, decrease $a_i$ by $i$.
2. For every index $i$ in $a$, decrease $a_i$ by $n - i + 1$.

Your task is to help Yousef determine if it is possible to explode the array using any number of operations.

## Input Specification

The first line of the input contains an integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

The first line of each test case contains an integer $n$ ($2 \le n \le 2 \cdot 10^5$) — the size of the array.

The second line of each test case contains $n$ integers $a_1, a_2, \dots, a_n$ ($1 \le a_i \le 10^9$) — the elements of the array.

It is guaranteed that the sum of $n$ over all test cases doesn't exceed $2 \cdot 10^5$.

## Output Specification

For each test case, print "`YES`" if Yousef can explode the array, otherwise output "`NO`".

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Sample Tests

### Sample 1
**Input:**
```
6
4
3 6 6 3
5
21 18 15 12 9
10
2 6 10 2 5 5 1 2 4 10
7
10 2 16 12 8 20 4
2
52 101
2
10 2
```

**Output:**
```
NO
YES
NO
NO
YES
NO
```

## Note

In the second test case, we can do the following:

- Perform $1$ operation of the first type. The array becomes $[20, 16, 12, 8, 4]$.
- Perform $4$ operations of the second type. The array becomes $[0, 0, 0, 0, 0]$.

In the first, third, fourth, and sixth test cases, it can be proven that it is impossible to make all elements equal to zero using any number of operations.

