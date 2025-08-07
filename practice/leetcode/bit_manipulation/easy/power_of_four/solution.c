#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isPowerOfFour(int n)
{
    return (n > 0) && !(n & (n-1)) && (n & 0x55555555);
}

int main()
{
    assert(isPowerOfFour(16) == true);
    printf("\nTest 1: PASS\n");

    assert(isPowerOfFour(5) == false);
    printf("Test 2: PASS\n");

    assert(isPowerOfFour(1) == true);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
