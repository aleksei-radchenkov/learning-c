#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

bool isPowerOfTwo(int n)
{
    int c = 0;
    for (int i = 0; i < sizeof(int) * 8; i++) if ((n >> i) & 1) c++;

    return c == 1 && n > 0;
}

int main()
{
    assert(isPowerOfTwo(1) == true);
    printf("\nTest 1: PASS\n");

    assert(isPowerOfTwo(16) == true);
    printf("Test 2: PASS\n");

    assert(isPowerOfTwo(3) == false);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
