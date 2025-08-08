#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int *decode(int *encoded, int encodedSize, int first, int *returnSize)
{

}

int main()
{
    int encoded1[] = {1, 2, 3};
    int size1;
    int *result1 = decode(encoded1, 3, 1, &size1);

    int encoded2[] = {6, 2, 7, 3};
    int size2;
    int *result2 = decode(encoded2, 4, 4, &size2);

    assert(result1[0] == 1 && result1[1] == 0 && result1[2] == 2 && result1[3] == 1);
    printf("\nTest 1: PASS\n");

    assert(result2[0] == 4 && result2[1] == 2 && result2[2] == 0 && result2[3] == 7 && result2[4] == 4);
    printf("Test 2: PASS\n\n");

    printf("\nSuccess!\n");

    return 0;
}
