#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    int M,N,I,j;
    printf("Quantas colunas terão sua matriz?");
    scanf("%d",&N);
    printf("Quantas linhas terão sua matriz?");
    scanf("%d",&M);
    float matriz[M][N]; 
    for (I = 0; I < M; I++)
    {
        for (j = 0; j < N; j++)
        {
            printf("Digite o valor da posição [%d]:[%d]",I,j);
            scanf( "%f",&matriz[I][j]);
        }
    
    }
    for (I = 0; I < M; I++)
    {
        for (j = 0; j < N ; j++)
        {
            printf("%f ",matriz[I][j]);
        }
        printf("\n");
    }
    return 0;
}
