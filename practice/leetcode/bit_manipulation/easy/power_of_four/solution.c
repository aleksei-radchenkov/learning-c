#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool isPowerOfFour(int n)
{
}

int main()
{
    assert(isPowerOfFour(16) == true);
    printf("Test 1: PASS\n");

    assert(isPowerOfFour(5) == false);
    printf("Test 2: PASS\n");

    assert(isPowerOfFour(1) == true);
    printf("Test 3: PASS\n");

    printf("Success!\n");

    return 0;
}
