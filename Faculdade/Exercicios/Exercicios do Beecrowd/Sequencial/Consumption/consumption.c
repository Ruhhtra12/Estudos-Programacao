#include <stdio.h>
int main(int argc, char const *argv[])
{
    int KM;
    float liters, Consumption;
    scanf("%d %f", &KM, &liters);
    Consumption = KM / liters;
    printf("%.3f km/l\n",Consumption);
    return 0;
} 
