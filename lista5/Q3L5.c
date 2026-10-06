#include <stdio.h>

int main() {
    int numero, menor;
    int *pnum = &numero;
    int *pmenor = &menor;
    int primeiro = 1;

    printf("Digite números inteiros (0 para terminar).\n");

    while (1) {
        printf("Número: ");
        scanf("%d", pnum);

        if (*pnum == 0) {
            break;
        }

        if (primeiro || *pnum < *pmenor) {
            *pmenor = *pnum;
            primeiro = 0;
        }

        printf("Menor valor até agora: %d\n", *pmenor);
    }

    if (primeiro) {
        printf("Nenhum número foi digitado.\n");
    } else {
        printf("Menor valor fornecido: %d\n", *pmenor);
    }

    return 0;
}
