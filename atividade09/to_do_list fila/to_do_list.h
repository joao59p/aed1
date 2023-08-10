#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criação das estruturas 
typedef struct Tarefa
{
  char descricao[50];
  struct Tarefa *prox; 
} Tarefa;

typedef struct Lista
{
  struct Tarefa *inicio;
  struct Tarefa *fim;
}Lista;

//metodo de criar tarefa
Tarefa* criar_tarefa(char *descricao)
{
  Tarefa *nova;
  nova = (Tarefa*) malloc(sizeof(Tarefa));
  strcpy(nova->descricao , descricao);
  nova->prox = NULL;
  return nova;
}

//metodo da criação da lista
Lista* criar_lista()
{
  Lista *lista_de_tarefas = (Lista*)malloc(sizeof(Lista));
  lista_de_tarefas -> inicio = NULL;
  lista_de_tarefas -> fim =  NULL;
  return lista_de_tarefas;
}

//adicionando tarefa na lista
void adicionar_tarefa(Lista *lista_de_tarefas, Tarefa *nova_tarefa)
{
  
    if (lista_de_tarefas->fim == NULL)
    {
        lista_de_tarefas->fim = nova_tarefa;
        lista_de_tarefas->inicio = nova_tarefa;
    }
      
    else
    {
        lista_de_tarefas->fim->prox = nova_tarefa;
        lista_de_tarefas->fim = nova_tarefa;
    }
  
}

//imprimindo tarefa de um dia específico
void tarefas_do_dia(Lista *lista_de_tarefas)
{

  Tarefa *temp = lista_de_tarefas -> inicio;

   while (temp != NULL)
    {
      
      printf("%s", temp->descricao);
      temp = temp->prox;
      
    }
    
}

//remover tarefa da lista
Lista* remover_tarefas (Lista *lista_de_tarefas)
{
  
  Tarefa *temp;
  
  temp = lista_de_tarefas -> inicio; 
  lista_de_tarefas -> inicio = temp -> prox;
  
  free(temp);
}
  
