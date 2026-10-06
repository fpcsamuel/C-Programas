#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 100

void imprime(int v[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", v[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

void ordena_selecao(int v[], int n) {
    int i, j, pos_menor, aux;

    for (i = 0; i < n - 1; i++) {
        pos_menor = i;
        for (j = i + 1; j < n; j++) {
            if (v[j] < v[pos_menor]) {
                pos_menor = j;
            }
        }
        aux = v[i];
        v[i] = v[pos_menor];
        v[pos_menor] = aux;
    }
}

void ordena_bolha(int v[], int n) {
    int i, j, aux;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (v[j] > v[j + 1]) {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
}

int main() {
    int v1[TAM], v2[TAM];
    int i, minimo, maximo;

    printf("Digite o valor mínimo do intervalo: ");
    scanf("%d", &minimo);
    printf("Digite o valor máximo do intervalo: ");
    scanf("%d", &maximo);

    if (minimo > maximo) {
        printf("Intervalo inválido (mínimo maior que o máximo).\n");
        return 1;
    }

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        v1[i] = minimo + rand() % (maximo - minimo + 1);
        v2[i] = v1[i];
    }

    ordena_selecao(v1, TAM);
    printf("\nOrdenado por seleção:\n");
    imprime(v1, TAM);

    ordena_bolha(v2, TAM);
    printf("\nOrdenado por bolha:\n");
    imprime(v2, TAM);

    return 0;
}
