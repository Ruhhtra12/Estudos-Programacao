#include <stdio.h>
#include <stdlib.h>


typedef struct ModeloNoLLDE
{
    int valor;
    struct ModeloNoLLDE *Proximo;
    struct ModeloNoLLDE *Anterior;
}ModeloNoLLDE;

int AdicionarNoInicio(ModeloNoLLDE * Cabeca, int valor){
    if (Cabeca != NULL)
    {
        //Faremos aqui a troca dos valores da cabeça para o próximo nó
        ModeloNoLLDE * Novo = (ModeloNoLLDE *) malloc(sizeof(ModeloNoLLDE));
        Novo->Anterior = Cabeca;
        Cabeca->Proximo = Novo;
        Novo->valor = Cabeca->valor;        
        Novo->Proximo = Cabeca->Proximo;
    }
    Cabeca->valor = valor;
    return 1;
}
int AdicionarNoFim(ModeloNoLLDE * Cabeca, int valor){
    if (Cabeca != NULL)
    {
        ModeloNoLLDE *p;
        for ( p = Cabeca; p->Proximo != NULL; p = p->Proximo);        
        //Faremos aqui a troca dos valores da cabeça para o próximo nó
        ModeloNoLLDE * Novo = (ModeloNoLLDE *) malloc(sizeof(ModeloNoLLDE));
        Novo->Anterior = Cabeca;
        p->Proximo = Novo;
        p->valor = valor;
        Novo->Anterior = p;
    }
    
    return 1;
}
void Mostrarlista(ModeloNoLLDE *cabeca){
    for (ModeloNoLLDE * p  = cabeca; p->Proximo != NULL; p = p->Proximo)
    {
        printf("%i ",p->valor);
    }
    
}

void menu(ModeloNoLLDE * cabeca){
    int input;
    int valor;
    system("clear");
    printf("MENU\n");
    printf("[1] - Adicione no ínicio\n");
    printf("[2] - Adicione no fim\n");
    printf("[3] - Ordene a lista\n");
    printf("[4] - Calcule a quantidade de elementos\n");
    printf("[5] - Mostre os elementos\n");
    printf("[6] - Mostre os [x] primeiros elementos\n");
    printf("[7] - Mostre os [x] ultimos elementos\n");
    printf("[8] - Calcule a quantidade de elementos do incio até o valor[x]\n");
    printf("[9] - Calcule a quantidade de elementos do valor[x] até o fim\n");
    printf("[10] - Mostrar apenas valores negativos\n");

    scanf("%i",&input);
    switch (input)
    {
    case 1:
            printf("SELECIONADO: ADICIONAR NO INICIO\n");
            printf("Qual valor a ser adicionado?\n");
            scanf("%i",&valor);
            AdicionarNoInicio(cabeca,valor);
        break;
    
    case 2:
            printf("SELECIONADO: ADICIONAR NO INICIO\n");
            printf("Qual valor a ser adicionado?\n");
            scanf("%i",&valor);
            AdicionarNoInicio(cabeca,valor);
        break;
    case 5:
         Mostrarlista(cabeca);
        break;
    
    default:
        break;
    }
}


int main()
{
    ModeloNoLLDE * cabeca = NULL;
    menu(cabeca);

    return 0;
}
