#include <stdio.h>

#define TAM 6

void normaliza(int *x, float *xn, int n) {
    int *p;
    float *q;
    int menor = *x, maior = *x;

    for (p = x; p < x + n; p++) {
        if (*p < menor) menor = *p;
        if (*p > maior) maior = *p;
    }

    for (p = x, q = xn; p < x + n; p++, q++) {
        if (maior == menor) {
            *q = 0;
        } else {
            *q = (float) (*p - menor) / (maior - menor);
        }
    }
}

int main() {
    int x[TAM];
    float xn[TAM];
    int *p;
    float *q;

    for (p = x; p < x + TAM; p++) {
        printf("Digite o elemento %ld: ", (long) (p - x) + 1);
        scanf("%d", p);
    }

    normaliza(x, xn, TAM);

    printf("\nOriginal     Normalizado\n");
    for (p = x, q = xn; p < x + TAM; p++, q++) {
        printf("%8d     %.4f\n", *p, *q);
    }

    return 0;
}
