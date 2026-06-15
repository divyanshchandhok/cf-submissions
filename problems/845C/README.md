# Two TVs
**Problem ID:** 845C | **Rating:** 1500 | **Tags:** `data structures`, `greedy`, `sortings`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 265 ms | **Memory:** 9600 KB | **Solved At:** 2026-01-30 21:50
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/845/C)

---
## Description

Polycarp is a great fan of television.

He wrote down all the TV programs he is interested in for today. His list contains *n* shows, *i*-th of them starts at moment *l**i* and ends at moment *r**i*.

Polycarp owns two TVs. He can watch two different shows simultaneously with two TVs but he can only watch one show at any given moment on a single TV. If one show ends at the same moment some other show starts then you can't watch them on a single TV.

Polycarp wants to check out all *n* shows. Are two TVs enough to do so?

## Input Specification

The first line contains one integer *n* (1 ≤ *n* ≤ 2·105) — the number of shows.

Each of the next *n* lines contains two integers *l**i* and *r**i* (0 ≤ *l**i* < *r**i* ≤ 109) — starting and ending time of *i*-th show.

## Output Specification

If Polycarp is able to check out all the shows using only two TVs then print "`YES`" (without quotes). Otherwise, print "`NO`" (without quotes).

## Sample Tests

### Sample 1
**Input:**
```
3
1 2
2 3
4 5
```

**Output:**
```
YES
```

### Sample 2
**Input:**
```
4
1 2
2 3
2 3
1 2
```

**Output:**
```
NO
```

