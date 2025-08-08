# 1356. Sort Integers by The Number of 1 Bits

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an integer array `arr`, sort the integers in ascending order by:
1. The number of 1's in their binary representation
2. Their numerical value (for numbers with equal number of 1 bits)

## Examples

### Example 1
**Input:** `arr = [0,1,2,3,4,5,6,7,8]`  
**Output:** `[0,1,2,4,8,3,5,6,7]`

### Example 2
**Input:** `arr = [1024,512,256,128,64,32,16,8,4,2,1]`  
**Output:** `[1,2,4,8,16,32,64,128,256,512,1024]`

## Constraints
- `1 <= arr.length <= 500`
- `0 <= arr[i] <= 10⁴`
