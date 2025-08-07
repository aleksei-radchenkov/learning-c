# Intuition
The first thought is to use a loop to go through bits individually, similar to my solution for the "Power of Two" problem, but clearly, this is not the most efficient solution.

# Approach
My solution for this problem also improves on the "Power of Two". Instead of iterating through every bit, we check if n is a power of two using `n & (n - 1) == 0`, which ensures only one bit is set. But to be a power of four, that single set bit must also be in an even position. We then use the bitmask `0x55555555` (`0b01010101` for each byte), which has 1s at all even positions, to confirm this. So, the number must be positive, a power of two, and match the mask to be a power of four.

# Complexity
- Time complexity:
$$O(1)$$

- Space complexity:
$$O(1)$$

# Code
```c
bool isPowerOfFour(int n)
{
    return (n > 0) && !(n & (n-1)) && (n & 0x55555555);
}
```
