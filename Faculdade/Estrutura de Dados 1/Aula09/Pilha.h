#include <stdio.h>
#include <stdlib.h>

//Define o tamanho da pilha
#define TAM 3

typedef struct
{
    int vet[TAM];
    int topo;
    
}Pilha;

Pilha *Criar_Pilha(){
    Pilha *pilha;
    pilha = (Pilha *)malloc(sizeof(Pilha));
    if (pilha == NULL)
    {
        printf("Erro ao alocar espaço para Pilha\n");
        exit(1);
    }
    pilha->topo = 0; // Inicialização da pilha
    return pilha;
}

int empilhar(Pilha *pilha, int vlr){

    if (pilha->topo == TAM) // Verifica se a pilha está cheia
    {
        return 0;
    }
    
    pilha->vet[pilha ->topo] = vlr;
    pilha->topo++;
    return 1;
}
int *topo(Pilha *pilha){
    
};

int desempilhar(Pilha *pilha){}

void Destruir_pilha(Pilha **pilha){
    if (*pilha == NULL )
    {
        printf("A pilha não existe!\n");
    }
    else{
        free(*pilha);
        *pilha = NULL;
    }
    
}

void Mostrar_Pilha(Pilha *pilha){
    if (pilha-> topo == 0)
    {
        printf("Pilha vazia\n");
    }
    
    for (int i = 0;i < pilha->topo; i++)
    {
        printf("%i\n",pilha->vet[i]);
    }
    

}
int main(int argc, char const *argv[])
{
    return 0;
}
