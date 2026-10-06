#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 7
#define TAM 14

int main() {
    int X[TAM], Y[TAM];
    int M[N][N] = {0};
    int i, j;
    int *px, *py;

    srand(time(NULL));

    for (px = X, py = Y; px < X + TAM; px++, py++) {
        *px = rand() % N;
        *py = rand() % N;
    }

    for (px = X, py = Y; px < X + TAM; px++, py++) {
        M[*py][*px]++;
    }

    printf("X = ");
    for (i = 0; i < TAM; i++) printf("%d ", X[i]);
    printf("\nY = ");
    for (i = 0; i < TAM; i++) printf("%d ", Y[i]);

    printf("\n\nM =\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
