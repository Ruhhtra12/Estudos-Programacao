#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N;
    int i;
    float quadrado;
    scanf("%d",&N);
    i = 0;
    for (i = 1; i <= N; i++)
    {
        if(i %2 == 0){
            quadrado = (i * i);
            printf("%d^2 = %.0f\n", i, quadrado);
        }
    }
    
    return 0;
}
