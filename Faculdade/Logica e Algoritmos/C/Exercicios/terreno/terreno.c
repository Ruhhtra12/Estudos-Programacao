#include <stdio.h>
int main(int argc, char const *argv[])
{
    float Largura,comprimento,ValorM,Valortotal, Area;
    printf("Digite a largura do imovel: ");
    scanf("%f",&Largura);
    printf("Digite o comprimento do imovel: ");
    scanf("%f",&comprimento);
    printf("Digite o valor do metro quadrado do imovel: ");
    scanf("%f",&ValorM);
    Area = Largura * comprimento;
    Valortotal = ValorM * comprimento;
    printf("Valor total do imovel: %2.2f",Valortotal);
    printf("Area total do imovel: %2.2f",Area);
    return 0;
}
