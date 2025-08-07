# 338. Counting Bits

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an integer `n`, return an array `ans` of length `n + 1` such that for each `i` (`0 <= i <= n`), `ans[i]` is the number of `1`'s in the binary representation of `i`.

## Examples

### Example 1
**Input:** `n = 2`  
**Output:** `[0,1,1]`

### Example 2
**Input:** `n = 5`  
**Output:** `[0,1,1,2,1,2]`

## Constraints
- `0 <= n <= 10⁵`

## Follow up
1. Can you do it in linear time O(n) and possibly in a single pass?
2. Can you do it without using any built-in function?
