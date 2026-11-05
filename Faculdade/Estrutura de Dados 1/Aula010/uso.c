#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int menu(){
      int opc;
      system("clear");
      printf("[0] - Sair.\n");
      printf("[1] - Criar a pilha.\n");
      printf("[2] - Empilhar.\n");
      printf("[3] - Desempilhar.\n");
      printf("[4] - Consultar o topo.\n");
      printf("[5] - Mostrar os elementos na pilha.\n");
      printf("[6] - Destruir a pilha.\n");
      
            printf("\nEscolha uma opção: ");
      scanf("%i", &opc);
      return opc;
}

int main(){
      Pilha *a=NULL;
      int opc, vlr, *aux;
      while(opc = menu()){
            switch(opc){
                  case 1:
                          if (a != NULL){
                                printf("A pilha já existe.\n");
                          }else{
                                a = criar_pilha();
                                printf("A pilha foi criada com sucesso.\n");
                          }
                  break;
                  case 2:
                          printf("valor: ");
                          scanf("%i", &vlr);
                          if (empilhar(a, vlr)){
                                printf("%i empilhado.\n", vlr);
                          }else{
                                printf("Falha ao empilhar %i.\n", vlr);
                          }
                  break;
                  case 3:
                          if (desempilhar(a)){
                                printf("elemento desempilhado.\n");
                          }else{
                                printf("Falha ao desempilhar.\n");
                          }
                  break;
                  case 4:
                        aux = topo(a);
                        if (aux == NULL){
                              printf("Pilha vazia.\n");
                        }else{
                              printf("Topo: %i\n", *aux);
                        }
                  break;
                  case 5:
                        mostrar_pilha(a);
                  break;
                  case 6:
                        destruir_pilha(&a);
                        printf("O espaço da pilha foi removido.\n");
                  break;
                  default:
                        printf("opção inválida.\n");
            }
            getchar();
            getchar();
      }      
}

