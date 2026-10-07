#include <stdio.h>
#include <math.h>
int main()
{
    double pi = 3.14159;
    double Radius, Volume;
    scanf("%lf",&Radius);
    Volume = (4.0/3.0) * pi * pow(Radius,3);
    printf("VOLUME = %.3lf\n", Volume);
    return 0;
}   
