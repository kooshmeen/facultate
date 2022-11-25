#include <stdio.h>

#define MAX 50

void read(float arr_numbers[MAX], char arr_operators[MAX], int N) {
    int i = 0;
    for (i = 0; i < N; i++) {
        scanf("%f", &arr_numbers[i]);
    }
    scanf("%c", &arr_operators[0]);
    for (i = 0; i < N - 1; i++) {
        scanf("%c", &arr_operators[i]);
    }
}
void operation(float arr_numbers[MAX], char arr_operators[MAX], int N, int i) {
    switch (arr_operators[i]) {
        case '+':
            arr_numbers[i+1] = arr_numbers[i] + arr_numbers[i+1];
            break;
        case '-':
            arr_numbers[i+1] = arr_numbers[i] - arr_numbers[i+1];
            break;
        case '*':
            arr_numbers[i+1] = arr_numbers[i] * arr_numbers[i+1];
            break;
        case '/':
            arr_numbers[i+1] = arr_numbers[i] / arr_numbers[i+1];
            break;
        default:
//            printf("\nwhat\n");
            break;
    }
}
int main() {
    int N = 0, i = 0;
    float arr_numbers[MAX] = {0};
    char arr_operators[MAX] = {0};
    scanf("%d", &N);
    read(arr_numbers, arr_operators, N);
    for (i = 0; i < N - 1; i++) {
        operation(arr_numbers, arr_operators, N, i);
    }
    printf("%f\n", arr_numbers[N-1]);
    return 0;
}
