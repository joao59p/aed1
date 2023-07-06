#include <stdlib.h>
#include <stdio.h>

//criando a estrutura nó
typedef struct no 
{
  int valor;
  struct no *proximo;
} No;

//criando estrutura para guardar inicio e final da lista
typedef struct endereco
{
  No *inicio;
  No *fim;
  int tamanho;
}Endereco;


//inicializando a lista com seus endereços
Endereco* criar()
{
  Endereco *lista;
  lista = (Endereco *)malloc( sizeof(Endereco) );
  
  lista -> inicio= NULL;
  lista -> fim = NULL;
  lista -> tamanho = 0;
  
  return lista;  
}

//inserindo elementos na lista
No* adicionar_inicio (Endereco *lista, int valor)
{
    //criando novo nó 
    No *novo;
    novo = (No * )   malloc( sizeof( No ) );
    novo -> valor = valor;

      //caso a lista não possua elementos
      if(lista -> tamanho == 0)
      {
        novo -> proximo = lista -> fim;
        lista ->inicio = novo;
        lista -> fim = novo;
        lista -> tamanho ++;
      }
      //caso a lista já possua elementos
      else
      {
        novo -> proximo = lista -> inicio;
        lista -> inicio = novo;
        lista -> tamanho ++;
      }
    
  
    return lista -> inicio;
}

//excluindo o final da lista
No* adicionar_fim (Endereco *lista, int valor)
{
    //criando novo nó
    No *novo, *aux;
    novo = (No * )   malloc( sizeof( No ) );
    novo -> valor = valor;

      //caso a lista não possua elementos
      if(lista -> tamanho == 0)
      {
        novo -> proximo = lista -> fim;
        lista ->inicio = novo;
        lista -> fim = novo;
        lista -> tamanho ++;
      }
      //caso a lista já possua elementos
      else
      {
        novo -> proximo = NULL;
        aux = lista -> fim;
        aux -> proximo = novo;
        lista ->fim = novo;
        lista -> tamanho ++;
      }
    
  
    return lista -> inicio;
}

// excluindo o inicio da lista
Endereco* excluir_inicio(Endereco *lista)
{
  //criando variavel temporaria para auxiliar
  No *temp;

  //passando a lista para frente e desalocando espaço
  temp = lista -> inicio;
  temp = temp->proximo;
  free(lista ->inicio);
  lista->inicio = temp;
  lista -> tamanho --;
  
  return lista;
}

Endereco* excluir_fim(Endereco *lista) 
{
  //criando variavel temporaria e auxiliar
  int i = 1;
  No *temp;
  temp = lista -> inicio;
  
  //percorrendo a lista até o penultimo elemento
    while(i != lista-> tamanho -1)
    {
      temp = temp->proximo;
      i++;
    }

  //desalocando a memoria e passando o novo final
  temp->proximo = NULL;
  free(lista-> fim);
  lista->fim = temp;
  lista -> tamanho --;
  
  return lista;
}

//imprimindo os elementos
void imprimir(Endereco *lista)
{
  //variavel que irar percorrer a lista
  No *temp;
  temp = lista->inicio;
  
    //imprimindo
    while(temp != NULL)
    {
      printf("%d\n",temp->valor);
      temp = temp->proximo;
    }

}