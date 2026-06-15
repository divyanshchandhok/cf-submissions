# The Nether
**Problem ID:** 2133C | **Rating:** 1400 | **Tags:** `graphs`, `interactive`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 515 ms | **Memory:** 0 KB | **Solved At:** 2025-08-24 21:04
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2133/C)

---
## Description

*This is an interactive problem.*

Having recently discovered The Nether, Steve has built a network of $n$ nether portals, each at a different location in his world.

Each portal is connected in one direction to some number (possibly zero) of other portals. To avoid getting lost, Steve has carefully built the network of portals so that there is no sequence of jumps through portals that will bring you from a location back to itself; formally, the network forms a directed acyclic graph.

Steve refuses to tell you which portals are connected to which, but he will allow you to ask queries. In each query, you give Steve a set of locations $S = \{s_1, s_2, \ldots, s_k\}$ and a starting location $x \in S$. Steve will figure out the longest path starting at $x$ that only passes through locations in $S$ and tell you the number of locations in it. (If it is impossible to reach any other location in $S$ from $x$, Steve will reply with $1$.)

As you are looking to obtain the achievement "Hot Tourist Destinations", you want to find any path that visits as many locations as possible. Steve is feeling particularly generous and will give you $2 \cdot n$ queries to find it.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 1000$). The description of the test cases follows.

The only line of each test case contains a single integer $n$ ($2 \le n \le 500$) — the number of locations.

It is guaranteed that the sum of $n^3$ over all test cases does not exceed $500^3$.

## Sample Tests

### Sample 1
**Input:**
```
2
5

3

3

2

1


2

1

1
```

**Output:**
```
? 1 4 1 2 3 4

? 3 3 4 3 2

? 5 2 1 5

? 2 2 2 4

! 4 5 1 4 2


? 1 2 1 2

? 2 2 1 2

! 1 1
```

## Note

In the first test case, the network of portals is as follows:

- The longest path starting at location $1$ passing only through $\{1, 2, 3, 4\}$ is the path $1 \rightarrow 4 \rightarrow 2$, which has $3$ distinct locations.
- The longest path starting at location $3$ passing only through $\{2, 3, 4\}$ is the path $3 \rightarrow 4 \rightarrow 2$, which has $3$ distinct locations.
- The longest path starting at location $5$ passing only through $\{1, 5\}$ is the path $5 \rightarrow 1$, which has $2$ distinct locations.
- It is impossible to get to any other location in $\{2, 4\}$ starting from $2$, so Steve answers $1$ for that query.
 Using the information from these queries, it is possible to determine that a longest path is $5 \rightarrow 1 \rightarrow 4 \rightarrow 2$.

In the second test case, the network of portals is as follows:

Neither of the portals is connected to the other, so the longest path is a single location. Note that `! 1 2` would also be a valid answer.

