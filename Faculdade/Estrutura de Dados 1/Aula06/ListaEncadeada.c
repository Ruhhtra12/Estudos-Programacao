#include <stdio.h>
#include <stdlib.h>

typedef struct no{
      int dado;
      struct no *prox;
}No;

int inserir_no_inicio(No **cabeca, int vlr){
      No *novo;
      novo = (No *)malloc(sizeof(No));
      if (novo == NULL){
            return 0;
      }
      novo->dado = vlr;
      novo->prox = NULL;
      
      if (*cabeca == NULL){
            *cabeca = novo;
      }else{
            novo->prox = *cabeca;
            *cabeca = novo;
      }
      return 1;
}

int qtd_elementos(No **cabeça){
    if (*cabeça == NULL){
        return 0;}
        int count = 0;
    for (No *p  = *cabeça ; p!= NULL; p=p->prox)
    {
        count++;
    }
    

}

int maior(No **cabeça){
    if (*cabeça == NULL)
    {
        return NULL;
    }
    int maior = NULL;
    for (No *p = *cabeça; p != NULL; p = p->prox)
    {
        if (p > maior)
        {
            maior = p;
        }
        
    }
    return maior;
    
    

}



void mostrar_lista(No **cabeca){
        if (*cabeca == NULL){
              printf("Lista vazia.\n");
        }
        for(No *p = *cabeca; p!=NULL; p=p->prox){
              printf("%i\n", p->dado);
        }
}

int menu(){
      int opc, vlr;
      system("clear");
      printf("[0] - Sair.\n");
      printf("[1] - Inserir no início.\n");
      printf("[2] - Mostrar lista.\n");
      printf("[3] - Inserir no fim.\n");
      printf("[4] - Remover no início.\n");
      printf("[5] - Remover no fim.\n");
      printf('[6] - Obter a quantidade de elementos');
      printf('[7] - Obter o maior elemento');
      
      
      printf("Escolha uma opção: ");
      scanf("%i", &opc);
      return opc;
}

int inserir_no_fim(No **cabeca, int vlr){
      No *novo;
      novo = (No *)malloc(sizeof(No));
      if (novo == NULL){
            return 0;
      }
      novo->dado = vlr;
      novo->prox = NULL;
      
      if (*cabeca == NULL){
            *cabeca = novo;
      }else{
            No *p;
            for(p=*cabeca; p->prox!=NULL; p=p->prox);
            p->prox = novo;            
      }
      return 1;
}

int remover_no_inicio(No **cabeca){
      if (*cabeca == NULL){ // lista vazia
            return 0;
      }
      No *p = *cabeca;
      *cabeca = p->prox;
      free(p);
      return 1;
}

int main(){
      No *cabeca=NULL;
      int opc, vlr;
      
      while(opc = menu()){
            switch(opc){
                  case 1:
                        printf("valor: ");
                        scanf("%i", &vlr);
                        if (inserir_no_inicio(&cabeca, vlr)){
                              printf("Elemento %i inserido.\n", vlr);
                        }else{
                              printf("Falha ao inserir o elemento %i\n", vlr);
                        }
                  break;
                  case 2:
                        mostrar_lista(&cabeca);
                  break;
                  case 3:
                        printf("valor: ");
                        scanf("%i", &vlr);
                        if (inserir_no_fim(&cabeca, vlr)){
                              printf("Elemento %i inserido.\n", vlr);
                        }else{
                              printf("Falha ao inserir o elemento %i\n", vlr);
                        }
                  break;
                  case 4:
                         if (remover_no_inicio(&cabeca)){
                              printf("Elemento removido.\n");
                        }else{
                              printf("Falha ao remover\n");
                        }
                  break;
                  case 5:
                        printf("Remover no final\n"); 
                  break;
                  case 6:
                        printf("obter a quantidade de elementos\n");
                    break;
                    case 7:
                        int aux = maior(&cabeca);
                        if (aux == NULL)    
                        {
                            printf("Lista Vazia\n");
                        }
                        else{
                        printf("O maior elemento é: %i",aux);
                        }
                        break;
                        default:
                        printf("Opção inválida.\n");
            }
            getchar();
            getchar();
      }
}