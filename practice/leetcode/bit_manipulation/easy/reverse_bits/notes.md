# Intuition
The problem is similar to reversing a string; we need to go through every character (bit) and enter it in reverse order into a new array (integer).

# Approach
I solved this problem by iterating through every bit of the number, setting the right-most bit of the new integer to the value of the right-most bit of the input integer on every iteration. To reverse the order of bits in this process, I shift the two numbers in opposite directions. The input value is shifted to the right, to get a higher-positioned bit on every iteration, and the new integer is shifted left, to make space for new bits.

# Complexity
- Time complexity:
O(1)

- Space complexity:
O(1)

# Code
```c
int reverseBits(int n) {
    int s=0;
    for(int i=0; i<sizeof(int)*8; s<<=1, s|=(n & 1), n>>=1, i++);
    return s;
}
```