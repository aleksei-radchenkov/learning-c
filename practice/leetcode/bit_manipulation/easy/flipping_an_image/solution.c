#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

int **flipAndInvertImage(
        int **image,
        int imageSize,
        int *imageColSize,
        int *returnSize,
        int **returnColumnSizes
    )
{

}

int main()
{
    int* image1[3];
    int image1_0[3] = {1, 1, 0};
    int image1_1[3] = {1, 0, 1};
    int image1_2[3] = {0, 0, 0};
    image1[0] = image1_0;
    image1[1] = image1_1;
    image1[2] = image1_2;

    int* image2[4];
    int image2_0[4] = {1, 1, 0, 0};
    int image2_1[4] = {1, 0, 0, 1};
    int image2_2[4] = {0, 1, 1, 1};
    int image2_3[4] = {1, 0, 1, 0};
    image2[0] = image2_0;
    image2[1] = image2_1;
    image2[2] = image2_2;
    image2[3] = image2_3;
    
    int colSize1 = 3;
    int returnSize1;
    int* returnColSizes1;
    int** result1 = flipAndInvertImage(image1, 3, &colSize1, &returnSize1, &returnColSizes1);

    int colSize2 = 4;
    int returnSize2;
    int* returnColSizes2;
    int** result2 = flipAndInvertImage(image2, 4, &colSize2, &returnSize2, &returnColSizes2);

    assert(result1[0][0] == 1 && result1[0][1] == 0 && result1[0][2] == 0);
    assert(result1[1][0] == 0 && result1[1][1] == 1 && result1[1][2] == 0);
    assert(result1[2][0] == 1 && result1[2][1] == 1 && result1[2][2] == 1);
    printf("\nTest 1: PASS\n");

    assert(result2[0][0] == 1 && result2[0][1] == 1 && result2[0][2] == 0 && result2[0][3] == 0);
    assert(result2[1][0] == 0 && result2[1][1] == 1 && result2[1][2] == 1 && result2[1][3] == 0);
    assert(result2[2][0] == 0 && result2[2][1] == 0 && result2[2][2] == 0 && result2[2][3] == 1);
    assert(result2[3][0] == 1 && result2[3][1] == 0 && result2[3][2] == 1 && result2[3][3] == 0);
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
