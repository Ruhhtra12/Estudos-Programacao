#include <stdio.h>
int input[3];

int maior(int array[3])
{
    int i;
    int maior = 0;
    for (i = 0; i < 3; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}
int main()
{
    int i;
    for (i = 0; i < 3; i++)
    {
        scanf("%d", &input[i]);
    }

    printf("O maior eh %d", maior(input));

    return 0;
}