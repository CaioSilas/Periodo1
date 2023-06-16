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
    char frase[t];
    

    printf ("digite uma frase\n");
    fgets(frase, t,stdin);

    printf ("digite o deslocamento\n");
    scanf ("%d",&n);

    int tam = strlen(frase);
    frase [tam - 1] = '\0';
    int aux = strlen(frase);

    for (i = 0; i < aux;i++){
        if (frase[i] >= 65 && frase[i] <= 90){
            frase[i]= (frase[i] - 'A' + n) % 26 + 'A';
            continue;
        }
        else if(frase[i] >= 97 && frase[i] <= 122){
            frase[i]= (frase[i] - 'a'+ n) % 26 + 'a';
            continue;
        }
    }
    printf ("%s",frase);
    
    return 0;
}