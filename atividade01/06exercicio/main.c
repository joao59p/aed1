/*
    Aluno:Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "produto_matriz.c"

int main (int argc, char** argv)
{
    /*variaveis*/
    int i, j;
    float matriz1[2][3];
    float matriz2[3][2];

    /*preenchendo a primeira matriz*/
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 3; j++)
        {
            scanf("%f", &matriz1[i][j]);
        }
    }
    
    /*preenchendo a segunda matriz*/
     for(j = 0; j < 3; j++)
        {
             for(i = 0; i < 2; i++)
             {
                scanf("%f", &matriz2[j][i]);    
             }
        }
      calcular_produto( matriz1, matriz2 );    

    return 0;
} 
  
