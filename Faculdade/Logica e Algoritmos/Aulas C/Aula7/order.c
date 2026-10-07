#include <stdio.h>
int n;
void ler_vetor(int *v){
    int x;
    for (x = 0; x < n; x++)
        scanf("%d",&v[x]);
}
void escrever_vetor(int *v){
    int x;
    for (x = 0; x < n; x++)
    {
        printf("%d ",v[x]);
    }
    printf("\n");
}
void ordenar_vetor(int *v){
    int x,y,menor,aux;
    for (y = 0; y < n; y++)
    {
        menor = y;
        for (x = y+1; x < n; x++)
        {
            if (v[x] < v[menor])
            {
                menor = x;
            }
        }
        aux = v[menor];
        v[menor] = v[y];
        v[y] = aux;    
    }
    
}
int main()
{
    scanf("%d",&n);
    int vetor[n];     
    ler_vetor(vetor);
    escrever_vetor(vetor);
    return 0;
}
