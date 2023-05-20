/*
    Aluno: Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "print_vetor.c"

int main (int argc, char** argv)
{
    int i;
    float reais[10];
    
    for(i = 0; i < 10; i++)
    {
        scanf("%f", &reais[i]);
    }
   
    inverter_vetor(reais);

    return 0;

}
