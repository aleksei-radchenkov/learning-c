# Intuition
The initial idea was to use the binary complement operator, but it soon became clear that we are only meant to flip the significant bits (the bits to the right of the leftmost set bit).

# Approach
To tackle this problem, we iterate through every significant bit of num and manually add the inverted left-most bit to a new integer.

# Complexity
- Time complexity (algorithmic):
$$O(Log(n))$$

- Time complexity (practical):
$$O(1)$$

- Space complexity:
$$O(1)$$

# Code
```c
int findComplement(int num)
{
    if (!num) return 1;
    int c = 0;
    for (int i = 0; num; num >>= 1, i++) c |= !(num & 1) << i;
    return c;
}
```
