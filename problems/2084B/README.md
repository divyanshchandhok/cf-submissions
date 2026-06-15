# MIN = GCD
**Problem ID:** 2084B | **Rating:** 1100 | **Tags:** `greedy`, `math`, `number theory`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 77 ms | **Memory:** 0 KB | **Solved At:** 2025-08-25 01:40
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2084/B)

---
## Description

You are given a positive integer sequence $a$ of length $n$. Determine if it is possible to rearrange $a$ such that there exists an integer $i$ ($1 \le i \lt n$) satisfying $$ \min([a_1,a_2,\ldots,a_i])=\gcd([a_{i+1},a_{i+2},\ldots,a_n]). $$

Here $\gcd(c)$ denotes the greatest common divisor of $c$, which is the maximum positive integer that divides all integers in $c$.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 10^4$). The description of the test cases follows.

The first line of each test case contains a single integer $n$ ($2 \le n \le 10^5$).

The second line contains $n$ integers $a_1, a_2, \ldots, a_n$ ($1 \le a_i \le 10^{18}$).

It is guaranteed that the sum of $n$ over all test cases does not exceed $10^5$.

## Output Specification

For each test case, output "`Yes`" if it is possible, and "`No`" otherwise.

You can output the answer in any case (upper or lower). For example, the strings "`yEs`", "`yes`", "`Yes`", and "`YES`" will be recognized as positive responses.

## Sample Tests

### Sample 1
**Input:**
```
7
2
1 1
2
1 2
3
2 2 3
3
2 3 4
5
4 5 6 9 3
3
998244359987710471 99824435698771045 1000000007
6
1 1 4 5 1 4
```

**Output:**
```
Yes
No
Yes
No
Yes
Yes
Yes
```

## Note

In the first test case, rearrange $a$ to $[1,1]$ and let $i=1$, then $\min([1])=\gcd([1])$.

In the second test case, it can be shown that it is impossible.

In the third test case, rearrange $a$ to $[3,2,2]$ and let $i=2$, then $\min([3,2])=\gcd([2])$.

In the fifth test case, rearrange $a$ to $[3,4,5,6,9]$ and let $i=3$, then $\min([3,4,5])=\gcd([6,9])$.

