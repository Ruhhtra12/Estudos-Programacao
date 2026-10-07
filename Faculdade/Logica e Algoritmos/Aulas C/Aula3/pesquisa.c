#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c=0,voto;
    float media, soma = 0;
    do
    {
        scanf("%d",&voto);
        if (voto == 0)
        {
            break;
        }
        soma +=  voto;
        c++;

    } while(1);
    media = soma / c;
    printf("Media: %0.1f\n",media);
    return 0;
}
