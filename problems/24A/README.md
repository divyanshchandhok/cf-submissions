# Ring road
**Problem ID:** 24A | **Rating:** 1400 | **Tags:** `graphs`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 124 ms | **Memory:** 100 KB | **Solved At:** 2025-08-06 16:56
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/24/A)

---
## Description

Nowadays the one-way traffic is introduced all over the world in order to improve driving safety and reduce traffic jams. The government of Berland decided to keep up with new trends. Formerly all *n* cities of Berland were connected by *n* two-way roads in the ring, i. e. each city was connected directly to exactly two other cities, and from each city it was possible to get to any other city. Government of Berland introduced one-way traffic on all *n* roads, but it soon became clear that it's impossible to get from some of the cities to some others. Now for each road is known in which direction the traffic is directed at it, and the cost of redirecting the traffic. What is the smallest amount of money the government should spend on the redirecting of roads so that from every city you can get to any other?

## Input Specification

The first line contains integer *n* (3 ≤ *n* ≤ 100) — amount of cities (and roads) in Berland. Next *n* lines contain description of roads. Each road is described by three integers *a**i*, *b**i*, *c**i* (1 ≤ *a**i*, *b**i* ≤ *n*, *a**i* ≠ *b**i*, 1 ≤ *c**i* ≤ 100) — road is directed from city *a**i* to city *b**i*, redirecting the traffic costs *c**i*.

## Output Specification

Output single integer — the smallest amount of money the government should spend on the redirecting of roads so that from every city you can get to any other.

## Sample Tests

### Sample 1
**Input:**
```
3
1 3 1
1 2 1
3 2 1
```

**Output:**
```
1
```

### Sample 2
**Input:**
```
3
1 3 1
1 2 5
3 2 1
```

**Output:**
```
2
```

### Sample 3
**Input:**
```
6
1 5 4
5 3 8
2 4 15
1 6 16
2 3 23
4 6 42
```

**Output:**
```
39
```

### Sample 4
**Input:**
```
4
1 2 9
2 3 8
3 4 7
4 1 5
```

**Output:**
```
0
```

