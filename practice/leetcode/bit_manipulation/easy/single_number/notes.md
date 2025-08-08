# Intuition
If 3 numbers are XORed, out of which 2 are identical, and one is unique, the answer will always be unique. This happens because the bits in the pair will cancel each other out.

# Approach
To solve this problem, I iterate through the array, XORing each number together. Using the principle described above, the resulting number is the only unique number in the array.

# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(1)$$

# Code
```c
int singleNumber(int *nums, int numsSize)
{
    int n = 0;
    for (int i = 0; i < numsSize; i++) n ^= nums[i];

    return n;
}
```
