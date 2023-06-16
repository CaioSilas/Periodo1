//caio silas de araujo amaro 
//matricula: 21.1.4111

/*Faça um programa que leia um numero inteiro x, utiliza uma função para avaliar se: 
1º x é primo 
2º x é par 
3º x é ímpar
Caso seja primo, a função deve retornar 1, caso par, 2, e ímpar, 3.
Tendo o retorno da função, utilizar um switch case para indicar ao usuárioseo número digitado é primo, par ou ímpar
(não é necessário tratar os casosemque o número é ímpar e primo ou par e primo).*/ 

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int avalia(int *x,int primo,int par,int impar){
    int p = 2;
    int eprimo = 1;
    primo = sqrt(*x);
    par = *x % p;
    while (p <= primo){
        if (*x % p == 0){
            eprimo=0;
            break;
        }
        p++;
    }
    if (eprimo==1){
       //printf("esse numero e primo\n");
        return 1;
    }
    if (par == 0){
        //printf ("esse numero e par\n");
        return 2;
    }
    else {
        //printf ("esse numero e impar\n");
        return 3;
    }
}
int main(){
    int x;
    int primo,par,impar;
    int r;
    printf ("o usuario deve digitar um numero\n");
    scanf ("%d",&x);
    r = avalia(&x,primo,par,impar);
    switch (r)
    {
    case 1:
        printf("esse numero e primo\n");
        break;
    case 2:
        printf ("esse numero e par\n");
        break;
    case 3:
        printf ("esse numero e impar\n");
        break;
    default:
        break;
    }

    return 0;

}