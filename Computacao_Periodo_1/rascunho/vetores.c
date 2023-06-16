// caio silas 
// 21.1.4111

#include <stdio.h>
#define aroba 1000


int main (){
    double nota [aroba],soma = 0;
    int n;

    printf ("DIGITE O NUMERO DE NOTAS\n");
    scanf ("%d", &n);

    for (int i = 0; i < n; i++){
        printf ("DIGITE A NOTA %d:",i+1);
        scanf("%lf",&nota[i]);
        soma += nota[i];
    }  
    
    double media = soma / n;
    int contador = 0;
    for (int i = 0; i < n;i++){
        if (nota[i] > media){
            contador++;
            printf ("%.1lf SAO MAIORES\n",nota[i]);
        }
    }

    printf ("%d NOTAS SUPERAM A MEDIA \n",contador);

    return 0;
}