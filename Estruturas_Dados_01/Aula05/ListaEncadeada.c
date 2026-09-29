#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int dado;
    struct no *prox;
}No;

int Inserir_no_inicio(No**lista, int vlr){
    No *novo;
    novo = (No *)malloc(sizeof(No));
    if (novo == NULL)
    {
        novo->dado = vlr;
        novo->prox = NULL;
        if (*Cabeça == NULL)
        {
             
        }
        
    }
    else{

    }

    
}

int excluir_no_inicio(No *lista){
    if (*cabeça == NULL)
    {
        return 0;
    }else{
        *cabeça = &cabeça->prox;
    }
    
}

int main(int argc, char const *argv[])
{
    No *Cabeça = NULL;
    Inserir_no_inicio(&Cabeça,10);
    Inserir_no_inicio(&Cabeça,20);
    Inserir_no_inicio(&Cabeça,30);

    printf("%i\n",Cabeça->dado);
    return 0;
}
