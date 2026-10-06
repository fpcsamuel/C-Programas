#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

void bolha(int *v, int n) {
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

int main() {
    int v[TAM];
    int *p;

    srand(time(NULL));

    for (p = v; p < v + TAM; p++) {
        *p = rand() % 100;
    }

    printf("Antes:  ");
    for (p = v; p < v + TAM; p++) printf("%d ", *p);
    printf("\n");

    bolha(v, TAM);

    printf("Depois: ");
    for (p = v; p < v + TAM; p++) printf("%d ", *p);
    printf("\n");

    return 0;
}
