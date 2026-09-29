#include <stdio.h>
int main()
{
    int  P,i, l,Elements;
    char T;
    float sum,Average;
    sum = 0; Average = 0; Elements = 0;
    float Matriz[12][12];
    //scanf("%d",&P);
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
            
        for (i = 0; i < 12; i++)
            {
            for (l = 0; l < 12; l++)
            {   

                if(l > i)
                {
                sum += Matriz[i][l];
                }
            }
            
            }
        printf("%.1f\n",sum);
    }
    if (T == 'M')
        {
        for (i = 0; i < 12; i++)
            {
            for (l = 0; l < 12; l++)
            {   
                if(l > i)
                {
                Average += Matriz[i][l];
                Elements++;
                }
            }
        }
        Average = (Average / Elements);
        printf("%.1f\n",Average);
        }
    return 0;
}