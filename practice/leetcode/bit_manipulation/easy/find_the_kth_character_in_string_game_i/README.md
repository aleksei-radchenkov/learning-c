# 3304. Find the K-th Character in String Game I

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Alice starts with string "a". In each operation:
1. Generate a new string by incrementing each character (a→b, b→c, etc.)
2. Append it to the original string

Return the k-th character after enough operations to reach length ≥ k.

## Examples

### Example 1
**Input:** `k = 5`  
**Output:** `'b'`

### Example 2
**Input:** `k = 10`  
**Output:** `'c'`

## Constraints
- `1 <= k <= 500`
