/*
    Aluno:Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "quadrado_magico.c"

int main (int argc, char** argv)
{ 
  
    /*variaveis*/
    int i, j;
    int linha,coluna;
    scanf("%d", &linha);
    scanf("%d", &coluna);   
    int  matriz[linha][coluna];

    /*preenchendo a matriz*/
    for(i = 0; i < linha; i++)
    {
        for(j = 0; j < coluna; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    
    /*chamando o processamento*/
    verificar_quadrado(linha, coluna, matriz);        
     
    return 0;
} 
  
