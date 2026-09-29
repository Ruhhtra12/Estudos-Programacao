#include <stdio.h>
int main()
{
    int i;
    double N[100];
    for (i = 0; i < 100; i++)
    {
        scanf("%lf",&N[i]);
    }
    for (i = 0; i < 100; i++)
    {
        if (N[i] <= 10)
        {
            printf("A[%d] = %.1lf\n",i,N[i]);
        }
    } 
    return 0;
}
