#include <stdio.h>
#include <assert.h>

int subsetXORSum(int *nums, int numsSize)
{

}

int main()
{
    int nums1[] = {1, 3};
    int nums2[] = {5, 1, 6};
    int nums3[] = {3, 4, 5, 6, 7, 8};

    assert(subsetXORSum(nums1, 2) == 6);
    printf("\nTest 1: PASS\n");

    assert(subsetXORSum(nums2, 3) == 28);
    printf("Test 2: PASS\n");

    assert(subsetXORSum(nums3, 6) == 480);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
