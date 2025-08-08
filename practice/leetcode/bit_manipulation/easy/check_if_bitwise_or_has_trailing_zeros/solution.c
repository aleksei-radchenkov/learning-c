#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool hasTrailingZeros(int *nums, int numsSize)
{

}

int main()
{
    int nums1[] = {1, 2, 3, 4, 5};
    int nums2[] = {2, 4, 8, 16};
    int nums3[] = {1, 3, 5, 7, 9};

    assert(hasTrailingZeros(nums1, 5) == true);
    printf("\nTest 1: PASS\n");

    assert(hasTrailingZeros(nums2, 4) == true);
    printf("Test 2: PASS\n");

    assert(hasTrailingZeros(nums3, 5) == false);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
