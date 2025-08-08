#include <stdbool.h>
#include <stdio.h>
#include <assert.h>

bool *prefixesDivBy5(int *nums, int numsSize, int *returnSize)
{

}

int main()
{
    int nums1[] = {0, 1, 1};
    int size1;
    bool *result1 = prefixesDivBy5(nums1, 3, &size1);

    int nums2[] = {1, 1, 1};
    int size2;
    bool *result2 = prefixesDivBy5(nums2, 3, &size2);

    assert(result1[0] == true && result1[1] == false && result1[2] == false);
    printf("\nTest 1: PASS\n");

    assert(result2[0] == false && result2[1] == false && result2[2] == false);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
