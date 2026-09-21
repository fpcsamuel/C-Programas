#include <stdio.h>
int main(void) {

    int n;
    int valor;
    float menor, maior;

    scanf("%d", &n);
    scanf("%d", &valor);

    menor = maior = valor;

    for (int i = 1; i < n; i++) {

        scanf("%d", &valor);

        if (valor < menor)
            menor = valor;

        if (valor > maior)
            maior = valor;
    }

    printf("xmin = %.0f\n", menor);
    printf("xmax = %.0f\n", maior);
    scanf("%d", &valor);
    float normalizado =
        (valor - menor) / (maior - menor);
    printf("z_norm = %.2f\n", normalizado);

    return 0;
}
