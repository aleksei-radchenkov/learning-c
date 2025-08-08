#include <stdio.h>
#include <assert.h>

int countPrimeSetBits(int left, int right)
{
}

int main()
{
    assert(countPrimeSetBits(6, 10) == 4);
    printf("\nTest 1: PASS\n");

    assert(countPrimeSetBits(10, 15) == 5);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
