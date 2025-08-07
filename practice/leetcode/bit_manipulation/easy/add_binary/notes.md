# Intuition
The first idea was to use binary manipulation to translate both numbers into integers, then add them together and convert back into a string. While this might not be the most efficient method, it's the easiest. However, the test cases for this problem also involve very large numbers, larger than LL, so a string-only solution might have to be used.

# Approach
I solve this problem by using strings to add the binaries. It works similarly to a typical big int implementation, with the string simply being computed bit by bit.

# Complexity
- Time complexity:
O(n)

- Space complexity:
O(n)

# Code
```c
char* addBinary(char* a, char* b)
{
    int size = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b), carry = 0;
    char *ret = malloc(size + 1);
    for (int i = 0; i < size; i++) {
        int sum = (((i < strlen(a)) ? a[strlen(a) - i - 1] : '0') == '1') + (((i < strlen(b)) ? b[strlen(b) - i - 1]: '0') == '1') + carry;
        ret[size - i - 1] = (sum % 2) ? '1' : '0';
        carry = (sum > 1) ? 1 : 0;
    }
    ret[size] = '\0';
    if (carry) {
        char *new = malloc((++size) + 1);
        strcpy(new + 1, ret);
        free(ret);
        ret = new;
        ret[0] = '1';
    }
    return ret;
}
```
