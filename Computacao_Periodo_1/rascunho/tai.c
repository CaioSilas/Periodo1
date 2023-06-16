#include <stdio.h>
#include <math.h>

int main() {
   double x1, x2 , x3;
   printf("digite os valores de x1, x2, x3;\n");
   scanf("%lf", &x1);
   scanf("%lf", &x2);
   scanf("%lf", &x3);
   double y =  pow(x1 + 3, 4) + pow(x2 + x3, 3);
   printf("y = %lf\n", y);
    return 0;
}