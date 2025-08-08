#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *bitwiseOrAdjacent(int *nums, int numsSize, int *returnSize)
{
}

int main()
{
    int size;
    
    int nums1[] = {1, 3, 7, 15};
    int *result1 = bitwiseOrAdjacent(nums1, 4, &size);

    int nums2[] = {8, 4, 2};
    int *result2 = bitwiseOrAdjacent(nums2, 3, &size);

    int nums3[] = {5, 4, 9, 11};
    int *result3 = bitwiseOrAdjacent(nums3, 4, &size);

    assert(result1[0] == 3 && result1[1] == 7 && result1[2] == 15);
    printf("\nTest 1: PASS\n");
    
    assert(result2[0] == 12 && result2[1] == 6);
    printf("Test 2: PASS\n");
    
    assert(result3[0] == 5 && result3[1] == 13 && result3[2] == 11);
    printf("Test 3: PASS\n\n");
    
    printf("Success!\n");

    return 0;
}
