/*
  Disciplina: Algoritmos e Estruturas de Dados I
  Aluno Joao Paulo Pantoja Cavalcante
  Matricula: 2115280050
  
  lista duplamente encadeada sem descritor
  
*/

#include "lista_DuplamenteEncadeada.h"

int main(int argc, char** argv) 
{
  //variaveis
  int numero;
  int i = 0;
  
  //criando a lista
  No *lista_encadeada = criar();

    //inserindo elementos
    while(i < 5)
    {
      scanf("%d", &numero);
      lista_encadeada = inserir_no_inicio(lista_encadeada, numero);
      i++;
    }

  printf("\nOrdem dos elementos:\n");
  imprimir(lista_encadeada);

  //lista_encadeada = excluir_do_inicio(lista_encadeada);

   //lista_encadeada = inserir_no_fim(lista_encadeada, 24);

  //lista_encadeada = excluir_do_fim(lista_encadeada);
  
  printf("\nOrdem dos elementos inverso:\n");
  imprimir_inverso(lista_encadeada);

  //busca_elemento(lista_encadeada, 0);
  
  return 0;
}
