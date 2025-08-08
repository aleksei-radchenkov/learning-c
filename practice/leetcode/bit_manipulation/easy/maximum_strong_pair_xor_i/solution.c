#include <stdio.h>
#include <assert.h>

int maximumStrongPairXor(int *nums, int numsSize)
{

}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {10, 100};
    int nums3[] = {5, 6, 25, 30};

    assert(maximumStrongPairXor(nums1, 5) == 7);
    printf("\nTest 1: PASS\n");

    assert(maximumStrongPairXor(nums2, 2) == 0);
    printf("Test 2: PASS\n");

    assert(maximumStrongPairXor(nums3, 4) == 7);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
