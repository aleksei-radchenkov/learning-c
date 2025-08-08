#include <stdio.h>
#include <assert.h>

int sumIndicesWithKSetBits(int *nums, int numsSize, int k)
{

}

int main()
{
    int nums1[] = {5, 10, 1, 5, 2};
    int nums2[] = {4, 3, 2, 1};

    assert(sumIndicesWithKSetBits(nums1, 5, 1) == 13);
    printf("\nTest 1: PASS\n");

    assert(sumIndicesWithKSetBits(nums2, 4, 2) == 1);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
