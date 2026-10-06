#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 15
#define LIMITE 10

void gera(int *v, int n) {
    int *p;
    for (p = v; p < v + n; p++) {
        *p = rand() % LIMITE;
    }
}

float media(int *v, int n) {
    int *p;
    int soma = 0;

    for (p = v; p < v + n; p++) {
        soma += *p;
    }
    return (float) soma / n;
}

void ordena(int *v, int n) {
    int *p;
    int i, aux;

    for (i = 0; i < n - 1; i++) {
        for (p = v; p < v + n - 1 - i; p++) {
            if (*p > *(p + 1)) {
                aux = *p;
                *p = *(p + 1);
                *(p + 1) = aux;
            }
        }
    }
}

float mediana(int *v, int n) {
    int copia[TAM];
    int i;

    for (i = 0; i < n; i++) {
        *(copia + i) = *(v + i);
    }
    ordena(copia, n);

    if (n % 2 == 1) {
        return *(copia + n / 2);
    }
    return (*(copia + n / 2 - 1) + *(copia + n / 2)) / 2.0;
}

int moda(int *v, int n) {
    int contagem[LIMITE] = {0};
    int *p;
    int i, valor_moda = 0;

    for (p = v; p < v + n; p++) {
        *(contagem + *p) += 1;
    }

    for (i = 1; i < LIMITE; i++) {
        if (*(contagem + i) > *(contagem + valor_moda)) {
            valor_moda = i;
        }
    }
    return valor_moda;
}

int main() {
    int v[TAM];
    int *p;

    srand(time(NULL));
    gera(v, TAM);

    printf("Vetor: ");
    for (p = v; p < v + TAM; p++) {
        printf("%d ", *p);
    }
    printf("\n");

    printf("Média:   %.2f\n", media(v, TAM));
    printf("Mediana: %.2f\n", mediana(v, TAM));
    printf("Moda:    %d\n", moda(v, TAM));

    return 0;
}
