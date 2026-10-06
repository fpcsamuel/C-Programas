#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 5
#define COL 5
#define LIMITE 10

int main() {
    int m[LIN][COL];
    int i, j, x, contador = 0;

    srand(time(NULL));

    printf("Matriz gerada:\n");
    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            m[i][j] = rand() % LIMITE;
            printf("%3d", m[i][j]);
        }
        printf("\n");
    }

    printf("\nQual valor você quer procurar? ");
    scanf("%d", &x);

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            if (m[i][j] == x) {
                contador++;
            }
        }
    }

    printf("O valor %d aparece %d vez(es) na matriz.\n", x, contador);

    return 0;
}
