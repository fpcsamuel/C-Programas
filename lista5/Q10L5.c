#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main() {
    int X[TAM];
    int F[N] = {0};
    int *p;
    int i;

    srand(time(NULL));

    for (p = X; p < X + TAM; p++) {
        *p = rand() % N;
    }

    for (p = X; p < X + TAM; p++) {
        *(F + *p) += 1;
    }

    printf("X = [");
    for (i = 0; i < TAM; i++) {
        printf("%d%s", X[i], i < TAM - 1 ? ", " : "");
    }
    printf("]\n");

    printf("F = [");
    for (i = 0; i < N; i++) {
        printf("%d%s", F[i], i < N - 1 ? ", " : "");
    }
    printf("]\n");

    return 0;
}
