#include <stdio.h>
#include <assert.h>

int minOperations(int *nums, int numsSize, int k)
{

}

int main()
{
    int nums1[] = {3, 1, 5, 4, 2};
    int nums2[] = {3, 1, 5, 4, 2};
    int nums3[] = {3, 2, 5, 3, 1};

    assert(minOperations(nums1, 5, 2) == 4);
    printf("\nTest 1: PASS\n");

    assert(minOperations(nums2, 5, 5) == 5);
    printf("Test 2: PASS\n");

    assert(minOperations(nums3, 5, 3) == 4);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
