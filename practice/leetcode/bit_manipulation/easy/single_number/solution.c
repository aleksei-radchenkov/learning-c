#include <stdio.h>
#include <assert.h>

int singleNumber(int *nums, int numsSize)
{
    int n = 0;
    for (int i = 0; i < numsSize; i++) n ^= nums[i];
    return n;
}

int main()
{
    int nums_1[3] = {2, 2, 1};
    int nums_2[5] = {4, 1, 2, 1, 2};
    int nums_3[1] = {1};

    assert(singleNumber(nums_1, 3) == 1);
    printf("\nTest 1: PASS\n");

    assert(singleNumber(nums_2, 5) == 4);
    printf("Test 2: PASS\n");

    assert(singleNumber(nums_3, 1) == 1);
    printf("Test 1: PASS\n\n");

    printf("Success!\n");

    return 0;
}
