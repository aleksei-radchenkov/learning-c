#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char **readBinaryWatch(int turnedOn, int *returnSize)
{
}

int main()
{
    int returnSize1, returnSize2;
    char **result1, **result2;
    char *expected1[] = {"0:01", "0:02", "0:04", "0:08", "0:16", "0:32", "1:00", "2:00", "4:00", "8:00"};
    int expected1_size = 10;

    result1 = readBinaryWatch(1, &returnSize1);
    result2 = readBinaryWatch(9, &returnSize2);

    assert(returnSize1 == expected1_size);
    for (int i = 0; i < returnSize1; i++) {
        assert(strcmp(result1[i], expected1[i]) == 0);
    }
    printf("\nTest 1: PASS\n");

    assert(returnSize2 == 0);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    for (int i = 0; i < returnSize1; i++) {
        free(result1[i]);
    }

    free(result1);
    free(result2);

    return 0;
}
