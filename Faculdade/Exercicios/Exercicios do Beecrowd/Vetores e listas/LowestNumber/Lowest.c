#include <stdio.h>
int main()
{   
    int N, lowest, position, i;
    scanf("%d",&N);
    int Array[N];
    lowest = 99999;
    position = 0;
    for (i = 0; i < N; i++)
    {
        scanf("%d",&Array[i]);
    }
    for (i = 0; i < N; i++) 
    {
        if (Array[i] < lowest)
        {
            lowest = Array[i];
            position = i;
        }
        
    }
    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",position);

    
    return 0;
}
