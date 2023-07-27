#include <stdio.h>
#include <stdlib.h>

//criando a estrutura nó
typedef struct no 
{

  int valor;
  struct no *proximo;
  struct no *anterior;

} No;

//inicializando a lista
No* criar()
{
  return NULL;  
}

//inserindo elementos na lista no inicio
No* inserir_no_inicio(No *lista, int valor)
{
    No *novo, *temp;

    //caso lista esteja vazia
    if(lista == NULL)
    {
        novo = (No * )   malloc( sizeof( No ) );
        novo -> valor = valor;
        novo->proximo = NULL;
        novo->anterior = NULL;
        lista = novo;
    }

    //lista já com elementos
    else
    {
        temp = lista;
        novo = (No * )   malloc( sizeof( No ) );
        novo -> valor  = valor;
        novo-> proximo = lista;
        temp->anterior = novo;
        novo -> anterior = NULL;
        lista = novo;
    }

    return  lista;
}


//excluir um elemento do inicio da lista
No* excluir_do_inicio(No *lista)
{
    //variaveis
    No  *temp;  
    temp = lista;

    //validando se a lista esta vazia
    if(lista == NULL)
      printf("Lista está vazia");
    
      
    else
    {
      lista = temp ->proximo;
      lista -> anterior = NULL;
      temp -> proximo = NULL;
      free(temp);
    }

    return lista;
}

//inserir elementos na lista no final
No* inserir_no_fim(No *lista, int valor)
{

  //variaveis
  No* temp = lista;
  No* novo;

  //validando se a lista esta vazia
  if(lista == NULL)
  {
    novo = (No * )   malloc( sizeof( No ) );
    novo -> valor = valor;
    novo->proximo = NULL;
    novo->anterior = NULL;
    lista = novo;
  }

  else{
    
    // Encontrando o último nó
    while (temp->proximo != NULL)
        temp = temp->proximo;

    //alocando o novo nó
    novo = (No * )   malloc( sizeof( No ) );
    novo -> valor = valor;
    novo->proximo = NULL;
    novo->anterior = temp;
    temp->proximo = novo;
      
  }
  
  return lista;
}

//excluindo elemento do final da lista
No* excluir_do_fim(No* lista)
{
    //variaveis
    No  *temp;  
    temp = lista;

    //validando se a lista esta vazia
    if(lista == NULL)
      printf("Lista está vazia");

    else
    {
        //percorrendo a lista
        while (temp->proximo != NULL)
          temp = temp->proximo;

        //removendo o elemento
        temp -> anterior -> proximo = NULL;
        temp-> anterior = NULL;
        free(temp);
    }

  return lista; 
}

void busca_elemento(No* lista, int valor)
{
  No *temp;
  int contador;

  contador = 1;
  int tag = 0;
  temp = lista;

    //buscando
    while(temp != NULL)
    {

      if(temp -> valor != valor)
      {
        temp = temp -> proximo;
        contador += 1;
      }
        
      else
      {
        tag = 1;
        break;
      }
      
    }

  //validando se o elemento foi encontrado
  if(tag == 0)
    printf("Número não encontrado na lista");

  else
    printf("Número encontrado na posição %d da Lista", contador);
  
}

//imprimindo os elementos
void imprimir(No*lista)
{
  //variavel que irar percorrer a lista
  No *temp;
  temp = lista;

    //imprimindo
    while(temp != NULL)
    {
      printf("%d\n",temp->valor);
      temp = temp->proximo;
    }

}

//imprimindo elementos inversamente
void imprimir_inverso(No*lista)
{
    // Variável que irá percorrer a lista
    No* temp = lista;

    // Encontrando o último nó
    while (temp->proximo != NULL)
        temp = temp->proximo;

    // Imprimindo os elementos na ordem inversa
    while (temp != NULL)
    {
        printf("%d\n", temp->valor);
        temp = temp->anterior;
    }
    
}
