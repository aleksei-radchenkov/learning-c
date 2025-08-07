#include <stdio.h>
#include <assert.h>

char findTheDifference(char* s, char* t)
{
}

int main()
{
    char s1[] = "abcd";
    char t1[] = "abcde";
    char s2[] = "";
    char t2[] = "y";

    assert(findTheDifference(s1, t1) == 'e');
    printf("Test 1: PASS\n");

    assert(findTheDifference(s2, t2) == 'y');
    printf("Test 2: PASS\n");

    printf("Success!\n");

    return 0;
}
