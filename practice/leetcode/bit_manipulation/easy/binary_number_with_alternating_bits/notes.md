# Intuition
Originally I wanted to use a bit mask, for `O(1)` solution, but that proved futile.

# Approach
To solve this problem, we iterate through each significant bit of the input number and check the current rightmost bit with the previous one. If at any point these two are equal, the answer is `False` and `True` otherwise.

# Complexity
- Time complexity (algorithmic):
$$O(Log(n))$$

- Time complexity (practical):
$$O(1)$$

- Space complexity:
$$O(1)$$

# Code
```c
bool hasAlternatingBits(int n)
{
    for (int l = -1; n; l = n & 1, n >>= 1) if((n & 1) == l) return 0;
    return 1;
}

```
