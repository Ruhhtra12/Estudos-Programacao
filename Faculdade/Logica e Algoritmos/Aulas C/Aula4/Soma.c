#include <stdio.h>
int tam;
void ler_vetor(int *v)
{
    int x;
    for(x=0;x < tam; x++){
        scanf("%d",&v[x]);
    }
}
void escrever_vetor(int *y){
    int x;
    for(x = 0; x < tam; x++){
        printf("%d ",y[x]);
    }
    printf("\n");
}
int somar_vetor(int * a, int * b, int * c)
{
    int x, soma = 0;
    for(x = 0; x < tam; x++)
    {
        c[x]= a[x] + b [x];
        soma += c[x];
    }
        return soma;
}
void inverter_vetor(int *v, int *i)
{
    int x;
    for (x = 0; x < tam; x++)
    {
        i[x]=v[tam-x-1];
    }
}
int main()
{
    scanf("%d",&tam);
    int a[tam],b[tam],c[tam];
    ler_vetor(a);
    escrever_vetor(a);
    ler_vetor(b);
    escrever_vetor(b);
    float media,soma;
    soma = somar_vetor(a,b,c);
    media = soma/tam;
    printf("Soma: %f Media: %.2f\n",soma,media);
    escrever_vetor(c);
    int i[tam];
    inverter_vetor(c,i);
    escrever_vetor(i);

    return 0;
}
