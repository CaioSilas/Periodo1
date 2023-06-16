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
    while (i <= 8)
    {
        printf ("%d | ",i);
        while (j <= 8){
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
            j++;
        }
        printf ("\n");
        i++;
        j = 1;
    }


    return 0;
}

