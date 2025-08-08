# 3314. Construct the Minimum Bitwise Array I

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an array `nums`, construct an array `ans` where for each index `i`:
- `ans[i] OR (ans[i] + 1) == nums[i]`
- `ans[i]` is minimized
- Set `ans[i] = -1` if no valid value exists

## Examples

### Example 1
**Input:** `nums = [2,3,5,7]`  
**Output:** `[-1,1,4,3]`

### Example 2
**Input:** `nums = [11,13,31]`  
**Output:** `[9,12,15]`

## Constraints
- `1 <= nums.length <= 100`
- `2 <= nums[i] <= 1000`
- `nums[i]` is prime
