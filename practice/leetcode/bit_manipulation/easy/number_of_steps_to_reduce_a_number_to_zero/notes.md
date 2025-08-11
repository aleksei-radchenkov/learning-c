# Intuition
The obvious way to solve this is to subtract 1 or divide the number by 2 (based on whether it's odd or even), until it becomes zero. However, I wanted to solve this using bit manipulation, which could also be more efficient than division.

# Approach
I solve this problem by going through every bit of the number, adding the correct number of steps to the counter. If the right-most bit is set (number is odd), we add 2 to the counter, since the operation would take 2 steps: subtracting 1 and then dividing by 2. If the right-most bit is unset (the number is even), we only need to divide it by 2, so we add 1 step.

# Complexity
- Time complexity:
$$O(Log(n))$$

- Space complexity:
$$O(1)$$

# Code
```c
int numberOfSteps(int num) {
    int c = 0;
    for (; num; num >>= 1) c += 1 + (num & 1);

    return (c) ? c - 1 : c;
}
```
