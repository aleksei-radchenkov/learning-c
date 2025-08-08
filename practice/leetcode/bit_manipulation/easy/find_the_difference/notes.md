# Intuition
This problem is almost identical to "Single Number". The idea is the same - XORing the same numbers together eliminates them, leaving just the extra number that has no pair intact.

# Approach
In this solution, we iterate through both strings in the most efficient way and XOR together each byte/character. The resulting value is the added character we are looking for.

# Complexity
- Time complexity:
$$O(n)$$

- Space complexity:
$$O(1)$$

# Code
```c
char findTheDifference(char *s, char *t)
{
    int st = strlen(t), ss = strlen(s);
    int size = (ss > st) ? st : ss, c = 0;

    for (int i = 0; i < size; i++) c ^= (t[i] ^ s[i]);
    c ^= (ss > st) ? s[size] : t[size];

    return (char)c;
}
```
