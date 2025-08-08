#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

int countNodes(struct TreeNode *root) {
}

int main() {
    struct TreeNode n6 = {6, NULL, NULL};
    struct TreeNode n5 = {5, NULL, NULL};
    struct TreeNode n4 = {4, NULL, NULL};
    struct TreeNode n3 = {3, NULL, NULL};
    struct TreeNode n2 = {2, &n4, &n5};
    struct TreeNode n1 = {1, &n2, &n3};
    struct TreeNode single = {1, NULL, NULL};

    assert(countNodes(&n1) == 6);
    printf("\nTest 1: PASS\n");

    assert(countNodes(NULL) == 0);
    printf("Test 2: PASS\n");

    assert(countNodes(&single) == 1);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
