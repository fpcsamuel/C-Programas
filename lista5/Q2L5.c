#include <stdio.h>

void troca(int *x, int *y) {
    int aux = *x;
    *x = *y;
    *y = aux;
}

int main() {
    int a, b;

    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Antes:  a = %d, b = %d\n", a, b);

    troca(&a, &b);

    printf("Depois: a = %d, b = %d\n", a, b);

    return 0;
}
