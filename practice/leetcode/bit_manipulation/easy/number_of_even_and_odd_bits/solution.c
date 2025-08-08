#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *evenOddBit(int n, int *returnSize)
{
}

int main()
{
    int size;
    int *result1 = evenOddBit(50, &size);
    int *result2 = evenOddBit(2, &size);

    assert(result1[0] == 1 && result1[1] == 2);
    printf("\nTest 1: PASS\n");

    assert(result2[0] == 0 && result2[1] == 1);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
