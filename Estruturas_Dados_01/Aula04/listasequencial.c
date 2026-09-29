#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct lista{
      int vet[TAM];
      int qtd;
}Lista;

void deslocar_para_direita(Lista *lista){
      for (int i =  lista->qtd; i>0; i--){
            lista->vet[i] = lista->vet[i-1];
      }
}
int inserir_ordenado(Lista *lista, int vlr){
    for (int i = 0; i < lista->qtd; i++)
    {
        if (vlr < lista->vet[i])
        {
            for (int j = i; j < lista->qtd; j++)
            {
                lista->vet[j+1] = lista->vet[j];
            }
            lista->vet[i] = vlr;
            lista->qtd++;
            
        }
        
    }
    
}

int elemento_VLR_existe_na_lista(Lista *lista, int vlr){
    for (int i = 0; i < lista->qtd; i++)
    {
        if (lista->vet[i] == vlr)
        {
            return 1;
        }
        
    }
    return 0;
    
    
}

void deslocar_para_esquerda(Lista *lista){
      for (int i = 1  ; i< lista->qtd; i++){
            lista->vet[i-1] = lista->vet[i];
      }
}
void aplicar_dobro(Lista *lista){
    for (int i = 0; i < lista->qtd; i++)
    {
        lista->vet[i] = lista->vet[i] * 2;
    }
}

int inserir_no_inicio(Lista *lista, int vlr){
    if (lista->qtd == TAM){ // Lista cheia
          return 0;
    }
    deslocar_para_direita(lista); 
    lista->vet[0] = vlr;
    lista->qtd++;
    return 1;
}
int inserir_no_fim(Lista *lista, int vlr){
    if (lista->qtd == TAM){ // Lista cheia
          return 0;
    }
    lista->vet[lista->qtd] = vlr;
    lista->qtd++;
    return 1;
}

void mostrar_lista(Lista *lista){
      if (lista->qtd == 0){ // Lista vazia
            printf("Lista vazia.\n");
      }else{
          for (int i=0; i<lista->qtd; i++){
                printf("%i\n", lista->vet[i]);
          }
      }
}
int remover_no_inicio(Lista *lista){
    if (lista->qtd <= 0){
        printf("Lista vazia\n");}
        else{ 
            lista->vet[0] = 0;
            deslocar_para_esquerda(lista);
            lista->qtd--;

        }
        /* code */
    }
    

int menu(){
      int opc;
      system("clear");
      printf("[0] - Sair.\n");
      printf("[1] - Inserir no início.\n");
      printf("[2] - Inserir no fim.\n");
      printf("[3] - Mostrar lista.\n");
      printf("[4] - Remover no início.\n");
      printf("[5] - aplicar dobro.\n");
      printf("[6] - O elemento existe na lista.\n");
      printf("[7] - Inserir elemento ordenado.\n");
      
      
      printf("Escolha uma opção: ");
      scanf("%i", &opc);
      return opc;
}

int main(){
      Lista a;
      int opcao, vlr;
      
      a.qtd = 0; // Inicialização

      while(opcao = menu()){
              switch(opcao){
                    case 1:
                          printf("valor: ");
                          scanf("%i", &vlr);
                          if (inserir_no_inicio(&a, vlr)){
                                printf("Elemento %i inserido.\n", vlr);
                          }else{
                                printf("Falha ao inserir o elemento %i.\n", vlr);
                          }                          
                          break;
                    case 2:
                          printf("valor: ");
                          scanf("%i", &vlr);
                          if (inserir_no_fim(&a, vlr)){
                                printf("Elemento %i inserido.\n", vlr);
                          }else{
                                printf("Falha ao inserir o elemento %i.\n", vlr);
                          }                          
                          ;
                    break;
                    case 3:
                          mostrar_lista(&a);
                          break;
                    case 4:
                          if (remover_no_inicio(&a))
                          {
                            printf("Elemento removido");
                          }
                          else{
                            printf("Falha ao remover o elemento");
                          }
                    case 5:
                          aplicar_dobro(&a);
                          mostrar_lista(&a);
                    break;
                    case 6:
                          scanf("%i", &vlr);
                          if (elemento_VLR_existe_na_lista(&a,vlr))
                          {
                            printf("O elemento existe na lista");
                          }else{
                            printf("O elemento não foi encontrado");
                          }
                        
                          
                    break;
                    case 7:
                          
                          scanf("%i",&vlr);
                          inserir_ordenado(&a, vlr);
                    break;
                    default:
                          printf("Opção inválida.\n");
              }
              getchar(); // pegar o caratere de enter
              getchar(); // parar a tela
      }

}