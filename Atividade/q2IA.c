#include <stdio.h>
int main(void) {
    int n;
    float a, b, c;
    scanf("%d", &n);
    scanf("%f %f", &a, &b);
    for (int i = 2; i <= n - 1; i++) {
        scanf("%f", &c);
        float media = (a + b + c) / 3.0f;
        printf("y%d = %.2f\n", i, media);
        a = b;
        b = c;    }
    return 0;
}
