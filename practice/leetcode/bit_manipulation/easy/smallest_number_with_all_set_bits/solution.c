#include <stdio.h>
#include <assert.h>

int smallestAllOnesNumber(int n)
{

}

int main()
{
    assert(smallestAllOnesNumber(5) == 7);
    printf("\nTest 1: PASS\n");

    assert(smallestAllOnesNumber(10) == 15);
    printf("Test 2: PASS\n");

    assert(smallestAllOnesNumber(3) == 3);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
