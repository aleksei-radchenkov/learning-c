# 832. Flipping an Image

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given an n x n binary matrix `image`, flip the image horizontally, then invert it, and return the resulting image.

- Flip horizontally: Reverse each row of the image
- Invert: Replace each 0 with 1 and each 1 with 0

## Examples

### Example 1
**Input:** `image = [[1,1,0],[1,0,1],[0,0,0]]`  
**Output:** `[[1,0,0],[0,1,0],[1,1,1]]`

### Example 2
**Input:** `image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]`  
**Output:** `[[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]`

## Constraints
- `n == image.length == image[i].length`
- `1 <= n <= 20`
- `image[i][j]` is either `0` or `1`
