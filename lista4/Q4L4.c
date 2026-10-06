#include <stdio.h>
#include <string.h>

#define MAX 100

int iguais_com_strcmp(char a[], char b[]) {
    return strcmp(a, b) == 0;
}

int iguais_sem_strcmp(char a[], char b[]) {
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) {
            return 0;
        }
        i++;
    }

    return a[i] == b[i];
}

int main() {
    char s1[MAX], s2[MAX];

    printf("Digite a primeira string: ");
    fgets(s1, MAX, stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(s2, MAX, stdin);
    s2[strcspn(s2, "\n")] = '\0';

    if (iguais_com_strcmp(s1, s2)) {
        printf("[com strcmp] As strings são iguais.\n");
    } else {
        printf("[com strcmp] As strings são diferentes.\n");
    }

    if (iguais_sem_strcmp(s1, s2)) {
        printf("[sem strcmp] As strings são iguais.\n");
    } else {
        printf("[sem strcmp] As strings são diferentes.\n");
    }

    return 0;
}
