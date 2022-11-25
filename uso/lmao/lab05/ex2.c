#include <stdio.h>

#define MAX 22

void print_arr(int v[MAX], int n) {
    int i = 0;
    printf("\n-----\n");
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n-----\n");
}

int main() {

    int v[MAX]={0};
    int i = 0;
    int num_elems = 0;
    int flag = 1;
    while (flag) {
        scanf("%d", &v[i]);
        i++;
        num_elems++;
        if (num_elems == 20)
            flag = 0;
        if (v[i-1] <= 0) {
            num_elems--;
            flag = 0;
        }
    }
    printf("\n");
    for (i = 0; i < num_elems; i++) {
        if (v[i] > i) {
            printf("%d ",v[i]);
        }
    }
    printf("\n");
    return 0;
}