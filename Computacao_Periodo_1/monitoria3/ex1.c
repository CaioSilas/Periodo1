//caio silas de araujo amaro 
//matricula: 21.1.4111

/* O usuário irá digitar x números, positivos ou negativos, chega ao fim ao ser enviado o numero zero. 
 Seu programa deve usar um laço de repetição while para leitura e ao final imprimir: 
 - O maior deles 
 - O menor deles 
 - A media dos números(com duas casa decimais, não incluir o 0 na quantidade) */

 #include <stdio.h>
 #include <math.h>
 #include <stdlib.h>

 int main (){
     int x;
     int maior = -9999999, menor = 9999999,tentativas = 0;
     double soma = 0;
    //  int media = soma / tentativas;

     do {
        printf ("o usuario deve digitar numeros e 0 para sair\n");
        scanf ("%d", &x);
        if(x == 0)
            break;
        if (x > maior){
            maior = x;
        }
        if(x < menor){
            menor = x;
        }
        soma += x;
        tentativas++;
    }while (x != 0);
    double media = soma / tentativas;
    printf (" maior : %d\n menor :%d\n media :%.2lf\n",maior,menor,media);
 
 
return 0;
}


