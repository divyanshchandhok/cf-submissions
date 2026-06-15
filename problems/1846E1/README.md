# Rudolf and Snowflakes (simple version)
**Problem ID:** 1846E1 | **Rating:** 1300 | **Tags:** `brute force`, `implementation`, `math`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 108 ms | **Memory:** 7900 KB | **Solved At:** 2025-07-30 13:22
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/1846E/1)

---
## Description

**This is a simple version of the problem. The only difference is that in this version $n \le 10^6$.**

One winter morning, Rudolf was looking thoughtfully out the window, watching the falling snowflakes. He quickly noticed a certain symmetry in the configuration of the snowflakes. And like a true mathematician, Rudolf came up with a mathematical model of a snowflake.

He defined a snowflake as an undirected graph constructed according to the following rules:

- Initially, the graph has only one vertex.
- Then, more vertices are added to the graph. The initial vertex is connected by edges to $k$ new vertices ($k  \gt  1$).
- Each vertex that is connected to only one other vertex is connected by edges to $k$ more new vertices. This step should be done **at least once**.

The smallest possible snowflake for $k = 4$ is shown in the figure.

After some mathematical research, Rudolf realized that such snowflakes may not have any number of vertices. Help Rudolf check if a snowflake with $n$ vertices can exist.

## Input Specification

The first line of the input contains an integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

Then follow the descriptions of the test cases.

The first line of each test case contains an integer $n$ ($1 \le n \le 10^6$) — the number of vertices for which it is necessary to check the existence of a snowflake.

## Output Specification

Output $t$ lines, each of which is the answer to the corresponding test case — "YES" if there exists such $k  \gt  1$ for which a snowflake with the given number of vertices can be constructed; "NO" otherwise.

## Sample Tests

### Sample 1
**Input:**
```
9
1
2
3
6
13
15
255
10101
1000000
```

**Output:**
```
NO
NO
NO
NO
YES
YES
YES
YES
NO
```

