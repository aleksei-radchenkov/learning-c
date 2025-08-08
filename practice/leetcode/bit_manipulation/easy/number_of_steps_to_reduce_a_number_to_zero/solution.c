#include <stdio.h>
#include <assert.h>

int numberOfSteps(int num)
{

}

int main()
{
    assert(numberOfSteps(14) == 6);
    printf("\nTest 1: PASS\n");

    assert(numberOfSteps(8) == 4);
    printf("Test 2: PASS\n");

    assert(numberOfSteps(123) == 12);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
