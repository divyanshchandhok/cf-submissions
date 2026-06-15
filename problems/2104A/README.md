# Three Decks
**Problem ID:** 2104A | **Rating:** 800 | **Tags:** `math`
**Language:** PyPy 3-64 | **Time:** 156 ms | **Memory:** 3700 KB | **Solved At:** 2025-04-29 21:43
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2104/A)

---
## Description

Monocarp placed three decks of cards in a row on the table. The first deck consists of $a$ cards, the second deck consists of $b$ cards, and the third deck consists of $c$ cards, with the condition $a  \lt  b  \lt  c$.

Monocarp wants to take some number of cards (at least one, but no more than $c$) from the **third** deck and distribute them between the first two decks so that each of the taken cards ends up in either the first or the second deck. It is possible that all the cards taken from the third deck will go into the same deck.

Your task is to determine whether Monocarp can make the number of cards in all three decks equal using the described operation.

## Input Specification

The first line contains a single integer $t$ ($1 \le t \le 10^4$) — the number of test cases.

The only line of each test case contains three integers $a, b$, and $c$ ($1 \le a, b, c \le 10^8$) — the number of cards in the first, second, and third decks, respectively.

Additional constraint on the input: $a  \lt  b  \lt  c$.

## Output Specification

For each test case, output "`YES`" (without quotes) if Monocarp can make the number of cards in all three decks equal using the described operation. Otherwise, output "`NO`" (without quotes).

## Sample Tests

### Sample 1
**Input:**
```
4
3 5 10
12 20 30
3 5 7
1 5 6
```

**Output:**
```
YES
NO
YES
NO
```

## Note

In the first test case, Monocarp has to take $4$ cards from the third deck, put $3$ cards in the first deck, and $1$ card in the second deck. Thus, there will be $6$ cards in all three decks.

In the second test case, it is impossible to make the number of cards in all three decks equal.

In the third test case, Monocarp has to take $2$ cards from the third deck and put both in the first deck. Thus, there will be $5$ cards in all three decks.

In the fourth test case, it is also impossible to make the number of cards in all three decks equal.

