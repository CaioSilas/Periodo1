//soma da hipotenusa

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    double c1, c2;
    printf("usuario digitar o valor dos catetos:\n");
    scanf("%lf", &c1);
    scanf("%lf", &c2);
    double h = sqrt(pow(c1, 2) + pow(c2, 2));
    printf("o valor da hipotenusa = %lf\n", h);
    return 0;
}