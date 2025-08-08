#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *sortByBits(int *arr, int arrSize, int *returnSize)
{

}

int main()
{
    int arr1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    int size1;
    int *result1 = sortByBits(arr1, 9, &size1);
    int expected1[] = {0, 1, 2, 4, 8, 3, 5, 6, 7};

    int arr2[] = {1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
    int size2;
    int *result2 = sortByBits(arr2, 11, &size2);
    int expected2[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024};

    for (int i = 0; i < 9; i++) assert(result1[i] == expected1[i]);
    printf("\nTest 1: PASS\n");

    for (int i = 0; i < 11; i++) assert(result2[i] == expected2[i]);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
