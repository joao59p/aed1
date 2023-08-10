/*
  Alunos: 
  Joao Paulo Pantoja Cavalcante
  Pedro Rubens de Souza Colares
  
  Matricula:
  2115280050
  2115280064
  
  Disciplina: Estrutura de Dados 1
*/

#include "to_do_list.h"
#include <stdbool.h>

int main(int argc, char **argv)
{
    //variáveis 
    Lista *Lista_de_tarefas[7];
    char descricao[70];
    int i, menu, menu_tarefa;

    //lista de dia da semana constante
    const char *dia_da_semana[] = {"Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado", "Domingo"};

    //criando a lista to do list
    for (i = 0; i < 7; i++)
    {
        Lista_de_tarefas[i] = criar_lista();
    }

      //chamada do menu inicial
      do
       {
          printf("\nEscolha uma opção da sua To do List:\n");
          printf("1. Adicionar tarefa\n");
          printf("2. Remover tarefa já feita\n");
          printf("3. Mostrar tarefas de um dia\n");
          printf("4. Sair\n");
          scanf("%d", &menu);
  
          switch (menu)
          {
            
          case 1:
              //adicionando tarefas na to do list
              printf("\nQual dia da semana você deseja incluir sua tarefa ?\n");
  
              for (i = 0; i < 7; i++)
                  printf("%d) %s\n", i + 1, dia_da_semana[i]);
  
              scanf("%d", &menu_tarefa);
  
              printf("\nInforme qual tarefa você irá realizar:\n");
              getchar(); 
              fgets(descricao, sizeof(descricao), stdin);
              
              //chamando a função de cria e adiciona tarefa
              Tarefa *nova = criar_tarefa(descricao);
              adicionar_tarefa(Lista_de_tarefas[menu_tarefa - 1], nova);
  
            break;
  
          case 2:

            //removendo elementos da to do list
            printf("Informe qual dia você deseja remover tarefa \n");
            for (i = 0; i < 7; i++)
              printf("%d) %s\n", i + 1, dia_da_semana[i]);
  
            scanf("%d", &menu_tarefa);

            //chamada para remover tarefa da lista
            remover_tarefas(Lista_de_tarefas[menu_tarefa -1]);
            
            break;
  
          case 3:

              //vendo as tarefas de um dia da lista
              printf("\nQual dia da semana você deseja ver suas tarefas ?\n");
  
              for (i = 0; i < 7; i++)
                  printf("%d) %s\n", i + 1, dia_da_semana[i]);
  
              scanf("%d", &menu_tarefa);
  
              printf("Suas tarefas no dia %s são:\n", dia_da_semana[menu_tarefa -1]);

              //chamada da função de ver as tarefas do dia
              tarefas_do_dia(Lista_de_tarefas[menu_tarefa -1]);
  
             break;
  
          case 4:

              //encerrando o programa
              printf("Programa encerrado");
              
              break;
  
          default:

              //caso o usuário digite alguma opção errada
              printf("Opção inválida. Tente novamente.\n");
            
              break;
          }
  
      } while (menu != 4);

    return 0;
}
