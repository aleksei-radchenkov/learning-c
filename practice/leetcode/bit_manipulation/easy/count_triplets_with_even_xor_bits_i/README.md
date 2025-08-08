# 3199. Count Triplets with Even XOR Set Bits I

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given three integer arrays `a`, `b`, and `c`, count the number of triplets (a[i], b[j], c[k]) where the XOR of the three elements has an even number of set bits (1s in binary).

## Examples

### Example 1
**Input:** `a = [1]`, `b = [2]`, `c = [3]`  
**Output:** `1`

### Example 2
**Input:** `a = [1,1]`, `b = [2,3]`, `c = [1,5]`  
**Output:** `4`

## Constraints
- `1 <= a.length, b.length, c.length <= 100`
- `0 <= a[i], b[i], c[i] <= 100`
