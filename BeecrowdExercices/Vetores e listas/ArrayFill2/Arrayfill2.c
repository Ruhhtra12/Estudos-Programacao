#include <stdio.h>
int main()
{
    int i,T,V;
    int N[1000];
    scanf("%d",&T);
    V = 0;
    for (i = 0; i < 1000; i++)
    {
        N[i] = V;
        printf("N[%d] = %d\n",i,N[i]);
        if (V >= T-1)
        {
            V = 0;
        }
        else{
            V++;
        }
        
    }
    
    return 0;
}
