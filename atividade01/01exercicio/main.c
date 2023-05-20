/*
    Aluno: Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "imprimir_vetor.c"

int main(int argc, char** argv)
{
    int i;
    int valor[5];
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&valor[i]);
    }
        
    print_vetor(5, valor);

    return 0;
}
