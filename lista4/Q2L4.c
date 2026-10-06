#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char texto[MAX];
    char c;
    int i, achou = 0;

    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite um caractere: ");
    scanf(" %c", &c);

    for (i = 0; texto[i] != '\0'; i++) {
        if (texto[i] == c) {
            achou = 1;
            break;
        }
    }

    if (achou) {
        printf("A string contém o caractere '%c'.\n", c);
    } else {
        printf("A string NÃO contém o caractere '%c'.\n", c);
    }

    return 0;
}
