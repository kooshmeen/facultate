#include <stdio.h>

int main () {
    int n = 42;
    char *p = &n;
    if ((int)*p == n) {
        printf("Big-endian\n");
    }
    else {
        printf("Little-endian\n");
    }
    return 0;
}