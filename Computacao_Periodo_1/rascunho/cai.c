#include <stdio.h>
#include <math.h>

int main(){
    double x,y,z;
    printf("usuario, digitar o valor de x\n"); scanf("%d", &x);
    printf("usuario, digitar o valor de y\n"); scanf("%d", &y);
    printf("usuario, digitar o valor de z\n"); scanf("%d", &z);
    double r = pow(x, 3) + pow(y, 2) + (x * y * z);
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("r = %d\n", r);
    return 0;
}