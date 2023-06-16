// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char nome[30];
    int mat;
    int media;
    int frequencia;
}Aluno;

typedef struct{
    int limit[30];
    int cont;
    char ano[30];
}Turma;



Turma lerturma(){
    Turma s;
    int maior = -99999999;
    int menor =  99999999;
    int reprovado;
    char nome[30];
    int mat[30],freq[30];
    int aux = 0;
    fgets (s.ano,30,stdin);
    scanf("%d",&s.cont);
    int i;

    Aluno a[30];

    for (i = 0; i < s.cont; i++){
        scanf ("%s", a[i].nome);
        getc(stdin);
        scanf("%d",&a[i].mat);
        scanf("%d",&a[i].media);
        scanf("%d",&a[i].frequencia);
        printf("\n");


        
    
    }
    for ( i = 0; i < s.cont; i++)
    {

    if (a[i].media > maior){
            maior = a[i].media;
            nome[i] = a[i].nome;
            mat[i] = a[i].mat;
            freq[i] = a[i].frequencia;
        }
    else if (a[i].media < menor)
        menor = a[i].media;
        nome[i] = a[i].nome;
        mat[i] = a[i].mat;
        freq[i] = a[i].frequencia;
    }
    

    printf("A MAIOR MEDIA:\n");
   
    printf("%c\n",nome);
    printf("%d\n",mat);
    printf("%d\n",maior);
    printf("%d\n",freq);

    printf("MENOR MEDIA:\n");

    printf("%c\n",nome);
    printf("%d\n",mat);
    printf("%d\n",menor);
    printf("%d\n",freq);


    



}



int main(){
    Turma s[30];
    int cont = 0;


    s[cont] = lerturma();
    
    
   

    return 0;
}
