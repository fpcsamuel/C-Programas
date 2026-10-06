#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

void gera_matriz(int *m, int n) {
    int i;
    for (i = 0; i < n * n; i++) {
        *(m + i) = rand() % 10;
    }
}

void imprime(int *m, int n) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d", *(m + i * n + j));
        }
        printf("\n");
    }
}

int soma_diagonal(int *m, int n) {
    int i, soma = 0;
    for (i = 0; i < n; i++) {
        soma += *(m + i * n + i);
    }
    return soma;
}

int main() {
    int M[N][N];
    int soma;

    srand(time(NULL));

    gera_matriz(&M[0][0], N);

    printf("Matriz:\n");
    imprime(&M[0][0], N);

    soma = soma_diagonal(&M[0][0], N);

    printf("\nSoma da diagonal principal: %d\n", soma);
    if (soma % 2 == 0) {
        printf("A soma é PAR.\n");
    } else {
        printf("A soma é ÍMPAR.\n");
    }

    return 0;
}
