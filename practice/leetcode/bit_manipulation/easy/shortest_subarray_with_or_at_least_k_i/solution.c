#include <stdio.h>
#include <assert.h>

int minimumSubarrayLength(int *nums, int numsSize, int k)
{

}

int main()
{
    int nums1[] = {1, 2, 3};
    int nums2[] = {2, 1, 8};
    int nums3[] = {1, 2};

    assert(minimumSubarrayLength(nums1, 3, 2) == 1);
    printf("\nTest 1: PASS\n");

    assert(minimumSubarrayLength(nums2, 3, 10) == 3);
    printf("Test 2: PASS\n");

    assert(minimumSubarrayLength(nums3, 2, 0) == 1);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
