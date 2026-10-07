#include <stdio.h>
int main()
{
    int i;
    double N;
    double array[100];
    scanf("%lf",&N);
    array[0] = N;
    printf("N[0] = %.4lf\n",array[0]);
    for (i = 1; i < 100; i++)
    {
        array[i] = (array[i -1] / 2.0);
        printf("N[%d] = %.4lf\n",i,array[i]);
    }
    return 0;
}