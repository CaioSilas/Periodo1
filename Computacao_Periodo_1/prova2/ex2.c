// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define t 100
void toLower(char str[100]){
    int aux;
    aux = strlen(str);

    
        for (int i = 0; i < aux;i++){
            if (str[i] > 'A' && str[i] < 'Z'){
            str[i] = (i % 26) + 97;
            continue;
        }
            printf ("%s", str);
    }
}

int main (){    
    char str[t];

    fgets (str,t,stdin);

    int tam = strlen(str);
    str [tam - 1  ] = '\0';

    toLower(str);

    return 0;
}