#include <stdio.h>

#define TAM 8

int *primeiro_par(int *v, int n) {
    int *p;

    for (p = v; p < v + n; p++) {
        if (*p % 2 == 0) {
            return p;
        }
    }
    return NULL;
}

int main() {
    int v[TAM];
    int *p;
    int *par;

    for (p = v; p < v + TAM; p++) {
        printf("Digite o elemento %ld: ", (long) (p - v) + 1);
        scanf("%d", p);
    }

    par = primeiro_par(v, TAM);

    if (par == NULL) {
        printf("O vetor não tem elementos pares.\n");
    } else {
        printf("Primeiro par: %d (posição %ld), endereço %p\n",
               *par, (long) (par - v), (void *) par);
    }

    return 0;
}
