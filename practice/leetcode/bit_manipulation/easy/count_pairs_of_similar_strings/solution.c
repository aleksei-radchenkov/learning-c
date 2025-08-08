#include <stdio.h>
#include <assert.h>

int similarPairs(char **words, int wordsSize)
{

}

int main()
{
    char *words1[] = {"aba", "aabb", "abcd", "bac", "aabc"};
    char *words2[] = {"aabb", "ab", "ba"};
    char *words3[] = {"nba", "cba", "dba"};

    assert(similarPairs(words1, 5) == 2);
    printf("\nTest 1: PASS\n");

    assert(similarPairs(words2, 3) == 3);
    printf("Test 2: PASS\n");

    assert(similarPairs(words3, 3) == 0);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
