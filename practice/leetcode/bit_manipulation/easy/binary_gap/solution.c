#include <stdio.h>
#include <assert.h>

int binaryGap(int n)
{

}

int main()
{
    assert(binaryGap(22) == 2);
    printf("\nTest 1: PASS\n");

    assert(binaryGap(8) == 0);
    printf("Test 2: PASS\n");

    assert(binaryGap(5) == 2);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
