// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


struct Aluno {
    int nMat;            //numero de matricula
    float nota[3];      // tres notas
    float media;       //media aritmediaca 
};                    //fim da definicao da estrutura (com ;)



int main (){
    
    struct Aluno bart; // declara a variavel de tipo 'struct Aluno'
    bart.nMat = 1521001;
    bart.nota [0] = 8.5;
    bart.nota [1] = 9.5;
    bart.nota [2] = 10.0;

    bart.media = (bart.nota [0] + bart.nota[1] + bart.nota[2]) / 3.0;

    printf ("mtricula: %d\n",bart.nMat);
    printf ("media    :%.1lf", bart.media);
    
    return 0;
}


// inicializaçao semelhante a matriz 

struct Data{
    int dia;        // 1°
    char mes[10];  // 2°
    int ano;      // 3°
};

                    //1°    2°       3°
struct Data natal = { 25,"dezembro", 2016};
struct Data niver = {  5, "julho"  , 2000};



//incializaçao individual
struct Data{
    int dia;        // 1°
    char mes[10];  // 2°
    int ano;      // 3°
};

struct Data natal, niver;
natal.dia = 25;
strcpy(natal.mes,"Dezembro");
natal.ano = 2021;

niver.dia = 5;
strcpy(niver.mes,"Julho");
niver.ano = 2000;


//alternativas para declaraçao
struct Aluno {
    int nMat;            //numero de matricula
    float nota[3];      // tres notas
    float media;       //media aritmediaca 
} CaioSilas;          //declaracao da variavel

struct Aluno {
    int nMat;                           //numero de matricula
    float nota[3];                     // tres notas
    float media;                      //media aritmediaca 
} CaioSilas, araujo, amaro;          //declaracao de multiplas variaveis 

//uma variavel estrutural pode ser atribuida a outra variavel do mesmo tipo por meio de uma atribuicao simples 
struct Data natal = {25 , "Dezembro", 2021};

struct Data natalDesteano;
natalDesteano = natal;




//TYPEDEF
typedef struct {    //nao precisamos definir o nome aqui
    int dia; 
    char mes[10];
    int ano;
} Data;           //'apelido' (novo nome) para a estrutura : Data 

//omitimos a palavra struct ao declarar vriaveis
Data natal ={ 25,"Dezembro", 2021};

Data natalDesteAno;
natalDesteano = natal;

typedef struct
{
    int pecas;    //1°
    float preco; //2°
}Venda;

int main(){    //1° 2°
    Venda  A ={20, 110.0};
    Venda  B ={3, 258.0};
    Venda total;

    //soma membro a membro
    total.pecas = A.pecas + B.pecas;
    total.preco = A.preco + B.preco;
}




//estruturas aninhadas

typedef struct {  
    int dia; 
    char mes[10];
    int ano;
} Data; 

typedef struct
{
    int pecas;    //1°
    float preco; //2°
    Data diaVenda;
}Venda;

int main(){
    //exemplo de declaracao
    Venda v = {20,110.0, {7,"Novembro",2015}};

    //exemplo de uso
    printf("Ano da venda: %d", v.diaVenda.ano);

    return 0;
} 





//estruturas em funçao
//parametro

typedef struct
{
    int pecas;    //1°
    float preco; //2°
}Venda;

void imprimetotal (Venda v1,Venda v2){
    Venda total = {0, 0.0};
    total.pecas = v1.pecas + v2.pecas;
    total.preco = v1.preco + v2.preco;
    printf("Nro pecas:     %d\n", total.pecas);
    printf("precos total : %.2f\n",total.preco);
}

int main(){
    Venda v1 = {1, 20}, v2 ={ 3, 10};
    imprimetotal(v1, v2);

    return 0;
}

//referencia
typedef struct
{
    int pecas;    //1°
    float preco; //2°
}Venda;

void imprimetotal (Venda *v1,Venda *v2){
    Venda total = {0, 0.0};
    total.pecas = v1->pecas + v2->pecas;        // v1->pecas ou (*v1).pecas
    total.preco = v1->preco + v2->preco;
    printf("Nro pecas:     %d\n", total.pecas);
    printf("precos total : %.2f\n",total.preco);
}

int main(){
    Venda v1 = {1, 20}, v2 ={ 3, 10};
    imprimetotal(&v1, &v2);

    return 0;
}




//VETORESE E MATRIZES

typedef struct
{
    int pecas;    //1°
    float preco; //2°
}Venda;

void impreTotal(Venda v[],int n){
    Venda total = {0, 0.0};
    for (int i = 0; i < n; i++){
        total.pecas += v[i].pecas;
        total.preco += v[i].preco;
    }

    printf("Nro pecas:     %d\n", total.pecas);
    printf("precos total : %.2f\n",total.preco);
}

Venda novaVenda(){
    Venda v;
    printf("Digite a quantidade e o valor da venda :\n");
    scanf("%d %f", &v.pecas, &v.preco);
    return v;
}

//ABAIXO
int main (){
    Venda venda[50];  //cria um array de estruturas
    int n = 0,opcao;  //inicialmente nao temos nenhuma venda

    do{
        printf ("digite 1 para entrar em uma venda\n");
        printf ("       2 para imprimir o total\n");
        printf ("       0 para terminar\n");
        scanf("%d",&opcao);

        switch(opcao){
            case 1:
                venda[n] = novaVenda();
                n++;
                break;
            case 2 :
                impreTotal(venda, n);
                break;
        }
    }while (opcao != 0);
    return 0;
}