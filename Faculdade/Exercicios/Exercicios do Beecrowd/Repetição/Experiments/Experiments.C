#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,S,R,C,i,Q,TOTAL;
    char A;
    N = 0, S = 0, R = 0, C = 0, i = 0, Q = 0, TOTAL = 0;
    A = ' ';
    scanf(" %d",&N);
    for (i = 0; i < N; i++)
    {
        scanf(" %d",&Q);
        scanf(" %c",&A);
        if (A == 'S')
        {
            S += Q;
        }else if (A == 'R')
        {
            R += Q;
        }
        else if (A == 'C')
        {
            C += Q;
        }
    }
    TOTAL = S + C + R;
    printf("Total: %d cobaias\n",TOTAL);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2f %\n",((C * 100.0) / TOTAL));
    printf("Percentual de ratos: %.2f %\n",((R * 100.0) / TOTAL));
    printf("Percentual de sapos: %.2f %\n",((S * 100.0) / TOTAL));
    return 0;
}
