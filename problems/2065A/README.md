# Skibidus and Amog'u
**Problem ID:** 2065A | **Rating:** 800 | **Tags:** `brute force`, `constructive algorithms`, `greedy`, `implementation`, `strings`
**Language:** PyPy 3-64 | **Time:** 77 ms | **Memory:** 0 KB | **Solved At:** 2025-03-28 02:37
**Link:** [Codeforces Problem Page](https://codeforces.com/problemset/problem/2065/A)

---
## Description

Skibidus lands on a foreign planet, where the local Amog tribe speaks the Amog'u language. In *Amog'u*, there are two forms of nouns, which are *singular* and *plural*.

Given that the root of the noun is transcribed as $S$, the two forms are transcribed as:

- Singular: $S$ $+$ "`us`"
- Plural: $S$ $+$ "`i`"

Here, $+$ denotes string concatenation. For example, `abc` $+$ `def` $=$ `abcdef`.

For example, when $S$ is transcribed as "`amog`", then the singular form is transcribed as "`amogus`", and the plural form is transcribed as "`amogi`". Do note that *Amog'u* nouns can have an **empty** root — in specific, "`us`" is the singular form of "`i`" (which, on an unrelated note, means "imposter" and "imposters" respectively).

Given a transcribed *Amog'u* noun in singular form, please convert it to the transcription of the corresponding plural noun.

## Input Specification

Each test contains multiple test cases. The first line contains the number of test cases $t$ ($1 \le t \le 100$). The description of the test cases follows.

The only line of each test case contains a string $W$, which is a transcribed *Amog'u* noun in *singular* form. It is guaranteed that $W$ consists of only lowercase English letters, has a length of at most $10$, and ends with "`us`".

## Output Specification

For each test case, output the transcription of the corresponding plural noun on a separate line.

## Sample Tests

### Sample 1
**Input:**
```
9
us
sus
fungus
cactus
sussus
amogus
chungus
ntarsus
skibidus
```

**Output:**
```
i
si
fungi
cacti
sussi
amogi
chungi
ntarsi
skibidi
```

