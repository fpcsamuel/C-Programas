#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char s1[MAX], s2[MAX];
    char resultado1[2 * MAX];
    char resultado2[2 * MAX];
    int i, j;

    printf("Digite a primeira string: ");
    fgets(s1, MAX, stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(s2, MAX, stdin);
    s2[strcspn(s2, "\n")] = '\0';

    strcpy(resultado1, s1);
    strcat(resultado1, s2);
    printf("[com strcat] %s\n", resultado1);

    i = 0;
    while (s1[i] != '\0') {
        resultado2[i] = s1[i];
        i++;
    }

    j = 0;
    while (s2[j] != '\0') {
        resultado2[i] = s2[j];
        i++;
        j++;
    }
    resultado2[i] = '\0';

    printf("[sem strcat] %s\n", resultado2);

    return 0;
}
