// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


#define t 50

int main (){
    int n,i;
    char frase[t], aux1[t];


    printf ("digite uma frase\n");
    fgets(frase, t,stdin);

    int tam = strlen(frase);
    frase [tam - 1] = '\0';
    int aux = strlen(frase);


    printf ("digite o deslocamento e -1 para sair\n");
    scanf ("%d",&n);
    
    do
    {
    char aux1[t];
    
    n = n % 26;

    for (i = 0; i < aux;i++){
        aux1[i]=frase[i];
        if (frase[i] >= 65 && frase[i] <= 90){
            aux1[i] = (frase[i] - 'A' + (26 - n) ) % 26 + 'A';
            continue;
        }
        else if(frase[i] >= 97 && frase[i] <= 122){
            aux1[i] = (frase[i] - 'a' + (26 - n)) % 26 + 'a';
            continue;
        }
    }
    aux1[i] = '\0';
    printf ("%s\n\n",aux1);
    
    printf ("digite o deslocamento e -1 para sair\n");
    scanf ("%d",&n);
    } while (n != -1);
    
    return 0;
}
