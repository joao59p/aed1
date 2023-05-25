/*
    Aluno:Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "media.c"

int main(int argc, char ** argv)
{
    float nota[4];
    int i;

    for(i = 0; i < 4; i ++)
    {
        scanf("%f", &nota[i]);
    }
    
    media(nota);
   
    return 0;
}
