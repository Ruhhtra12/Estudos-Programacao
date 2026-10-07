#include <stdio.h>
int TAM=10;

struct contato{
    char nome[50];
    int idade;
};
void mostrar_contato(struct contato *x)
{
    printf("Nome: %s",x->nome);
    printf("idade: %i\n",x->idade);

};
void ler_contato(struct contato *x)
{
    printf("Nome: ");
    fgets(x->nome,50,stdin);
    printf("Idade ");
    scanf("%i ",&x->idade);

}
int main(){
    struct contato x[TAM];
    int i;
    for (i = 0; i < TAM; i++)
    {
    ler_contato(&x[i]);
    }
    for (i = 0; i < TAM; i++)
    {
    mostrar_contato(&x[i]);
    }
    
    return 0;

}