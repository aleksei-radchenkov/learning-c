# Intuition
Gauss's formula for the sum of the first `n` natural numbers is the first thing that comes to mind. If we know the intended sum and the actual sum, the difference will be the missing number we are looking for. This is not a bit manipulation solution, but it's just as efficient.

# Approach
To solve this problem, we first calculate the actual sum of all numbers in the array. We then calculate the positive difference between the expected sum (`n*(n+1)/2`) and the actual sum, which is the missing number we want.

# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(1)$$

# Code
```c
int missingNumber(int* nums, int numsSize) {
    int s = 0;
    for (int i = 0; i < numsSize; i++) s += nums[i];
    return (numsSize * (numsSize + 1) / 2) - s;
}
```
