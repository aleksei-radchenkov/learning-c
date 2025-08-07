#include <stdio.h>
#include <assert.h>
#include <string.h>

char findTheDifference(char *s, char *t)
{
    int st = strlen(t), ss = strlen(s), size = (ss > st) ? st : ss, c = 0;
    for (int i = 0; i < size; i++) c ^= (t[i] ^ s[i]);
    c ^= (ss > st) ? s[size] : t[size];
    return (char)c;
}

int main()
{
    char s1[] = "abcd";
    char t1[] = "abcde";
    char s2[] = "";
    char t2[] = "y";

    assert(findTheDifference(s1, t1) == 'e');
    printf("\nTest 1: PASS\n");

    assert(findTheDifference(s2, t2) == 'y');
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
