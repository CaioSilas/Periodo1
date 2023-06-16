// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    char v ,p;
    int soma = 0;
    
        printf ("O USUARIO DEVE DIGITAR V PARA VITORIA E P PARA DERROTA\n");  

        for (int i = 1;i < 7;i++){
            scanf ("%c",&v);
            getc(stdin);
            if (v == 'v'){
                soma++;
            }
        }
        if (soma == 5 || soma == 6){
            printf ("1\n");
        }
        else if (soma == 3 || soma == 4){
            printf ("2\n");
        }
        else if (soma == 1 || soma == 2){
            printf ("3\n");
        }
        else {
            printf ("-1\n");
        }
    return 0;
}