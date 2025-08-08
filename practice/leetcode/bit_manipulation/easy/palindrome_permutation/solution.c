#include <stdio.h>
#include <stdbool.h>
#include <assert.h>
#include <string.h>

bool canPermutePalindrome(char *s)
{

}

int main()
{
    assert(canPermutePalindrome("code") == false);
    printf("\nTest 1: PASS\n");

    assert(canPermutePalindrome("aab") == true);
    printf("Test 2: PASS\n");

    assert(canPermutePalindrome("carerac") == true);
    printf("Test 3: PASS\n\n");

    printf("Success!\n");

    return 0;
}
