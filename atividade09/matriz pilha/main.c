/*
  Alunos: 
  Joao Paulo Pantoja Cavalcante
  Pedro Rubens de Souza Colares
  
  Matricula:
  2115280050
  2115280064
  
  Disciplina: Estrutura de Dados 1
*/

#include "pilha.h"

int main(int argc, char **argv) {

  
  int saiu = 0;
  int escolha;
  int linha = 0, coluna = 0;
  Pilha *p = criar_pilha();
  int num;
  int labirinto[4][4];

    //abrindo arquivo e trazendo qual sera o labirinto
    FILE* arquivo = fopen("matriz.txt", "r");

        if (arquivo == NULL) {

            printf("Erro ao abrir o arquivo.\n");
            return 1;

        }

        for (int i = 0; i < 4; i++) {

            for (int j = 0; j < 4; j++) {

                fscanf(arquivo, "%d", &labirinto[i][j]);

            }
        }

        fclose(arquivo);

  //criando a pilha
  empilhar(p, labirinto[linha][coluna]);


  //abrindo menu para o usuario
  while (labirinto[linha][coluna] != 3) 
  {
    
      //variaveis auxiliares
      int aux_linha = linha, aux_coluna = coluna;
      

      //imprimindo o labirinto para o usuario
      printf("\nLabirinto:\n");
      for (int i = 0; i < 4; i++) 
      {
        
        for (int j = 0; j < 4; j++) 
        {
          
            //p == posição do usuario
            if (linha == i && coluna == j)
            {
              printf("P ");
            }
              
            //caminho do labirinto
            else
            {
              printf("%d ", labirinto[i][j]);
            }
          
        }

        printf("\n");

      }

      //pedinndo o movimento do usuario
      printf("\nEscolha uma opção:\n1) Mover para cima\n2) Mover para a direita\n3) Mover para baixo\n4) Mover para a esquerda\n5) Sair\n");
     
      scanf("%d", &escolha);

      //validando a escolha do usuario
      switch (escolha) 
      {
        
        case 1:
          
          aux_linha--;
          
          break;
        
        case 2:
          
          aux_coluna++;
          
          break;
        
        case 3:
          
          aux_linha++;
          
          break;
        
        case 4:
          
          aux_coluna--;
          
          break;
        
        case 5:
        
            saiu = 1;

            break;

        default:
          
            printf("\nfavor informa uma opção valida\n");

          break;

      }

      //validando se o usuario fez uma jogada valida para entra na pilha
      if (saiu != 1 && aux_linha >= 0 && aux_linha < 4 && aux_coluna >= 0 && aux_coluna < 4 && labirinto[aux_linha][aux_coluna] != 0) 
      {
        
        linha = aux_linha;
        coluna = aux_coluna;
        empilhar(p, labirinto[linha][coluna]);
        
      }
        
    else if (saiu == 1)
      break;
    
  }

    if (saiu == 0) 
    {
      
      printf("\nParabéns, você encontrou a saída\nCaminho percorrido:\n");
      
      while (p->topo != NULL) 
        printf("%d ", desempilhar(p));
      
      printf("\n");
    }

    free(p);

    return 0;
}
