#include <stdio.h>

#define N 3

int main() {
    int m[N][N];
    int i, j;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("Digite o elemento [%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    }

    printf("Diagonal principal: ");
    for (i = 0; i < N; i++) {
        printf("%d ", m[i][i]);
    }
    printf("\n");

    return 0;
}
