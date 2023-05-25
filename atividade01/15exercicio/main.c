/*
    Aluno:Joao Paulo Pantoja Cavalcante
    Matricula: 2115280050
*/

#include <stdio.h>
#include "metodos.c"


int main(int argc , char**  argv)
{ 
      
    struct dma data1;
    struct dma data2;
    int calculo;
   
    scanf("%d %d %d", &data1.dia, &data1.mes, &data1.ano);
    scanf("%d %d %d", &data2.dia, &data2.mes, &data2.ano);
    
    calculo = calcular_dias(data1, data2);
    printf("O numero de dias entre as duas data é: %d\n", calculo);

  return 0;
}
