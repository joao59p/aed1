/*
  Disciplina: Algoritmos e Estruturas de Dados I
  Aluno Joao Paulo Pantoja Cavalcante
  Matricula: 2115280050
*/

#include "lista_encadeada2.h"

int main(int argc, char** argv) 
{
  //variaveis
  int numero;
  int i = 0;
  
  //criando a lista
  No *lista_encadeada = criar();

    //inserindo elementos
    while(i < 1000)
    {
      scanf("%d", &numero);
      lista_encadeada = inserir(lista_encadeada, numero);
      i++;
    }

  //excluir_elemento(lista_encadeada, 7847);

  imprimir(lista_encadeada);

  return 0;
}
