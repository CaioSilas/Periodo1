#include <stdio.h>
#include <math.h>

int main (){
    int n;
    printf ("DIGITE O VALOR DE N :\n");
    scanf ("%d", &n);

    double soma = 0, nro;
    int i;
    for (i =0;i < n;i++){
        printf ("DIGITE O VALOR DE X%d: \n", i + 1);
        scanf ("%lf",&nro);
        soma += nro * nro;
    }

    double media = sqrt(soma / n);
    printf ("MEDIA QUADRATICA: %.0lf\n",media);

    return 0;
}