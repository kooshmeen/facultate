#include <stdio.h>
     
#define N 100
     
void sum_right_neighbour(int v[N], int n) {
    int i;
     
    for (i = 0; i < n - 1; i++) {
        v[i] += v[i+1];
    }
}
    
void sum_left_neighbour(int v[N], int n) {
    int i = 0;
    for (i = 1; i < n; i++) {
        v[i] += v[i-1];
    }
}

void arr_mult(int v[N], int n) {
    int arr_prod[N] = {1};
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i != j)
                arr_prod[i] *= v[j];
        }
    }
}

void print_vector(int v[N], int n) {
    int i;
 
    for (i = 0; i < n; i++) {
	printf("%d ", v[i]);
    }
    printf("\n");
}

void elim_min(int v[N], int n) {
    int i = 0;
    for (int i = 0; i < n - 1; i++) {
        v[i] = v[i + 1];
    }
}


int main(void) {
    int v[N] = {1, 2, 3, 4, 5};
    int size=5;
    print_vector(v, 5);
    sum_right_neighbour(v, 5);
    print_vector(v, 5);
    sum_left_neighbour(v, 5);
    print_vector(v, 5);

    char com = 0;
    scanf ("%c",&com);

    while (com != 'q') {
        printf("\n");
        if (com == 'm') {
            elim_min(v, size);
            size--;
        } else if (com == 'M') {
            size--;
        } else if (com == 'p'){
            print_vector(v, size);
        }
        scanf("%c", &com);
    }

    return 0;
}

