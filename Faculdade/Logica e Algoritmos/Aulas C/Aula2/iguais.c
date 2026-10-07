#include <stdio.h>
#include <string.h>
int main()
{
    float num1 , num2;
    char texto[50];
    scanf("%f %f",&num1, &num2);
    if(num1 == num2)
    {
        strcpy(texto,"Os números sao iguais");
    }
    else if (num1 > num2)
    {
        strcpy(texto,"O numero 1 e maior");
    }
    else {
        strcpy(texto,"O numero 2 e maior");
    }
    printf("%s\n",texto);

    return 0;
}
