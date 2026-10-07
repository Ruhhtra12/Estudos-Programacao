#include <stdio.h>
int main(int argc, char const *argv[])
{
    float nota1,nota2,media;
    printf("Digite a primeira nota: ");
    scanf("%f",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota2);
    media = (nota1 + nota2);
    printf("Nota Final: %.1f\n", media);
    if (media < 60.0)
    {
        printf("REPROVADO\n");
    }
    return 0;
}