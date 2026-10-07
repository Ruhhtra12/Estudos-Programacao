#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int A,B,C, MaiorAB, MaiorAC, MaiorBC, Maior;
    scanf("%d %d %d", &A, &B, &C);
    MaiorAB = (A + B + abs(A-B))/2;
    MaiorAC = (A + C + abs(A-C))/2;
    Maior = (MaiorAB + MaiorAC + abs(MaiorAB - MaiorAC ))/2;
    printf("%d eh o maior\n",Maior);
    return 0;
}