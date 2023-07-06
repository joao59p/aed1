#include "lista_encadeada2.h"

int main(int argc, char** argv) 
{

  int numero;
  int i = 0;
  
  No *lista_encadeada = criar();

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
