# Intuition
First, to eliminate set bits that match between two numbers, we can XOR them together. Then we can calculate the number of set bits in the number.

# Approach
To solve this problem, we iterate through every bit of the XOR between input values, checking if each bit is set or not. We then return the count of set bits.

# Complexity
- Time complexity (algorithmic):
$$O(Log(n))$$

- Time complexity (practical):
$$O(1)$$

- Space complexity:
$$O(1)$$

# Code
```c
int hammingDistance(int x, int y)
{
    int c = 0, k = x ^ y;
    for (; k; k >>= 1) c += k & 1;
    return c;
}
```
