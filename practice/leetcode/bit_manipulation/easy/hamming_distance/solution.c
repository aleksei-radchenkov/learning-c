#include <stdio.h>
#include <assert.h>

int hammingDistance(int x, int y)
{
}

int main()
{
    assert(hammingDistance(1, 4) == 2);
    printf("Test 1: PASS\n");

    assert(hammingDistance(3, 1) == 1);
    printf("Test 2: PASS\n");

    printf("Success!\n");

    return 0;
}
