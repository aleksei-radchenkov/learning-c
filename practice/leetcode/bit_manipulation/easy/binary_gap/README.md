# 868. Binary Gap

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given a positive integer `n`, find and return the longest distance between any two adjacent 1's in the binary representation of `n`. If there are no two adjacent 1's, return 0.

Two 1's are adjacent if there are only 0's separating them. The distance between two 1's is the absolute difference between their bit positions.

## Examples

### Example 1
**Input:** `n = 22`  
**Output:** `2`

### Example 2
**Input:** `n = 8`  
**Output:** `0`

### Example 3
**Input:** `n = 5`  
**Output:** `2`

## Constraints
- `1 <= n <= 10⁹`
