#include <stdio.h>
struct endereco{
    char cep[20];
    char rua[50];
    int numero;
    char cidade[50];
};
void mostrar_endereco(struct endereco *x)
{
    printf("Rua: %s",x->rua);
    printf("Cidade: %s",x->cidade);
    printf("Numero: %s",x->numero);
    printf("CEP: %s",x->cep);

};
void ler_endereco(struct endereco *x)
{
    printf("Rua: ");
    fgets(x->rua,50,stdin);
    printf("Cidade: ");
    fgets(x->cidade,50,stdin);
    printf("Cep: ");
    fgets(x->cep,50,stdin);
    printf("Numero: ");
    fgets(x->numero,10,stdin);

}
int main(){
    struct endereco x;
    int i;
    ler_endereco(&x);
    mostrar_endereco(&x);
    return 0;

}