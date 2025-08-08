#include <stdio.h>
#include <assert.h>

int minBitChanges(int n, int k)
{

}

int main()
{
    assert(minBitChanges(13, 4) == 2);
    printf("\nTest 1: PASS\n");

    assert(minBitChanges(21, 21) == 0);
    printf("Test 2: PASS\n");

    assert(minBitChanges(14, 13) == -1);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
