#include <stdio.h>

#define MAX 50

void pr(float arr_numbers[MAX], char arr_operators[MAX], int N) {
    int j = 0;
    for (j = 0; j < N; j++) {
        printf("%f ", arr_numbers[j]);
    }
    for (j = 0; j < N - 1; j++) {
        printf("%c ", arr_operators[j]);
    }
    printf("\n");
}

void read(float arr_numbers[MAX], char arr_operators[MAX], int N) {
    int j = 0;
    for (j = 0; j < N; j++) {
        scanf("%f", &arr_numbers[j]);
    }
    scanf("%c", &arr_operators[0]);
    for (j = 0; j < N - 1; j++) {
        scanf("%c", &arr_operators[j]);
    }
}

int arr_elim(float arr_numbers[MAX], char arr_operators[MAX], int N, int i) {
    int j = 0;
    for (j = i + 1; j < N; j++) {
        arr_numbers[j] = arr_numbers[j + 1];
    }
    for (j = i; j < N - 1; j++) {
        arr_operators[j] = arr_operators[j + 1];
    }
    N--;
// pr(arr_numbers, arr_operators, N);
    return N;
}

int high_priority(float arr_numbers[MAX], char arr_operators[MAX], int N) {
    int i = 0;
    for (i = 0; i < N - 1; i++) {
        if (arr_operators[i] == '*') {
            arr_numbers[i] = arr_numbers[i] * arr_numbers[i + 1];
            N = arr_elim(arr_numbers, arr_operators, N, i);
            i--;
        } else {
            if (arr_operators[i] == '/') {
                arr_numbers[i] = arr_numbers[i] / arr_numbers[i + 1];
                N = arr_elim(arr_numbers, arr_operators, N, i);
                i--;
            }
        }
    }
    return N;
}

int low_priority(float arr_numbers[MAX], char arr_operators[MAX], int N) {
    int i = 0;
    for (i = 0; i < N - 1; i++) {
        if (arr_operators[i] == '+') {
            arr_numbers[i] = arr_numbers[i] + arr_numbers[i + 1];
            N = arr_elim(arr_numbers, arr_operators, N, i);
            i--;
        } else {
            if (arr_operators[i] == '-') {
                arr_numbers[i] = arr_numbers[i] - arr_numbers[i + 1];
                N = arr_elim(arr_numbers, arr_operators, N, i);
                i--;
            }
        }
    }
    return N;
}

int main() {
    int N = 0;
    float arr_numbers[MAX] = {0};
    char arr_operators[MAX] = {0};
    scanf("%d", &N);
    read(arr_numbers, arr_operators, N);
// pr(arr_numbers, arr_operators, N);
    N = high_priority(arr_numbers, arr_operators, N);
    N = low_priority(arr_numbers, arr_operators, N);
// printf("%d\n", N);
    printf("%f\n", arr_numbers[0]);
    return 0;
}
