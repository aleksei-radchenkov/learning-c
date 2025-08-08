# 2932. Maximum Strong Pair XOR I

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an array `nums`, find the maximum XOR value among all strong pairs. A pair (x,y) is strong if `|x - y| <= min(x, y)`.

## Examples

### Example 1
**Input:** `nums = [1,2,3,4,5]`  
**Output:** `7`

### Example 2
**Input:** `nums = [10,100]`  
**Output:** `0`

### Example 3
**Input:** `nums = [5,6,25,30]`  
**Output:** `7`

## Constraints
- `1 <= nums.length <= 50`
- `1 <= nums[i] <= 100`
