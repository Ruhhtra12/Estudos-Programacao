#include <stdio.h>
int main(int argc, char const *argv[])
{
    int  P,i, l;
    char T;
    float sum,Average;
    sum = 0; Average = 0;
    float Matriz[12][12];
    scanf("%d",&P);
    scanf(" %c",&T);
    for (i = 0; i < 12; i++)
    {
    for (l = 0; l < 12; l++)
    {
        scanf(" %f",&Matriz[i][l]);    
    }
    }
    if (T == 'S')
    {
        for (l = 0; l < 12; l++)
        {
            sum += Matriz[P][l];
        }
    printf("%.1f\n",sum);
    }
    if (T == 'M')
    {
        for (l = 0; l < 12; l++)
        {
            Average += Matriz[P][l];
            
        }
    Average = (Average / 12);
    printf("%.1f\n",Average);
    }
    

    return 0;
}
