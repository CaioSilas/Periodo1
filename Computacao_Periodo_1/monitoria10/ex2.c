// caio silas de araujo amaro
//turma:41
//matricula:21.1.4111


#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>


int im (int mat [3][3]){
    for (int i = 0;i < 3;i++){
        for(int j = 0; j < 3;j++){
            if (mat[i][j] == 1){
                printf("x ");
            }
            else if (mat[i][j] == 10) {
                printf ("o ");
            }
            else {
                printf ("- ");
            }
        }
        printf("\n");
    }
}
int vencedor (int mat[3][3],int aux[8]){
    for (int i = 0; i < 8; i++ ){
        aux[i] = 0;
    }
    for (int i = 0 ; i < 3; i++){
        aux[0] += mat [i][0];
        aux[1] += mat [i][1];
        aux[2] += mat [i][2];
        aux[3] += mat [0][i];
        aux[4] += mat [1][i];
        aux[5] += mat [2][i];
        aux[6] += mat [i][i];
    }
    aux [7] = mat[0][2] + mat[1][1] + mat[2][0];
    for (int i = 0; i < 8;i++){
        if (aux [i] == 3){
            return 1;
        }
        else if (aux [i] == 30){
            return 2;
        }
    }

    return -1;
}



int main (){

    int mat[3][3];
    int x,y,r;
    int op;
    int aux [8] = {0, 0, 0, 0, 0, 0 , 0, 0};
    int w,cont = 0;

     for (int i = 0;i < 3;i++){
            for(int j = 0; j < 3;j++){
                mat[i][j] = 0;
        }
    }

    printf ("1)contra a maquina\n2)contra outra pessoa\n");
    scanf ("%d",&op);

    // jogando contra outro player
    if (op == 2){
        
        while (1)
        {

            scanf("%d %d",&x,&y);
            x = x -1;
            y = y -1;
            if (x <= 2 && x >= 0 && y <= 2 && y >= 0 && mat[x][y] == 0){
                mat[x][y] = 1;
                cont++;
            }
            else {
                printf ("jogada invalida\n");
            }


            im(mat);
            w = vencedor(mat,aux);
            
            if (w == 1){
                printf ("jogador 1 ganhou\n");
                break;
            }
            else if (cont == 5){
                printf ("deu veia\n");
                break;
            }
    
            scanf("%d %d",&x,&y);
            x = x -1;
            y = y -1;
            
            if (x <= 2 && x >= 0 && y <= 2 && y >= 0 && mat[x][y] == 0){
                mat[x][y] = 10;
            }
            else {
                printf ("jogada invalida\n");
            }
            im (mat);
            w = vencedor (mat,aux);

            if (w == 2){
                printf("o jogador 2 ganhou\n");
                break;
            }
        }
    }

    // jogando contra a maquina
    else if (1) {
        do {
            scanf("%d %d",&x,&y);
            x = x -1;
            y = y -1;
            if (x <= 2 && x >= 0 && y <= 2 && y >= 0 && mat[x][y] == 0){
                mat[x][y] = 1;
                cont++;
            }
            printf ("jogador 1\n");
            im(mat);
            w = vencedor(mat,aux);
            
            if (w == 1){
                printf ("jogador 1 ganhou\n");
                break;
            }
            else if (cont == 5){
                printf ("velha\n"); 
                break;
            }
        

            

            

            srand(time(NULL));

            x = rand()%3;
            y = rand()%3;
            
            if (x <= 2 && x >= 0 && y <= 2 && y >= 0 && mat[x][y] == 0){
                mat[x][y] = 10;
            }
            printf("computador\n");
            im (mat);
            w = vencedor (mat,aux);

            if (w == 2){
                printf("o jogador 2 ganhou\n");
                break;
            }

        }while (r != 0);
    }
    
    
    
    return 0;
}