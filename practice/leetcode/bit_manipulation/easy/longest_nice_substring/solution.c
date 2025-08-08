#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

char *longestNiceSubstring(char *s)
{
}

int main()
{
    char *result1 = longestNiceSubstring("YazaAay");
    char *result2 = longestNiceSubstring("Bb");
    char *result3 = longestNiceSubstring("c");

    assert(strcmp(result1, "aAa") == 0);
    printf("\nTest 1: PASS\n");

    assert(strcmp(result2, "Bb") == 0);
    printf("Test 2: PASS\n");

    assert(strcmp(result3, "") == 0);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
