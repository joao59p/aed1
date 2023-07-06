#include <stdio.h>
#include <stdlib.h>

//criando a estrutura nó
typedef struct no 
{
  int valor;
  struct no *proximo;
} No;

//inicializando a lista
No* criar()
{
  return NULL;  
}

//inserindo elementos na lista
No* inserir (No *lista, int valor)
{
    No *novo;

    if(novo == NULL)
        printf("Erro ao Alocar memoria");
    
    else{
        novo = (No * )   malloc( sizeof( No ) );
        novo -> valor = valor;
        novo->proximo = lista;
        lista = novo;
    }

    return  lista;
}


//excluir um elemento em especifico
No* excluir_elemento(No *lista, int valor)
{
    //variaveis
    No *busca, *anterior;
    int auxiliar;

    //adicionando valor as variaveis
    auxiliar = 0;
    busca = lista , anterior = lista;

      while(busca != NULL)
      {
        //caso seja o primeiro elemento da lista
        if(auxiliar == 0)
        {
          
          if(busca -> valor == valor)
          {
            //excluindo o elemento
            lista = busca ->proximo;
            busca->proximo = NULL;
            free(busca);
            break;
          }
  
        }

        //caso seja qualquer outro elemento da lista
        else
        {
          
          if(busca -> valor == valor)
          {
            //apontando o elemento anterior para o proximo
            anterior->proximo = busca->proximo;
            busca->proximo = NULL;
            free(busca);

            break;
          }

          anterior = anterior->proximo;
        }

        auxiliar ++;
        busca = busca->proximo;
      
      }
  
    return lista;
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