#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 8

float erro_medio_quadratico(float *a, float *b, int n) {
    float *pa, *pb;
    float soma = 0, dif;

    for (pa = a, pb = b; pa < a + n; pa++, pb++) {
        dif = *pa - *pb;
        soma += dif * dif;
    }
    return soma / n;
}

int main() {
    float A[TAM], B[TAM];
    float *p;

    srand(time(NULL));

    for (p = A; p < A + TAM; p++) *p = rand() % 11;
    for (p = B; p < B + TAM; p++) *p = rand() % 11;

    printf("A: ");
    for (p = A; p < A + TAM; p++) printf("%.0f ", *p);
    printf("\nB: ");
    for (p = B; p < B + TAM; p++) printf("%.0f ", *p);

    printf("\n\nErro médio quadrático: %.4f\n", erro_medio_quadratico(A, B, TAM));

    return 0;
}
