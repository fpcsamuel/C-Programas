#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char origem[MAX], destino[MAX];
    char *po, *pd;

    printf("Digite uma string: ");
    fgets(origem, MAX, stdin);
    origem[strcspn(origem, "\n")] = '\0';

    po = origem;
    pd = destino;

    while (*po != '\0') {
        *pd = *po;
        po++;
        pd++;
    }
    *pd = '\0';

    printf("String copiada: %s\n", destino);

    return 0;
}
