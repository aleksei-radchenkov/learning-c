#include <stdio.h>
#include <assert.h>

int missingNumber(int *nums, int numsSize)
{
    int s = 0;
    for (int i = 0; i < numsSize; i++) s += nums[i];
    return (numsSize * (numsSize + 1) / 2) - s;
}

int main()
{
    int nums1[] = {3, 0, 1};
    int nums2[] = {0, 1};
    int nums3[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};

    assert(missingNumber(nums1, 3) == 2);
    printf("\nTest 1: PASS\n");

    assert(missingNumber(nums2, 2) == 2);
    printf("Test 2: PASS\n");

    assert(missingNumber(nums3, 9) == 8);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
