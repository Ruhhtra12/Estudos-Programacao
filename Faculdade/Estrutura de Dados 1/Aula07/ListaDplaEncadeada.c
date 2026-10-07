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
int InserirNoFIm(No **cabeça,int vlr){
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
        No *p;
        for (p = *cabeça ; p != NULL; p = p->prox);
        p->prox = novo;
        novo->ant = p;
        
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

int RemoverNoInicio(No *cabeça){
    if (cabeça != NULL){
        cabeça = cabeça->prox;
        cabeça->ant = NULL;
        return 1;
    }
    return 0;
}
    

int menu(){
    printf("MENU - OPÇÔES\n");
    printf("Selecione a opção que deseja:\n");
    printf("[0] - Sair\n");
    printf("[1] - Inserir no Início\n");
    printf("[2] - Mostrar lista\n");
    printf("[3] - Verificar a integridade da lista\n");
    printf("[4] - Adicionar no fim\n");
    printf("[5] - Adicionar no fim\n");
    printf("Escolha uma opção : ");

    int input;
    scanf("%i",&input);

    return input;
}

int main()
{
    No *cabeça = NULL;
    int input;
    while (1)
    {
        input = menu();
        switch (input)
        {
        case 0:
            return 0;
            break;
        case 1:
            printf("Selecionado: Adicionar no Inicio\n");
            printf("Digite o valor: ");
            scanf("%i",&input);
            if (InserirNoInicio(&cabeça,input))
            {
                printf("%i - Adicionado\n",input);
            }else
            {
               
               printf("A operação não ocorreu - ALGO DEU ERRADO\n");
            }
            
            break;
        
        case 2:
            printf("Selecionado: Mostrar lista\n");
            mostrar_lista(&cabeça);
        break;
        case 3:
            printf("Selecionado: Verificar integridade\n");
            VerificarIntegridade(&cabeça);
        break;
            
        case 4:
            printf("Selecionado: Adicionar no Fim\n");
                printf("Digite o valor: ");
                scanf("%i",&input);
                if (InserirNoFIm(&cabeça,input))
                {
                    printf("%i - Adicionado\n",input);
                }else
                {
                
                printf("A operação não ocorreu - ALGO DEU ERRADO\n");
                }
            
                
                break;
                case 5:
                printf("Remover no inicio\n");
                if (RemoverNoInicio(cabeça))
                {
                    printf("%i - Removido no inicio\n",input);
                }else
                {
                
                printf("A operação não ocorreu - ALGO DEU ERRADO\n");
                }
                break;
        
        default:
            break;
        }
        getchar();
        getchar();
        system("clear");
        menu();
    }
    

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
