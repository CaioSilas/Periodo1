// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>



int main (){
    FILE *entrada , *saida;

    entrada = fopen ("contas.txt", "r");
    saida = fopen ("resultado.txt", "w");

    char cont[100];
    char c = '0';
    int  n;
    int i = 0;
    int aux;

    
    
    while (!feof(entrada))
    {
        char cont[100];
        char c = '0';
        int  n;
        int i = 0;
        int aux;
    
        while (c != ';'){
            c = fgetc(entrada);
            if (c != ' ' && c != ';'){
                cont[n] = c;
                n++;
            }
        }
        cont[n] = '\0';

        for (i = 0; i < n;i++){
            switch (cont[i]) {
                case '+':
                    aux = (cont[i - 1] - '0') + (cont[i - 2] - '0');
                    cont[i] = aux + '0';
                    cont[i - 1] = '\0';
                    cont[i - 2] = '\0';
                    continue;

                case '-':
                    aux = (cont[i - 1] - '0') - (cont[i - 2] - '0');
                    cont[i] = aux + '0';
                    cont[i - 1] = '\0';
                    cont[i - 2] = '\0';
                    continue;

                case '/':
                    aux = (cont[i - 1] - '0') / (cont[i - 2] - '0');
                    cont[i] = aux + '0';
                    cont[i - 1] = '\0';
                    cont[i - 2] = '\0';
                    continue;

                case '*':
                    aux = (cont[i - 1] - '0') * (cont[i - 2] - '0');
                    cont[i] = aux + '0';
                    cont[i - 1] = '\0';
                    cont[i - 2] = '\0';
                    continue;
            }
        }
    }

    printf("%d",aux); 

    fclose(saida);
    fclose (entrada);
    return 0;
}

