/*
  Disciplina: Algoritmos e Estruturas de Dados I
  Aluno Joao Paulo Pantoja Cavalcante
  Matricula: 2115280050
  
  lista duplamente encadeada com descritor
  
*/

#include "lista_duplamenteEncadeada_descritor.h"

int main(int argc , char** argv)
{

  //declarando variaveis
  Descritor *link;
  int i = 0;
  int numero;
  
  //criando lista
  link = criar();
  
  //adicionando elementos no inicio da lista
  while(i < 5)
  {
    scanf("%d", &numero);
    link -> primeiro = inserir_no_inicio(link, numero);
    i++;
  }
  
  
  //link -> inicio = inserir_no_inicio(link, 24);
  //link -> ultimo = inserir_no_fim(link, 35);
  
  //link -> ultimo = excluir_do_fim(link);
  //link -> primeiro = excluir_do_inicio(link);

  
  //imprimindo a lista
  printf("\nimprimindo lista:\n");
  imprimir(link);
  

  printf("\nimprimindo lista na ordem inversa:\n");
  imprimir_inverso(link);

  //busca_elemento(link, 50); 
  
  return 0;
}