#include <stdio.h>
#include <string.h>
int main()
{
    int N,i;
    int array[10];
    scanf("%d",&N);
    array[0] = N;
    printf("N[0] = %d\n", array[0]);
    for (i = 1; i < 10; i++)
    {
        array[i] = (array[i - 1] * 2);
        printf("N[%d] = %d\n",i, array[i]);
    }
    return 0;
}
