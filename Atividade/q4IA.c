#include <stdio.h>

int main(void) {

    int numero;
    int soma = 0;
    int quantidade = 0;
    int executando = 1;

    while (executando) {

        scanf("%d", &numero);

        if (numero == -1) {
            executando = 0;
        }
        else if (numero >= 0 && numero <= 255) {
            soma += numero;
            quantidade++;
        }
    }

    printf("Soma = %d\n", soma);
    printf("Quantidade = %d\n", quantidade);

    return 0;
}
