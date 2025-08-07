#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char *toHex(int num)
{
}

int main()
{
    char *result1, *result2;

    result1 = toHex(26);
    result2 = toHex(-1);

    assert(strcmp(result1, "1a") == 0);
    printf("\nTest 1: PASS\n");

    assert(strcmp(result2, "ffffffff") == 0);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    free(result1);
    free(result2);

    return 0;
}
