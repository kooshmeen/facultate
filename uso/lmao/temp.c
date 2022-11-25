#include <stdio.h>

#define pr printf("%d\n", n);

int main () {
    int const n = 4;
    int *p;
    switch (n) {
        case 4: {
            pr;
        }
        case 5: {
            scanf ("%d", &n);
        }
        case 10: {
            pr;
        }
        default:;
    }
    p = &n;
    *p = *p + 1;
    pr;
    return 0;
}