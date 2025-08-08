# 1684. Count the Number of Consistent Strings

**[Solution](./solution.c) - [Notes](./notes.md)**

## Description
Given a string `allowed` of distinct characters and an array of strings `words`, return the number of strings in `words` that are consistent (all their characters appear in `allowed`).

## Examples

### Example 1
**Input:** `allowed = "ab"`, `words = ["ad","bd","aaab","baa","badab"]`  
**Output:** `2`

### Example 2
**Input:** `allowed = "abc"`, `words = ["a","b","c","ab","ac","bc","abc"]`  
**Output:** `7`

### Example 3
**Input:** `allowed = "cad"`, `words = ["cc","acd","b","ba","bac","bad","ac","d"]`  
**Output:** `4`

## Constraints
- `1 <= words.length <= 10⁴`
- `1 <= allowed.length <= 26`
- `1 <= words[i].length <= 10`
- All characters in `allowed` are distinct
- Strings contain only lowercase English letters
