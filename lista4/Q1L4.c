#include <stdio.h>

#define TAM 15

int main() {
    float v[TAM];
    float menor, maior;
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o elemento %d: ", i + 1);
        scanf("%f", &v[i]);
    }

    menor = v[0];
    maior = v[0];

    for (i = 1; i < TAM; i++) {
        if (v[i] < menor) {
            menor = v[i];
        }
        if (v[i] > maior) {
            maior = v[i];
        }
    }

    printf("Menor: %.2f\n", menor);
    printf("Maior: %.2f\n", maior);
    printf("Soma do menor com o maior: %.2f\n", menor + maior);

    return 0;
}
