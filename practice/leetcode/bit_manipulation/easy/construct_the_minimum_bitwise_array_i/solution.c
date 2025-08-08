#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *constructMinimumArray(int *nums, int numsSize, int *returnSize)
{
}

int main()
{
    int size;
    
    int nums1[] = {2, 3, 5, 7};
    int *result1 = constructMinimumArray(nums1, 4, &size);

    int nums2[] = {11, 13, 31};
    int *result2 = constructMinimumArray(nums2, 3, &size);

    assert(result1[0] == -1 && result1[1] == 1 && result1[2] == 4 && result1[3] == 3);
    printf("\nTest 1: PASS\n");
    
    assert(result2[0] == 9 && result2[1] == 12 && result2[2] == 15);
    printf("Test 2: PASS\n\n");
    
    printf("Success!\n");

    return 0;
}
