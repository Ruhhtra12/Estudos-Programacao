#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

typedef struct no{
      int dado;
      struct no *prox;
}No;

struct pilha{
      No *topo;
};

void verificar_pilha_nula(Pilha *pilha){
      if (pilha == NULL){
            printf("A pilha não foi criada.\n");
            exit(1);
      }
}

Pilha * criar_pilha() { 
      Pilha *pilha;
      pilha = (Pilha *)malloc(sizeof(Pilha));
      if (pilha == NULL){
            printf("Erro ao alocar o espaço para a pilha.\n");
            exit(1);
      }
      pilha->topo = NULL;
      return pilha;
}

void destruir_pilha(Pilha **pilha) { 
      verificar_pilha_nula(*pilha);
      if (*pilha == NULL){
            printf("A pilha não existe.\n");
      }else{
            while (desempilhar(*pilha));            
            free(*pilha);
            *pilha = NULL;
      }
}

int empilhar(Pilha *pilha, int vlr){ 
      verificar_pilha_nula(pilha);
      No *novo = (No *)malloc(sizeof(No));
      if (novo == NULL)
      {
            return 0;
      }
      novo->dado = vlr;
      novo->prox = NULL;
      
      if ( pilha->topo == NULL ) {
            pilha->topo = novo;
      }else{
            novo->prox = pilha->topo;
            pilha->topo = novo;
      }
      return 1;
}

int *topo(Pilha *pilha){ 
      verificar_pilha_nula(pilha);
      if (pilha->topo == NULL) {
            return NULL;
      }
      return &pilha->topo->dado;
}

int desempilhar(Pilha *pilha){ 
      verificar_pilha_nula(pilha);
      if (pilha->topo == NULL) {
            return 0;
      }
      No *p = pilha->topo;
      pilha->topo = p->prox;
      free(p);
      return 1;
}

void mostrar_pilha(Pilha *pilha){ 
      verificar_pilha_nula(pilha);
      if (pilha->topo == NULL) {
            printf("Pilha vazia.\n");
      }
      for(No *p = pilha->topo; p != NULL; p = p->prox){
            printf("%i\n", p->dado);
      }
}

