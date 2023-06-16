// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main (){
    FILE *saida;
    saida = fopen ("produto.dat","rb");

    while(!feof(saida)){
        int n;
        int m;
        int aux;

        fread (&n,sizeof(int),1,saida);
        fread (&m,sizeof(int),1,saida);

        if (feof(saida)){
            break;
        }
        printf("%d %d\n",n,m);

        for (int i = 0; i < n;i++){
            for (int j = 0; j < m; j++)
            {
                fread (&aux,sizeof(int),1,saida);
                printf("%2d ",aux);
            }
            printf("\n");
        }
        printf("\n");
    }

    fclose(saida);
    return 0;
}