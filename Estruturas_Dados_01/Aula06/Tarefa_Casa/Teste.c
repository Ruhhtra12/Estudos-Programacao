#include <stdio.h>
#include <stdlib.h>
struct ModeloNó
{
    int valor;
    struct ModeloNó *prox;
};

int ADD_in_Start(struct ModeloNó *cabeça, int valor){
    struct ModeloNó *NOVO =  (struct ModeloNó *) malloc(sizeof(struct ModeloNó));
    NOVO->prox = cabeça->prox;
    NOVO->valor = cabeça->valor;
    cabeça->valor = valor;
    cabeça->prox = NOVO;
    return valor;}
int ADD_in_End(struct ModeloNó *cabeça, int valor){
    struct ModeloNó *NOVO =  (struct ModeloNó *) malloc(sizeof(struct ModeloNó));
    struct ModeloNó *ULTIMO;
    for ( ULTIMO = cabeça; ULTIMO->prox != NULL; ULTIMO = ULTIMO->prox)
    
    NOVO->valor = valor;
    ULTIMO->prox = NOVO;
    return valor;}
int Imprimir_Valores(struct ModeloNó *cabeça){
    int num =1;
    for (struct ModeloNó *i = cabeça; i->prox != NULL; i = i->prox)
    {
        printf("%i° valor:",num);
        printf("%i\n",i->valor);
        num++;
    }
    

}
void menu(struct ModeloNó *cabeça){
    system("clear");
    printf("MENU DE OPÇÔES\n");
    printf("[1] - Adicionar elemento no incio\n");
    printf("[2] - Adicionar elemento no final\n");
    printf("[3] - Imprimir valores\n");
    int input;
    scanf("%i",&input);
    switch (input)
    {
        case 1:     
            printf("Escolhido: Adicionar elemento no inicio\n");
            printf("Digite o número que quer adicionar:\n");
            scanf("%i",&input);
            printf("%i Adicionado no inicio\n",ADD_in_Start(cabeça,input));


        break;
        case 2:     
            printf("Escolhido: Adicionar elemento no final\n");
            printf("Digite o número que quer adicionar:\n");
            scanf("%i",&input);
            printf("%i Adicionado no final\n",ADD_in_End(cabeça,input));


        break;
        case 3:     
            printf("Escolhido: Printar elementos\n");
            printf("Elmentos:\n");
            Imprimir_Valores(cabeça);
            printf("Execução finalizada - Pressione qualquer tecla para sair");


        break;
    
    default:
        break;
    }
    getchar();
    getchar();
}
int main()
{
    struct ModeloNó *cabeça =  (struct ModeloNó *) malloc(sizeof(struct ModeloNó));
    while (1)
    {
        menu(cabeça);
    }


    
    return 0;
}
