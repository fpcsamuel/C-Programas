#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char texto[MAX];
    int i, tamanho;

    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    tamanho = strlen(texto);

    printf("String invertida: ");
    for (i = tamanho - 1; i >= 0; i--) {
        printf("%c", texto[i]);
    }
    printf("\n");

    return 0;
}
