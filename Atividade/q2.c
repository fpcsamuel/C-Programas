#include <stdio.h>
int main(){
    int n;
    printf("Quantas amostras n?");
    scanf("%d", &n);
    float anterior, atual, proxima, y;
    printf("x1 = "); scanf("%f", &anterior);
    printf("x2 = "); scanf("%f", &atual);
    for (int i = 2; i < n; i++)  {
        printf("x%d = ", i+1);
        scanf("%f", &proxima);
        y = (anterior+atual+proxima)/3.0;
        printf("y%d = %.2f\n", i, y);
        anterior = atual;
        atual = proxima;  }
    return 0; }
