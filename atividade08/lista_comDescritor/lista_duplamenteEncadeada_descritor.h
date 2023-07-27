#include <stdio.h>
#include <stdlib.h>

//criando a estrutura nó
typedef struct no 
{

  int valor;
  struct no *proximo;
  struct no *anterior;

} No;

//criando estrutura para guardar inicio e final da lista
typedef struct descritor
{
  No *primeiro;
  No *ultimo    ;
  int qtde;
}Descritor;


//inicializando a lista
Descritor* criar()
{
    Descritor *lista;
    lista = (Descritor *)malloc( sizeof(Descritor) );
  
    lista -> primeiro= NULL;
    lista ->  ultimo = NULL;
    lista -> qtde = 0;
  
    return lista;  
}

//inserindo elementos na lista no inicio
No* inserir_no_inicio(Descritor *lista, int valor)
{
    No *novo;
  
    //alocando o no na memoria
    novo = (No*)malloc(sizeof(No));
  
    if (novo == NULL)
    {
        printf("Erro ao alocar memória para o novo nó.\n");
        return lista->primeiro;
    }

    // ajustando o nó
    novo->valor = valor;
    novo->proximo = lista->primeiro;
    novo->anterior = lista->ultimo;

    // atualizando o nó da lista
    if (lista->qtde == 0)
    {
        lista->primeiro = novo;
        lista->ultimo = novo;
    }
    else
    {
        novo -> proximo -> anterior = novo;
        lista->primeiro = novo;
        lista-> ultimo -> proximo = novo;
    }

    lista->qtde++;

    return lista->primeiro;

}

//excluir um elemento do inicio da lista
No* excluir_do_inicio(Descritor *lista)
{
    //variaveis
    No  *temp;  
    temp = lista -> primeiro;

    //validando se a lista esta vazia
    if(lista ->qtde == 0)
      printf("Lista está vazia");
      
    else
    {
      //ajustando os nó para excluir 
      lista -> primeiro = temp -> proximo;
      temp -> anterior -> proximo = lista -> primeiro;
      temp -> proximo -> anterior= lista -> ultimo;
      //ajustando a quantidade de elementos na lista
      lista -> qtde --;
      //removendo o elemento
      free(temp);
    }

    return lista -> primeiro;
}

//inserir elementos na lista no final
No* inserir_no_fim(Descritor *lista, int valor)
{
    No *novo;
  
    //alocando o no na memoria
    novo = (No*)malloc(sizeof(No));
  
    if (novo == NULL)
    {
        printf("Erro ao alocar memória para o novo nó.\n");
        return lista->ultimo;
    }

    // ajustando o nó
    novo->valor = valor;
    novo->proximo = lista->primeiro;
    novo->anterior = lista->ultimo;

    // atualizando o nó da lista
    if (lista->qtde == 0)
    {
        lista->primeiro = novo;
        lista->ultimo = novo;
    }
    else
    {
        novo -> anterior -> proximo = novo;
        novo -> proximo ->anterior = novo;
        lista->ultimo = novo;
    }

    lista->qtde++;
  
  return lista -> ultimo;
}

//excluindo elemento do final da lista
No* excluir_do_fim(Descritor* lista)
{
    //variaveis
    No  *temp;  
    temp = lista -> ultimo;

    //validando se a lista esta vazia
    if(lista -> qtde == 0)
        printf("Lista está vazia");

    else
    {
        //removendo o elemento
        lista -> ultimo = temp->anterior;
        temp ->anterior -> proximo = lista-> primeiro;
        temp ->proximo ->anterior = lista -> ultimo;

        lista ->qtde --;

        free(temp);
    }

  return lista -> ultimo; 
}

void busca_elemento(Descritor* lista, int valor)
{
  No *temp;
  int contador;

  contador = 1;
  int tag = 0, aux = 0;
  temp = lista -> primeiro;

    //buscando
    while(aux < lista -> qtde)
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

        aux ++;
    }

  //validando se o elemento foi encontrado
  if(tag == 0)
    printf("\nNúmero não encontrado na lista\n");

  else
    printf("\nNúmero encontrado na posição %d da Lista\n", contador);
  
}

//imprimindo os elementos
void imprimir(Descritor *lista)
{
  //variavel que irar percorrer a lista
  No *temp, tamanho;
  temp = lista -> primeiro;
  int aux = 0;
  
  
    //imprimindo
    while(aux < lista -> qtde )
    {
      printf("%d\n",temp->valor);
      temp = temp->proximo;
      aux++;
    }

}

//imprimindo elementos inversamente
void imprimir_inverso(Descritor *lista)
{
    // Variável
    No* temp = lista -> ultimo;
    int aux = 0;

    //pecorrendo a lista
    while(aux < lista -> qtde)
    {
      printf("%d\n",temp->valor);
      temp = temp -> anterior;
      aux ++;
    }
    
}
