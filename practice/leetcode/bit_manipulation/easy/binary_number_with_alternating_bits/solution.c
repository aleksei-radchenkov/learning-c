#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool hasAlternatingBits(int n)
{
}

int main()
{
    assert(hasAlternatingBits(5) == true);
    printf("\nTest 1: PASS\n");

    assert(hasAlternatingBits(7) == false);
    printf("Test 2: PASS\n");

    assert(hasAlternatingBits(11) == false);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
