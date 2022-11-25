#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void prt (int *v, int n) {
    int i = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", *(v + i));
    }
}

int cmp (const void *a, const void *b) {
    int a1 = *(const int*)a;
    int a2 = *(const int*)b;
    if (a1 < a2) return -1;
    if (a1 > a2) return 1;
    return 0;
}

int main () {
    int n=0, max=0, i;
    scanf("%d%d", &n, &max);
    int *v = malloc (n * sizeof(int));
    prt(v, n);
    printf("\n");
    srand(time(NULL));
    for (i = 0; i < n; i++) {
        *(v + i) = rand() % (max + 1);
    }
    qsort(v, n, sizeof(int),cmp);
    prt(v, n);
    free(v);
    return 0;
}