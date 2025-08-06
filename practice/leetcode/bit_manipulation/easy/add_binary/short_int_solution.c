#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    long long int na=0, nb=0;
    for (int i = strlen(a)-1; i>=0; i--) na += (1 << (strlen(a)-i-1)) * (a[i] == '1');
    for (int i = strlen(b)-1; i>=0; i--) nb += (1 << (strlen(b)-i-1)) * (b[i] == '1');
    long long int sum = na+nb, size = sum ? floor(log2(sum))+1 : 0;
    char *ret = malloc(size+1);
    for(int i = size-1; i >= 0; i--, sum >>= 1) ret[i] = (sum & 1) ? '1' : '0';
    if (!size) {
        free(ret);
        ret = malloc(2);
        ret[0] = '0', size++;
    }
    ret[size] = '\0';
    return ret;
}

int main() {
    assert(!strcmp(addBinary("11", "1"),"100"));
    printf("\nTest 1: PASS\n");

    assert(!strcmp(addBinary("1010", "1011"), "10101"));
    printf("Test 1: PASS\n\n");

    printf("Success!\n");

    return 0;
}
