# 1018. Binary Prefix Divisible By 5

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given a binary array `nums` (0-indexed), define `xi` as the number formed by the subarray `nums[0..i]`. Return an array of booleans where `answer[i]` is `true` if `xi` is divisible by 5.

## Examples

### Example 1
**Input:** `nums = [0,1,1]`
**Output:** `[true,false,false]`

### Example 2
**Input:** `nums = [1,1,1]`
**Output:** `[false,false,false]`

## Constraints
- `1 <= nums.length <= 10⁵`
- `nums[i]` is either `0` or `1`
