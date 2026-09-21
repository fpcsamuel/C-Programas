#include <stdio.h>
int main(){
    unsigned char r = 200, g = 150, b = 77;
    int M = 5;
    r = (r & ~1) | ((M >> 2) & 1);
    g = (g & ~1) | ((M >> 1) & 1);
    b = (b & ~1) | (M & 1);
    printf("R=%d G=%d B=%d\n", r,g,b);
    return 0;}
