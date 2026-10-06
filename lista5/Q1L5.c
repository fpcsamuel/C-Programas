#include <stdio.h>

int main() {
    int a, b, soma;
    int *pa = &a;
    int *pb = &b;
    int *psoma = &soma;

    printf("Digite o primeiro número: ");
    scanf("%d", pa);
    printf("Digite o segundo número: ");
    scanf("%d", pb);

    *psoma = *pa + *pb;

    printf("Soma: %d\n", *psoma);
    printf("Endereço onde a soma está guardada: %p\n", (void *) psoma);

    return 0;
}
