# 2032. Two Out of Three

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given three integer arrays `nums1`, `nums2`, and `nums3`, return a distinct array containing all values present in at least two of the arrays.

## Examples

### Example 1
**Input:** `nums1 = [1,1,3,2]`, `nums2 = [2,3]`, `nums3 = [3]`  
**Output:** `[3,2]`

### Example 2
**Input:** `nums1 = [3,1]`, `nums2 = [2,3]`, `nums3 = [1,2]`  
**Output:** `[2,3,1]`

### Example 3
**Input:** `nums1 = [1,2,2]`, `nums2 = [4,3,3]`, `nums3 = [5]`  
**Output:** `[]`

## Constraints
- `1 <= nums1.length, nums2.length, nums3.length <= 100`
- `1 <= nums1[i], nums2[j], nums3[k] <= 100`
