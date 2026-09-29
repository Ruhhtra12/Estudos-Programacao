#include <stdio.h>
void FibonacciCalc(double Array[61]){
    int i;
    Array[0] = 0;
    Array[1] = 1;
    for ( i = 2; i < 61; i++)
    {
        Array[i] = (Array[i - 1] + Array[i - 2]);   
    }
}
int main()
{
    int N,i,S;
    double Fibonacci[61];
    scanf("%d",&N);
    FibonacciCalc(Fibonacci);
    for (i = 0; i < N; i++)
    {
        scanf("%d",&S);
        printf("Fib(%d) = %.0lf\n",S,Fibonacci[S]);
    }
    
    return 0;
}
