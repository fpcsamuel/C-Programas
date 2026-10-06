#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char s1[2 * MAX];
    char s2[MAX];
    char *p1, *p2;

    printf("Digite a primeira string: ");
    fgets(s1, MAX, stdin);
    s1[strcspn(s1, "\n")] = '\0';

    printf("Digite a segunda string: ");
    fgets(s2, MAX, stdin);
    s2[strcspn(s2, "\n")] = '\0';

    p1 = s1;
    while (*p1 != '\0') {
        p1++;
    }

    p2 = s2;
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';

    printf("Resultado: %s\n", s1);

    return 0;
}
