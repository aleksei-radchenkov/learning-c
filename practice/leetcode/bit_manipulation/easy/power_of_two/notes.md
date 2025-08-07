# Intuition
The initial thought was that in binary representation, every set bit represents a power of two (e.g., 100 is 4, which is the second power of two). Hence, we can count the number of set bits in a number using binary manipulation. If it is one, we can certainly say the number is a power of two.

# Approach
I solve this problem by iterating through every bit of the number and using binary manipulation to count how many set bits there are. Since the system is binary, only the numbers with a single set bit are powers of two.

# Complexity
- Time complexity (algorithmic):
$$O(Log(n))$$

- Time complexity (practical):
$$O(1)$$

- Space complexity:
$$O(1)$$

# Code
```c
bool isPowerOfTwo(int n)
{
	int c = 0;
	for (int i = 0; i < sizeof(int) * 8; i++) if ((n >> i) & 1) c++;
	return c == 1 && n > 0;
}
```
