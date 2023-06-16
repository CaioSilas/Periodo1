  // caio silas de araujo amaro
 //turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char tipo [30];
    char marca [30];
    int quant;
    double preco;
}Produto;

int main (){

    int n;
    printf ("ENTRADA:\n");
    scanf("%d",&n);
    printf("\n");
    Produto *produtos = malloc (n * sizeof(Produto));
    
    double valor_total = 0;

    for (int i = 0; i < n; i++){
        fgetc(stdin);
        fgets(produtos[i].tipo,30, stdin);
        scanf("%s",produtos[i].marca);
        scanf("%d",&produtos[i].quant);
        scanf("%lf",&produtos[i].preco);
        valor_total += produtos[i].quant * produtos[i].preco;
        printf("\n");
    }

    printf("SAIDA:\n");

    printf("Valor total dos produtos : RS %.2lf",valor_total);

    free(produtos);

    return 0;
}
