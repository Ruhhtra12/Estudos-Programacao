#include <stdio.h>
int main(int argc, char const *argv[])
{
    int A,B,i,Troca,Sum;
    scanf("%d\n%d",&A, &B);
    Sum = 0;
    if (B < A)
    {
        Troca = B;
        B = A;
        A = Troca;
    }
    
    for (i = A; i <= B; i++)
    {
        if (i % 13 != 0)
        {
            Sum += i;
        }
        
    }
    printf("%d\n",Sum);
    
    return 0;
}
