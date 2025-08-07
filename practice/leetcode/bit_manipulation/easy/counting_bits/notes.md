# Intuition
The first idea that came to mind was using the same method as "Number of 1 Bits" (shifting each number to the right until it becomes zero). While this approach would be `O(n)` in practice, it is still algorithmically `O(n*log(n))`.

# Approach
To solve this problem efficiently, we take advantage of the fact that we are calculating the number of set bits for consecutive integers. For any integer i, the number of set bits can be derived from a previously computed value (right shift). Since the starting value is always 0, it makes our job even easier.

# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(n)$$

# Code
```c
int *countBits(int n, int *returnSize) {
    int *arr = malloc(sizeof(int) * (++n));
    *returnSize = n;

    arr[0] = 0;
    for (int i = 0; i < n; i++) arr[i] = arr[i >> 1] + (i & 1);

    return arr;
}
```
