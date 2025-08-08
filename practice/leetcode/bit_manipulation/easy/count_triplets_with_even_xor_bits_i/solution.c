#include <stdio.h>
#include <assert.h>

int countTriplets(int *a, int aSize, int *b, int bSize, int *c, int cSize)
{

}

int main()
{
    int a1[] = {1};
    int b1[] = {2};
    int c1[] = {3};

    int a2[] = {1, 1};
    int b2[] = {2, 3};
    int c2[] = {1, 5};

    assert(countTriplets(a1, 1, b1, 1, c1, 1) == 1);
    printf("\nTest 1: PASS\n");

    assert(countTriplets(a2, 2, b2, 2, c2, 2) == 4);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
