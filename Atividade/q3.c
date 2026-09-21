#include <stdio.h>
int main(){
    int n;
    printf("Quantos pixels n?");
    scanf("%d", &n);
    int leitura;
    unsigned char x, xmin, xmax;
    scanf("%d", &leitura);
    x = (unsigned char) leitura;
    xmin = x; xmax = x;
    for(int i=2; i<n; i++)
    {
        scanf("%d", &leitura);
        x = (unsigned char) leitura;
        if(x<xmin) xmin=x;
        if(x>xmax) xmax=x;
    }
    printf("Menor intensidade (xmin) = %d\n", xmin);
    printf("Maior intensidade (xmax) = %d\n", xmax);
    unsigned char z;
    printf("Digite a intensidade z: ");
    scanf("%d", &leitura);
    z = (unsigned char) leitura;
    float z_normalizado =
        (float)(z-xmin)/(float)(xmax-xmin);

    printf("Valor normalizado de z = %.2f\n", z_normalizado);

    return 0;
}
