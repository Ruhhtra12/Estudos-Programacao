#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,i,posicao,maior;
    N = 0;
    for (i = 1; i <= 100; i++)
    {
        scanf("%d",&N);
        if (N > maior)
        {
            posicao = i;
            maior = N;
        }
        
    }
    printf("%d\n%d\n",maior,posicao);
    
    return 0;
}
