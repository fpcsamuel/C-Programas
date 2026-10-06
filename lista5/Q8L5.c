#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char texto[MAX];
    char c;
    char *p;
    int achou = 0;

    printf("Digite uma string: ");
    fgets(texto, MAX, stdin);
    texto[strcspn(texto, "\n")] = '\0';

    printf("Digite o caractere a buscar: ");
    scanf(" %c", &c);

    for (p = texto; *p != '\0'; p++) {
        if (*p == c) {
            achou = 1;
            break;
        }
    }

    if (achou) {
        printf("Encontrei '%c' na posição %ld (endereço %p).\n",
               c, (long) (p - texto), (void *) p);
    } else {
        printf("O caractere '%c' não está na string.\n", c);
    }

    return 0;
}
