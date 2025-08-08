#include <stdio.h>
#include <assert.h>

char repeatedCharacter(char *s)
{

}

int main()
{
    assert(repeatedCharacter("abccbaacz") == 'c');
    printf("\nTest 1: PASS\n");

    assert(repeatedCharacter("abcdd") == 'd');
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
