#include <stdio.h>
#include <stdlib.h>
typedef struct no
{
    int dado;
    struct no *prox, *ant;
}No;
int InserirNoInicio(No **cabeça,int vlr){
    No *novo;
    novo =(No *) malloc(sizeof(No));
    if (novo == NULL)
    {
        return 0;
    }
    novo->dado = vlr;
    novo->prox = NULL;
    novo->ant = NULL;
    if (*cabeça == NULL)
    {
        *cabeça = novo;
    }else{
        novo->prox = *cabeça;
        (*cabeça)->ant = novo;
        *cabeça = novo;
    }
    return 1;
    
    
}

void mostrar_lista(No **cabeça){
    if (*cabeça == NULL)
    {
        printf("Lista vazia\n");
    }
    for (No *p = *cabeça; p != NULL;p = p->prox)
    {
        printf("%i\n",p->dado); 
    }
    
    
}

int VerificarIntegridade(No **cabeça){
    if(*cabeça == NULL){
        return 1;
    }
    int Cont = 0;
    No *p;

    for ( p  =  *cabeça; p->prox != NULL ; p=p->prox)
    {
        Cont ++;
    }
    for( ; p->ant != NULL;p = p->ant){
        Cont --;
    }
    if (Cont == 0)
    {
        return 1;
    }
    

    
}

int main()
{
    No *cabeça = NULL;
    InserirNoInicio(&cabeça,10);
    InserirNoInicio(&cabeça,20);
    InserirNoInicio(&cabeça,30);

    mostrar_lista(&cabeça);

    if (VerificarIntegridade(&cabeça))
    {
        printf("A lista está OK\n");
    }else
    {
        printf("A lista está quebrada\n");
    }
    

    return 0;
}
