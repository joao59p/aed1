/*
  Disciplina: Algoritmos e Estruturas de Dados I
  Aluno Joao Paulo Pantoja Cavalcante
  Matricula: 2115280050
*/

#include "lista_encadeada3.h"
int main(int argc , char** argv)
{

//declarando variaveis
Endereco *link;
int i = 0;
int numero;

//criando lista
link = criar();

//adicionando elementos no inicio da lista
while(i < 500)
{
  scanf("%d", &numero);
  link -> inicio = adicionar_inicio(link, numero);
  i++;
}


//adicionando elementos no final da lista
i = 0;
  
while(i < 500)
{
  scanf("%d", &numero);
  link -> inicio = adicionar_fim(link, numero);
  i++;
} 

//imprimindo a lista
imprimir(link);

//excluir_fim(link);
//excluir_inicio(link);

  
  return 0;
}