#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void preenche(float *v, int n) {
    float *p;

    for (p = v; p < v + n; p++) {
        *p = (float) rand() / RAND_MAX * 100;
    }
}

void soma_vetor(float *v, int n, float *soma) {
    float *p;

    *soma = 0;
    for (p = v; p < v + n; p++) {
        *soma += *p;
    }
}

int main() {
    float v[TAM];
    float soma;
    float *p;

    srand(time(NULL));

    preenche(v, TAM);

    printf("Vetor: ");
    for (p = v; p < v + TAM; p++) {
        printf("%.2f ", *p);
    }
    printf("\n");

    soma_vetor(v, TAM, &soma);

    printf("Soma: %.2f\n", soma);

    return 0;
}
