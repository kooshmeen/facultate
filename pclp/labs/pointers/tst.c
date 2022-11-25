#include <stdio.h>

void cuc (int *p) {
    *p = *p - 1;
}

int main () {
    int n = 5;
    printf("\n%d\n", n);
    cuc(&n);
    printf("\n%d\n", n);
    return 0;
}