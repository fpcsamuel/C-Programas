#include <stdio.h>

int main(void) {

    int r, g, b, mensagem;

    scanf("%d %d %d %d", &r, &g, &b, &mensagem);

    r = (r & 254) | ((mensagem / 4) & 1);
    g = (g & 254) | ((mensagem / 2) & 1);
    b = (b & 254) | (mensagem & 1);

    printf("R=%d G=%d B=%d\n", r, g, b);

    return 0;
}
