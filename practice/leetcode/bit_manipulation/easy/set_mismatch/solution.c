#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int* findErrorNums(int* nums, int numsSize, int* returnSize)
{
}

int main()
{
    int nums1[] = {1,2,2,4};
    int nums2[] = {1,1};
    int returnSize;
    int* result1, result2;
    int expected1[] = {2,3};
    int expected2[] = {1,2};

    result1 = findErrorNums(nums1, 4, &returnSize);
    result2 = findErrorNums(nums2, 2, &returnSize);

    assert(returnSize == 2);
    assert(result1[0] == expected1[0] && result1[1] == expected1[1]);
    printf("Test 1: PASS\n");

    assert(returnSize == 2);
    assert(result2[0] == expected2[0] && result2[1] == expected2[1]);
    printf("Test 2: PASS\n");

    printf("Success!\n");

    free(result1);
    free(result2);

    return 0;
}
