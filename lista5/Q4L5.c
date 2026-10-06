#include <stdio.h>

#define TAM 4

int main() {
    char vc[TAM];
    int vi[TAM];
    float vf[TAM];
    double vd[TAM];
    int i;

    printf("Digite %d caracteres (separados por espaço): ", TAM);
    for (i = 0; i < TAM; i++) scanf(" %c", vc + i);

    printf("Digite %d inteiros: ", TAM);
    for (i = 0; i < TAM; i++) scanf("%d", vi + i);

    printf("Digite %d floats: ", TAM);
    for (i = 0; i < TAM; i++) scanf("%f", vf + i);

    printf("Digite %d doubles: ", TAM);
    for (i = 0; i < TAM; i++) scanf("%lf", vd + i);

    printf("\n--- char (%zu byte) ---\n", sizeof(char));
    for (i = 0; i < TAM; i++) printf("%c  -> %p\n", *(vc + i), (void *)(vc + i));

    printf("\n--- int (%zu bytes) ---\n", sizeof(int));
    for (i = 0; i < TAM; i++) printf("%d  -> %p\n", *(vi + i), (void *)(vi + i));

    printf("\n--- float (%zu bytes) ---\n", sizeof(float));
    for (i = 0; i < TAM; i++) printf("%.2f  -> %p\n", *(vf + i), (void *)(vf + i));

    printf("\n--- double (%zu bytes) ---\n", sizeof(double));
    for (i = 0; i < TAM; i++) printf("%.2f  -> %p\n", *(vd + i), (void *)(vd + i));

    return 0;
}
