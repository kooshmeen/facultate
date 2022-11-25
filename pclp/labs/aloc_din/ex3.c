#include <stdio.h>
#include <stdlib.h>

#define N 100

void prt (char *v) {
    int i = 0;
    for (i = 1; i <= *v; i++) {
        printf("%c",*(v + i));
    }
}

char *build_number (int value) {
    int aux = value;
    int digits = 0;
    while (aux) {
        digits++;
        aux /= 10;
    }
    
}

int main () {
    char *v = malloc(N * sizeof(char));
    *v = 0;
    
    free(v);
    return 0;
}