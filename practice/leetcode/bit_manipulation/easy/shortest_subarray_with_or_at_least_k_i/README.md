# 3095. Shortest Subarray With OR at Least K I

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an array `nums` of non-negative integers and integer `k`, find the length of the shortest non-empty subarray whose bitwise OR is at least `k`. Return -1 if no such subarray exists.

## Examples

### Example 1
**Input:** `nums = [1,2,3]`, `k = 2`  
**Output:** `1`

### Example 2
**Input:** `nums = [2,1,8]`, `k = 10`  
**Output:** `3`

### Example 3
**Input:** `nums = [1,2]`, `k = 0`  
**Output:** `1`

## Constraints
- `1 <= nums.length <= 50`
- `0 <= nums[i] <= 50`
- `0 <= k < 64`
