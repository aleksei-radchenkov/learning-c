#include <stdio.h>
#include <assert.h>

int reverseBits(int n)
{
    int s = 0;
    for(int i = 0; i < 32; s <<= 1, s |= (n & 1), n >>= 1, i++);
    return s;
}

int main()
{
    assert(reverseBits(43261596) == 964176192);
    printf("\nTest 1: PASS\n");
    
    assert(reverseBits(2147483644) == 1073741822);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
