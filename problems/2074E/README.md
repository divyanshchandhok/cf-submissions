# Empty Triangle
**Problem ID:** 2074E | **Rating:** 1600 | **Tags:** `geometry`, `interactive`, `probabilities`
**Language:** PyPy 3-64 | **Time:** 93 ms | **Memory:** 1300 KB | **Solved At:** 2025-03-12 22:00
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2074/E)

---
## Description

*This is an interactive problem.*

The pink soldiers hid from you $n$ ($3 \le n \le 1500$) **fixed** points $(x_1,y_1), (x_2,y_2), \ldots, (x_n,y_n)$, **whose coordinates are not given to you**. Also, it is known that no two points have the same coordinates, and no three points are collinear.

You can ask the Frontman about three **distinct** indices $i$, $j$, $k$. Then, he will draw a triangle with points $(x_i,y_i)$, $(x_j,y_j)$, $(x_k,y_k)$, and respond with the following:

- If at least one of the hidden points lies inside the triangle, then the Frontman gives you the index of one such point. Do note that if there are multiple such points, **the Frontman can arbitrarily select one of them**.
- Otherwise, the Frontman responds with $0$.
<sub>Your objective in this problem is to find a triangle not containing any other hidden point, such as the blue one in the diagram.</sub>

Using at most $\mathbf{75}$ queries, you must find any triangle formed by three of the points, **not containing** any other hidden point inside.

Do note that the Frontman may be **adaptive** while choosing the point to give you. In other words, the choice of the point can be determined by various factors including but not limited to the orientation of points and the previous queries. However, note that **the sequence of points will never be altered**.

Hacks are disabled for this problem. Your solution will be judged on exactly $\mathbf{35}$ input files, including the example input.

## Sample Tests

### Sample 1
**Input:**
```
2
6

5

4

0

3
```

**Output:**
```
? 1 2 3

? 1 5 3

? 2 5 6

! 2 5 6

! 1 2 3
```

## Note

In the first test case, the points are $(3,0),(0,3),(5,2),(3,1),(2,2),(4,4)$.

The triangles corresponding to the three queries are as follows.

You can see that the triangle formed by $(0,3)$, $(2,2)$, $(4,4)$ does not contain any other hidden point inside. Therefore, it is a valid answer.

Do note that the interaction example only shows a valid interaction, and **not necessarily the actual response**. For example, it is possible that the Frontman responds with $4$ when you query "`? 1 2 3`". However, as the Frontman does not alter the sequence of points, he never responds with $6$ for the same query.

In the second test case, there are only $3$ points. Therefore, we know that the unique triangle formed by the points does not contain any other hidden point inside.

