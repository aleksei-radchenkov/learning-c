#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

int hammingWeight(int n)
{
    int c = 0;
    for (int i=0; i<sizeof(int)*8; i++) if ((n >> i) & 1) c++;
    return c;
}

int main()
{
    assert(hammingWeight(11) == 3);
    printf("\nTest 1: PASS\n");

    assert(hammingWeight(128) == 1);
    printf("Test 2: PASS\n");

    assert(hammingWeight(2147483645) == 30);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");
    return 0;
}
