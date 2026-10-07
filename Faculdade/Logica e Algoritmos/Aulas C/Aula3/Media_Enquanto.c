#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c=0, n;
    float s = 0,m,valor;
    scanf("%d",&n);
    while (c < n)
    {
        scanf("%f",&valor);
        s += valor;
        c++;
    }
    m = s / c;
    printf("Média: %0.2f\n",m);
    return 0;
}
