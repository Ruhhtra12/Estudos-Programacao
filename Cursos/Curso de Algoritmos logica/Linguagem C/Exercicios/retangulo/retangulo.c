#include <math.h>
#include <stdio.h>
int main(int argc, char const *argv[])
{
    double base,altura,area,perimetro,diagonal;
    printf("Digite o valor da base do retangulo: ");
    scanf("%lf",&base);
    printf("Digite o valor da altura do retangulo: ");
    scanf("%lf",&altura);
    area = base * altura;
    perimetro = 2 * base + 2 * altura;
    diagonal = sqrt(pow(base,2.0) + pow(altura,2.0));
    printf("Area: %.2lf\n",area);
    printf("Perimetro: %.2lf\n",perimetro);
    printf("Diagonal: %.2lf\n",diagonal);

    return 0;
}
