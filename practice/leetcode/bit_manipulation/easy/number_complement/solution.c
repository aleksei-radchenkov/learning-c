#include <stdio.h>
#include <assert.h>

int findComplement(int num)
{
    if (!num) return 1;
    int c = 0;
    for (int i = 0; num; num >>= 1, i++) c |= !(num & 1) << i;
    return c;
}

int main()
{
    assert(findComplement(5) == 2);
    printf("\nTest 1: PASS\n");

    assert(findComplement(1) == 0);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
