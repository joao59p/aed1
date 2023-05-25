/*
    Aluno:Joao Paulo Pantoja Cavalcante
    Matricula:2115280050
*/

#include <stdio.h>
#include "media.c"
#include "compara_notas.c"
    
int main (int argc, char** argv)
{
    int i;
    float nota_1, nota_2,nota_3,nota_4;
    float media[10];

    for(i = 0; i < 10; i++)
    {
       scanf("%f %f %f %f", &nota_1, &nota_2, &nota_3, &nota_4);
       media[i] = media_final(nota_1, nota_2 ,nota_3 ,nota_4);
    }
    
    aprovados(media);    

    return 0;
}
