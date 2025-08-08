#include <stdio.h>
#include <assert.h>

int hammingDistance(int x, int y)
{
    int c = 0, k = x ^ y;
    for (; k; k >>= 1) c += k & 1;

    return c;
}

int main()
{
    assert(hammingDistance(1, 4) == 2);
    printf("\nTest 1: PASS\n");

    assert(hammingDistance(3, 1) == 1);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
