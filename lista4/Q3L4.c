#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char texto[MAX];
    int tamanho = 0;

    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    while (texto[tamanho] != '\0') {
        tamanho++;
    }

    printf("A string tem %d caracteres.\n", tamanho);

    return 0;
}
