#include <stdio.h>
int n,m;

void ler_matriz(int mt[][m]){
    int x,y;
    for ( x = 0; x < n; x++)
    {
        for ( y= 0; y < m; y++)
        {
           scanf("%d",&mt[x][y]);
        }
        
    }
    
}
void Escrever_matriz(int mt[][m]){
    int x,y;
    for  (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
        {
            printf("%2d ", mt[x][y]);
        }
        printf("\n");
    }
}
int dados_matriz(int mt[][m]){
    int x,y,soma = 0;
    for(x = n; x > 0 ; x--)
    {for (y = m; y > 0; y--){
        if(x == y){
            printf("%2d ",mt[x][y]);
            soma += mt[x][y];
        }
        else{
            printf("  ");
        }
    }
    printf("\n");}
    return soma;
}
int main()
{  
    scanf("%d %d",&n, &m);
    int matriz[n][m];
    ler_matriz(matriz);
    Escrever_matriz(matriz);
    printf("Soma: %d\n", dados_matriz(matriz));
    return 0;
}
