#include <stdio.h>
#include <math.h>

int main(){
    int i = 1,j =1;
    int x,y;
    printf ("O USUARIO DEVE DIGITAR A LINHA DA TORRE\n");
    scanf ("%d",&x);
    printf ("O USUARIO DEVE DIGITAR A COLUNA DA TORRE\n");
    scanf ("%d",&y);

    //menu
    printf ("\nMOVIMENTOS POSSIVEIS:\n\n");
    printf ("     1 2 3 4 5 6 7 8\n");
    printf ("    ----------------\n");

    //campo
    for (i = 1;i <= 8;i++){
        printf (" %d | ", i);
    for (j = 1; j <= 8; j++){
            if (i == x || j == y){
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