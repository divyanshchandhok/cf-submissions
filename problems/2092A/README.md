# Kamilka and the Sheep
**Problem ID:** 2092A | **Rating:** 800 | **Tags:** `greedy`, `math`, `number theory`, `sortings`
**Language:** PyPy 3-64 | **Time:** 139 ms | **Memory:** 1900 KB | **Solved At:** 2025-03-29 20:37
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2092/A)

---
## Description

Kamilka has a flock of $n$ sheep, the $i$-th of which has a beauty level of $a_i$. All $a_i$ are distinct. Morning has come, which means they need to be fed. Kamilka can choose a non-negative integer $d$ and give each sheep $d$ bunches of grass. After that, the beauty level of each sheep increases by $d$.

In the evening, Kamilka must choose **exactly two** sheep and take them to the mountains. If the beauty levels of these two sheep are $x$ and $y$ (after they have been fed), then Kamilka's *pleasure* from the walk is equal to $\gcd(x, y)$, where $\gcd(x, y)$ denotes the greatest common divisor (GCD) of integers $x$ and $y$.

The task is to find the maximum possible pleasure that Kamilka can get from the walk.

## Input Specification

Each test consists of several test cases. The first line contains one integer $t$ ($1 \le t \le 500$), the number of test cases. The description of the test cases follows.

The first line of each test case contains one integer $n$ ($2 \leq n \leq 100$), the number of sheep Kamilka has.

The second line of each test case contains $n$ **distinct** integers $a_1, a_2, \ldots, a_n \ (1 \le a_i \le 10^9)$ — the beauty levels of the sheep.

It is guaranteed that all $a_i$ are distinct.

## Output Specification

For each test case, output a single integer: the maximum possible pleasure that Kamilka can get from the walk.

## Sample Tests

### Sample 1
**Input:**
```
4
2
1 3
5
5 4 3 2 1
3
5 6 7
3
1 11 10
```

**Output:**
```
2
4
2
10
```

## Note

In the first test case, $d=1$ works. In this case, the pleasure is $\gcd(1+1, \ 1+3)=\gcd(2, \ 4)=2$. It can be shown that a greater answer cannot be obtained.

In the second test case, let's take $d=3$. In this case, the pleasure is $\gcd(1+3, \ 5+3)=\gcd(4, \ 8)=4$. Thus, for this test case, the answer is $4$.

