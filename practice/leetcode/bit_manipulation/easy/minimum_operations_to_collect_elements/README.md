# 2869. Minimum Operations to Collect Elements

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an array `nums` of positive integers and integer `k`, find the minimum number of operations needed to collect elements 1 through k. Each operation removes the last element and adds it to your collection.

## Examples

### Example 1
**Input:** `nums = [3,1,5,4,2]`, `k = 2`  
**Output:** `4`

### Example 2
**Input:** `nums = [3,1,5,4,2]`, `k = 5`  
**Output:** `5`

### Example 3
**Input:** `nums = [3,2,5,3,1]`, `k = 3`  
**Output:** `4`

## Constraints
- `1 <= nums.length <= 50`
- `1 <= nums[i] <= nums.length`
- `1 <= k <= nums.length`
- It's guaranteed you can collect elements 1 through k
