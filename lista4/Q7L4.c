#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3

int main() {
    int v[TAM];
    int i;
    int soma = 0;
    double produto = 1.0;
    double media_aritmetica, media_geometrica;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        v[i] = rand() % 20;
        soma += v[i];
        produto *= v[i];
    }

    printf("Vetor gerado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    media_aritmetica = (double) soma / TAM;
    media_geometrica = pow(produto, 1.0 / TAM);

    printf("Média aritmética: %.2f\n", media_aritmetica);
    printf("Média geométrica: %.2f\n", media_geometrica);

    return 0;
}
