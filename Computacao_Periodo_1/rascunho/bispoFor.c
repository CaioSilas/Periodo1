// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (){
    int i = 1;
    int j = 1;
    int y,x;
    printf ("Digite a linha em que o Bispo se encontra:\n");
    scanf ("%d",&x);
    printf("Digite a coluna em que o Bispo se encontra:\n");
    scanf ("%d",&y);
    printf ("    1 2 3 4 5 6 7 8\n");
    printf ("    ----------------\n");


    for (i = 1; i <= 8;i++){
        printf ("%d | ",i);
        for (j = 1; j <= 8; j++){
            if (i == x && j == y){
                printf ("o ");
                }
            else if (i + j == x + y){
                printf ("x ");
            }
            else if (i - j == x - y){
                printf ("x ");
            }
            else {
                printf ("- ");
            }
        }
        printf ("\n");
    }
return 0;
}
