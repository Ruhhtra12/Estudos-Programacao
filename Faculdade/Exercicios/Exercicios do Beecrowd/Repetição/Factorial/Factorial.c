#include <stdio.h>
int main(int argc, char const *argv[])
{
    int N,S,i;
    S = 1;
    scanf("%d",&N);
    for (i = 1; i <= N; i++)
    {
        S *= i;        
    }
    printf("%d\n",S);    
    return 0;
}
