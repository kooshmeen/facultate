#include <stdio.h>

#define TRK 7
#define TRT 11

void num_check(int num) {
    if (num % TRK == 0) {
        if (num % TRT == 0) {
            printf("TrickOrTreat");
        } else {
            printf("Trick");
        }
    } else {
        if ( num % TRT == 0 ) {
            printf("Treat");
        } else {
            printf("%d", num);
        }
    }
}

int main() {
    int N = 0, num = 0;
    printf("Introduceti valoarea numarului natural N:\n");
    scanf("%d", &N);
    for (num = 1; num < N; num++) {
        num_check(num);
        printf(" ");
    }
    if (N) {
        num_check(N);
    }
    return 0;
}
