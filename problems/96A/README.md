# Football
**Problem ID:** 96A | **Rating:** 900 | **Tags:** `implementation`, `strings`
**Language:** C++23 (GCC 14-64, msys2) | **Time:** 156 ms | **Memory:** 100 KB | **Solved At:** 2025-08-04 11:01
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/96/A)

---
## Description

Petya loves football very much. One day, as he was watching a football match, he was writing the players' current positions on a piece of paper. To simplify the situation he depicted it as a string consisting of zeroes and ones. A zero corresponds to players of one team; a one corresponds to players of another team. If there are at least 7 players of some team standing one after another, then the situation is considered dangerous. For example, the situation 00100110111111101 is dangerous and 11110111011101 is not. You are given the current situation. Determine whether it is dangerous or not.

## Input Specification

The first input line contains a non-empty string consisting of characters "0" and "1", which represents players. The length of the string does not exceed 100 characters. There's at least one player from each team present on the field.

## Output Specification

Print "YES" if the situation is dangerous. Otherwise, print "NO".

## Sample Tests

### Sample 1
**Input:**
```
001001
```

**Output:**
```
NO
```

### Sample 2
**Input:**
```
1000000001
```

**Output:**
```
YES
```

