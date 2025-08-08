#include <stdio.h>
#include <assert.h>

int findKOr(int *nums, int numsSize, int k)
{

}

int main()
{
    int nums1[] = {7, 12, 9, 8, 9, 15};
    int nums2[] = {2, 12, 1, 11, 4, 5};
    int nums3[] = {10, 8, 5, 9, 11, 6, 8};

    assert(findKOr(nums1, 6, 4) == 9);
    printf("\nTest 1: PASS\n");

    assert(findKOr(nums2, 6, 6) == 0);
    printf("Test 2: PASS\n");

    assert(findKOr(nums3, 7, 1) == 15);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
