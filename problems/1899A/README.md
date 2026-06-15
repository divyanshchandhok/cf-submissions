# Game with Integers
**Problem ID:** 1899A | **Rating:** 800 | **Tags:** `games`, `math`, `number theory`
**Language:** PyPy 3-64 | **Time:** 77 ms | **Memory:** 0 KB | **Solved At:** 2025-03-07 01:32
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1899/A)

---
## Description

Vanya and Vova are playing a game. Players are given an integer $n$. On their turn, the player can add $1$ to the current integer or subtract $1$. The players take turns; Vanya starts. If **after** Vanya's move the integer is divisible by $3$, then he wins. If $10$ moves have passed and Vanya has not won, then Vova wins.

Write a program that, based on the integer $n$, determines who will win if both players play optimally.

## Input Specification

The first line contains the integer $t$ ($1 \leq t \leq 100$) — the number of test cases.

The single line of each test case contains the integer $n$ ($1 \leq n \leq 1000$).

## Output Specification

For each test case, print "`First`" without quotes if Vanya wins, and "`Second`" without quotes if Vova wins.

## Sample Tests

### Sample 1
**Input:**
```
6
1
3
5
100
999
1000
```

**Output:**
```
First
Second
First
First
Second
First
```

