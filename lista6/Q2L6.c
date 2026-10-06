#include <stdio.h>

#define TAM 8

void acha_pares(int *v, int n, int **enderecos) {
    int *p;

    *(enderecos) = NULL;
    *(enderecos + 1) = NULL;

    for (p = v; p < v + n; p++) {
        if (*p % 2 == 0) {
            if (*enderecos == NULL) {
                *enderecos = p;
            }
            *(enderecos + 1) = p;
        }
    }
}

int main() {
    int v[TAM];
    int *p;
    int *enderecos[2];

    for (p = v; p < v + TAM; p++) {
        printf("Digite o elemento %ld: ", (long) (p - v) + 1);
        scanf("%d", p);
    }

    acha_pares(v, TAM, enderecos);

    if (enderecos[0] == NULL) {
        printf("O vetor não tem elementos pares.\n");
    } else {
        printf("Primeiro par: %d, endereço %p\n", *enderecos[0], (void *) enderecos[0]);
        printf("Último par:   %d, endereço %p\n", *enderecos[1], (void *) enderecos[1]);
    }

    return 0;
}
