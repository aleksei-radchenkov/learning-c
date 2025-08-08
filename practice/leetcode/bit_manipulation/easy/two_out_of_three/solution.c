#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *twoOutOfThree(int *nums1, int nums1Size, int *nums2, int nums2Size, int *nums3, int nums3Size, int *returnSize)
{
}

int main()
{
    int nums1[] = {1, 1, 3, 2};
    int nums2[] = {2, 3};
    int nums3[] = {3};
    int size;
    int *result1 = twoOutOfThree(nums1, 4, nums2, 2, nums3, 1, &size);

    int nums4[] = {3, 1};
    int nums5[] = {2, 3};
    int nums6[] = {1, 2};
    int *result2 = twoOutOfThree(nums4, 2, nums5, 2, nums6, 2, &size);

    int nums7[] = {1, 2, 2};
    int nums8[] = {4, 3, 3};
    int nums9[] = {5};
    int *result3 = twoOutOfThree(nums7, 3, nums8, 3, nums9, 1, &size);

    assert((size == 2 && ((result1[0] == 3 && result1[1] == 2) || (result1[0] == 2 && result1[1] == 3))));
    printf("\nTest 1: PASS\n");

    assert(size == 3);
    printf("Test 2: PASS\n");

        assert(size == 0);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
