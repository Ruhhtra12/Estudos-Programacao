#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, x;
    float peso, bg=0, bm = 1500;
    scanf("%d",&n);
    for (x = 0; x < n; x++)
    {
        scanf("%f", &peso);
        if (peso > bg){
            bg = peso;
        }
        if (peso < bm){
            bm = peso;
        }
    }
    printf("Gordo : %0.1f\nMagro: %0.1f\n",bg,bm);
    return 0;
}
