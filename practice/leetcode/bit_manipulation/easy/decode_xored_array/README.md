# 1720. Decode XORed Array

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an encoded array where `encoded[i] = arr[i] XOR arr[i + 1]` and the first element `first` of the original array `arr`, return the original array.

## Examples

### Example 1
**Input:** `encoded = [1,2,3]`, `first = 1`  
**Output:** `[1,0,2,1]`

### Example 2
**Input:** `encoded = [6,2,7,3]`, `first = 4`  
**Output:** `[4,2,0,7,4]`

## Constraints
- `2 <= n <= 10⁴`
- `encoded.length == n - 1`
- `0 <= encoded[i] <= 10⁵`
- `0 <= first <= 10⁵`
