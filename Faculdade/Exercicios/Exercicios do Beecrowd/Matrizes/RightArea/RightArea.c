#include <stdio.h>

int main()
{
    int P, i, l, Elements;
    char T;
    double sum, Average;

    sum = 0;
    Average = 0;
    Elements = 0;

    double Matriz[12][12];

    scanf(" %c", &T);

    for (i = 0; i < 12; i++)
    {
        for (l = 0; l < 12; l++)
        {
            scanf(" %lf", &Matriz[i][l]);
        }
    }

    if (T == 'S')
    {
        for (i = 0; i < 12; i++)
        {
            for (l = 0; l < 12; l++)
            {
                if ((i + l > 11) && (i < l))
                {
                    sum += Matriz[i][l];
                }
            }
        }

        printf("%.1lf\n", sum);
    }

    if (T == 'M')
    {
        for (i = 0; i < 12; i++)
        {
            for (l = 0; l < 12; l++)
            {
                if ((i + l > 11)&& (i < l))
                {
                    Average += Matriz[i][l];
                    Elements++;
                }
            }
        }

        Average = Average / Elements;
        printf("%.1lf\n", Average);
    }

    return 0;
}