#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 4
#define COL 5

void gera_matriz(int *m, int lin, int col) {
    int i, j;
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            *(m + i * col + j) = rand() % 256;
        }
    }
}

void binariza(int *m, int *s, int lin, int col, int t) {
    int i, j;
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            if (*(m + i * col + j) > t) {
                *(s + i * col + j) = 1;
            } else {
                *(s + i * col + j) = 0;
            }
        }
    }
}

void imprime(int *m, int lin, int col) {
    int i, j;
    for (i = 0; i < lin; i++) {
        for (j = 0; j < col; j++) {
            printf("%4d", *(m + i * col + j));
        }
        printf("\n");
    }
}

int main() {
    int M[LIN][COL];
    int S[LIN][COL];
    int t;

    srand(time(NULL));

    gera_matriz(&M[0][0], LIN, COL);

    printf("Matriz M:\n");
    imprime(&M[0][0], LIN, COL);

    printf("\nDigite o limiar t: ");
    scanf("%d", &t);

    binariza(&M[0][0], &S[0][0], LIN, COL, t);

    printf("\nMatriz S (binarizada):\n");
    imprime(&S[0][0], LIN, COL);

    return 0;
}
