#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int size = (strlen(a) > strlen(b)) ? strlen(a) : strlen(b), carry = 0;
    char *ret = malloc(size+1);
    for (int i = 0; i < size; i++) {
        int sum = (((i < strlen(a)) ? a[strlen(a)-i-1] : '0') == '1') + (((i < strlen(b)) ? b[strlen(b)-i-1]: '0') == '1') + carry;
        ret[size-i-1] = (sum % 2) ? '1' : '0';
        carry = (sum > 1) ? 1 : 0;
    }
    ret[size] = '\0';
    if (carry) {
        char *new = malloc((++size)+1);
        strcpy(new+1, ret);
        free(ret);
        ret = new;
        ret[0] = '1';
    }
    return ret;
}

int main() {
    assert(!strcmp(addBinary("11", "1"),"100"));
    printf("\nTest 1: PASS\n");

    assert(!strcmp(addBinary("1010", "1011"), "10101"));
    printf("Test 2: PASS\n\n");

    printf("Success!\n");

    return 0;
}
