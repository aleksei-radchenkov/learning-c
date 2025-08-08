#include <stdio.h>
#include <string.h>
#include <assert.h>

int countConsistentStrings(char *allowed, char **words, int wordsSize)
{

}

int main()
{
    char *words1[] = {"ad", "bd", "aaab", "baa", "badab"};
    char *words2[] = {"a", "b", "c", "ab", "ac", "bc", "abc"};
    char *words3[] = {"cc", "acd", "b", "ba", "bac", "bad", "ac", "d"};

    assert(countConsistentStrings("ab", words1, 5) == 2);
    printf("\nTest 1: PASS\n");

    assert(countConsistentStrings("abc", words2, 7) == 7);
    printf("Test 2: PASS\n");

    assert(countConsistentStrings("cad", words3, 8) == 4);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
