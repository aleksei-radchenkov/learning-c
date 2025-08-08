# 2917. Find the K-or of an Array

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an integer array `nums` and integer `k`, the K-or is defined as:
- For each bit position, set to 1 if at least `k` numbers have 1 in that position
- Otherwise set to 0

Return the K-or of `nums`.

## Examples

### Example 1
**Input:** `nums = [7,12,9,8,9,15]`, `k = 4`  
**Output:** `9`

### Example 2
**Input:** `nums = [2,12,1,11,4,5]`, `k = 6`  
**Output:** `0`

### Example 3
**Input:** `nums = [10,8,5,9,11,6,8]`, `k = 1`  
**Output:** `15`

## Constraints
- `1 <= nums.length <= 50`
- `0 <= nums[i] < 2³¹`
- `1 <= k <= nums.length`
