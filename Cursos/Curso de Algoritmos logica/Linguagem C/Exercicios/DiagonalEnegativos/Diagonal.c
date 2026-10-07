#include <stdio.h>
int main(int argc, char const *argv[])
{   
    int x,i,j;
    printf("DIgite a ordem da matriz: ");
    scanf("%d", &x);
    int matriz[x][x];
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            printf("Digite o valor do ponto [%d][%d] da matriz:",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("Matriz:");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        { 
            printf("Digite o valor do ponto [%d][%d] da matriz:",i,j);
            scanf("%d",&matriz[i][j]);
        }
        printf("|\n");
    }
    printf("Diagonal da matriz");
    for (i = 0; i < x; i++)
    {
        printf("%d ",matriz[i][i]);
    }
    return 0;
}