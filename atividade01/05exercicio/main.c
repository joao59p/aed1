/*
    Aluno: Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include <stdlib.h>
#include "compara_numeros.c"

int main (int argc, char** argv)
{
    int i;
    int numeros[20];
    
    printf("O vetor com todos os números:\n");
    for(i = 0; i < 20; i++)
    {
        scanf("%d", &numeros[i]);
        printf("%d\n", numeros[i]);
    }

    impar_ou_par(numeros);

    return 0;
}
