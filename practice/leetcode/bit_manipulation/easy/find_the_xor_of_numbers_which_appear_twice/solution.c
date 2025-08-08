#include <stdio.h>
#include <assert.h>

int duplicateNumbersXOR(int *nums, int numsSize)
{

}

int main()
{
    int nums1[] = {1, 2, 1, 3};
    int nums2[] = {1, 2, 3};
    int nums3[] = {1, 2, 2, 1};

    assert(duplicateNumbersXOR(nums1, 4) == 1);
    printf("\nTest 1: PASS\n");

    assert(duplicateNumbersXOR(nums2, 3) == 0);
    printf("Test 2: PASS\n");

    assert(duplicateNumbersXOR(nums3, 4) == 3);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
