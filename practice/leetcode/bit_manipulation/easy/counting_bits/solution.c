#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* countBits(int n, int* returnSize) {
    n++;
    int *arr = malloc(sizeof(int) * n);
    *returnSize = n;

    arr[0] = 0;
    for (int i = 0; i < n; i++) arr[i] = arr[i >> 1] + (i & 1);

    return arr;
}

int main()
{
    int returnSize1, returnSize2;
    int *result1, *result2;
    int expected1[] = {0, 1, 1};
    int expected2[] = {0, 1, 1, 2, 1, 2};

    result1 = countBits(2, &returnSize1);
    result2 = countBits(5, &returnSize2);

    for (int i = 0; i < returnSize1; i++) assert(result1[i] == expected1[i]);
    printf("\nTest 1: PASS\n");

    for (int i = 0; i < returnSize2; i++) assert(result2[i] == expected2[i]);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    free(result1);
    free(result2);

    return 0;
}
