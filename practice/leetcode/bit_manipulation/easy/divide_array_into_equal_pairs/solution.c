#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

bool divideArray(int *nums, int numsSize)
{

}

int main()
{
    int nums1[] = {3, 2, 3, 2, 2, 2};
    int nums2[] = {1, 2, 3, 4};

    assert(divideArray(nums1, 6) == true);
    printf("\nTest 1: PASS\n");

    assert(divideArray(nums2, 4) == false);
    printf("Test 2: PASS\n");

    printf("Success!\n\n");

    return 0;
}
