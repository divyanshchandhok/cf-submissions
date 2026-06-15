# Two Screens
**Problem ID:** 2025A | **Rating:** 800 | **Tags:** `binary search`, `greedy`, `strings`, `two pointers`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 46 ms | **Memory:** 0 KB | **Solved At:** 2025-08-26 18:45
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2025/A)

---
## Description

There are two screens which can display sequences of uppercase Latin letters. Initially, both screens display nothing.

In one second, you can do one of the following two actions:

- choose a screen and an uppercase Latin letter, and append that letter to **the end** of the sequence displayed on that screen;
- choose a screen and copy the sequence from it to the other screen, **overwriting the sequence that was displayed on the other screen**.

You have to calculate the minimum number of seconds you have to spend so that the first screen displays the sequence $s$, and the second screen displays the sequence $t$.

## Input Specification

The first line contains one integer $q$ ($1 \le q \le 500$) — the number of test cases.

Each test case consists of two lines. The first line contains the string $s$, and the second line contains the string $t$ ($1 \le |s|, |t| \le 100$). Both strings consist of uppercase Latin letters.

## Output Specification

For each test case, print one integer — the minimum possible number of seconds you have to spend so that the first screen displays the sequence $s$, and the second screen displays the sequence $t$.

## Sample Tests

### Sample 1
**Input:**
```
3
GARAGE
GARAGEFORSALE
ABCDE
AABCD
TRAINING
DRAINING
```

**Output:**
```
14
10
16
```

## Note

In the first test case, the following sequence of actions is possible:

- spend $6$ seconds to write the sequence `GARAGE` on the first screen;
- copy the sequence from the first screen to the second screen;
- spend $7$ seconds to complete the sequence on the second screen by writing `FORSALE`.

In the second test case, the following sequence of actions is possible:

- spend $1$ second to write the sequence `A` on the second screen;
- copy the sequence from the second screen to the first screen;
- spend $4$ seconds to complete the sequence on the first screen by writing `BCDE`;
- spend $4$ seconds to complete the sequence on the second screen by writing `ABCD`.

In the third test case, the fastest way to display the sequences is to type both of them character by character without copying, and this requires $16$ seconds.

