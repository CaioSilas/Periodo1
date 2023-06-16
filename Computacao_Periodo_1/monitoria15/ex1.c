// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    double salario;
    int dia_pagamento;
    char funcao[20];
} Funcionario;

int main()
{
    FILE *arquivo;
    arquivo = fopen("empresa.dat", "wb");
    int n;
    // char albertao[4] = "Aaaa";

    printf("Digite o numero de funcionario:");
    scanf("%d", &n);

    Funcionario *f = malloc(n * sizeof(Funcionario));

    fwrite(&n, sizeof(int), 1, arquivo);
    fgetc(stdin);
    for (int i = 0; i < n; i++)
    {
        fgets(f[i].nome, 50, stdin);
        scanf("%lf", &f[i].salario);
        scanf("%d", &f[i].dia_pagamento);
        fgetc(stdin);
        fgets(f[i].funcao, 20, stdin);
    }

    fwrite(f, sizeof(Funcionario), n, arquivo);

    free(f);
    fclose(arquivo);

    FILE *saida = fopen("empresa.dat", "rb");

    if (saida == NULL)
    {
        printf("nao foi possivel abrir o arquivo\n");
        exit(1);
    }

    int t;
    fread(&t, sizeof(int), 1, saida);
    Funcionario *f2 = malloc(t * sizeof(Funcionario));
    fread(f2, sizeof(Funcionario), t, saida);
    Funcionario aux;

    printf("\nSAIDA:\n");

    int i, j;
    for (int i = 1; i < t; i++)
    {
        aux = f2[i];
        for (j = i; (j > 0) && (strcmp(aux.nome, f2[j - 1].nome) < 0); j--)
        {
            f2[j] = f2[j - 1];
        }
        f2[j] = aux;
    }
    for (int i = 0; i < t; i++)
    {
        printf("%s", f2[i].nome);
        printf("%.1lf\n", f2[i].salario);
        printf("%d\n", f2[i].dia_pagamento);
        printf("%s\n", f2[i].funcao);
    }

    fclose(saida);
    free(f2);

    return 0;
}
