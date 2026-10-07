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
void somar_matriz(int a[][m],int b[][m],int c[][m]){
    int x,y;
    for (x = 0; x < n; x++)
    {
        for (y = 0; y < m; y++)
        {
            c[x][y] = a[x][y] + b[x][y];
        }
        
    }
    
}
int main(int argc, char const *argv[])
{   
    scanf("%d %d",&n,&m);
    int a[n][m], b[n][m], c[n][m];
    printf("Matriz A\n");
    ler_matriz(a);
    Escrever_matriz(a);
    printf("Matriz B\n");
    ler_matriz(b);
    Escrever_matriz(b);
    somar_matriz(a,b,c);
    Escrever_matriz(c);
    return 0;
}
