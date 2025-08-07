# Intuition
We can count the number of bits by using a binary AND operator on each bit of the number. The first idea that comes to mind to achieve this is to shift the number by the right number of bits on every iteration.

# Approach
I solve this problem by iterating through every bit of the number and extracting the right-most bits using binary AND. I then shift the number to the right to access the next bit.

# Complexity
- Time complexity:
O(1)

- Space complexity:
O(1)

# Code
```c
int hammingWeight(int n)
{
    int c = 0;
    for (int i = 0; i < sizeof(int) * 8; i++) if ((n >> i) & 1) c++;
    return c;
}
```
