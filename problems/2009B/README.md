# osu!mania
**Problem ID:** 2009B | **Rating:** 800 | **Tags:** `brute force`, `implementation`
**Language:** PyPy 3-64 | **Time:** 78 ms | **Memory:** 1300 KB | **Solved At:** 2025-05-28 19:55
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2009/B)

---
## Description

You are playing your favorite rhythm game, osu!mania. The layout of your beatmap consists of $n$ rows and $4$ columns. Because notes at the bottom are closer, you will process the bottommost row first and the topmost row last. Each row will contain exactly one note, represented as a '#'.

For each note $1, 2, \dots, n$, in the order of processing, output the column in which the note appears.

## Input Specification

The first line contains $t$ ($1 \leq t \leq 100$) — the number of test cases.

For each test case, the first line contains $n$ ($1 \leq n \leq 500$) — the number of rows of the beatmap.

The following $n$ lines contain $4$ characters. The $i$-th line represents the $i$-th row of the beatmap from the top. It is guaranteed that the characters are either '.' or '#', and exactly one of the characters is '#'.

It is guaranteed that the sum of $n$ over all test cases does not exceed $500$.

## Output Specification

For each test case, output $n$ integers on a new line, the column that the $i$-th note appears in for all $i$ from $1$ to $n$.

## Sample Tests

### Sample 1
**Input:**
```
3
4
#...
.#..
..#.
...#
2
.#..
.#..
1
...#
```

**Output:**
```
4 3 2 1 
2 2 
4
```

