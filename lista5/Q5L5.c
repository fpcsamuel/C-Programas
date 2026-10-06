#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char texto[MAX];
    char *p;

    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    p = texto;
    while (*p != '\0') {
        p++;
    }

    printf("Tamanho da string: %ld\n", (long) (p - texto));

    return 0;
}
