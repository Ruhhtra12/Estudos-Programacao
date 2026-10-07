#include <stdio.h>
int main()
{
    int code,units;
    float price,total;
    scanf("%d %d %f" ,&code, &units, &price);
    total = price * units;
    scanf("%d %d %f" ,&code, &units, &price);
    total =  total + (price * units);
    printf("VALOR A PAGAR: R$ %.2f \n", total);
    return 0;
}
