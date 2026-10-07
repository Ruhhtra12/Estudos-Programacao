#include <stdio.h>
int main(int argc, char const *argv[])
{
    float consumption = 12.0;
    int  Time, AVGSpeed;
    float liters;
    scanf("%d %d", &Time, &AVGSpeed);
    liters = (Time * AVGSpeed)/consumption ;
    printf("%.3f\n",liters);
    return 0;
}
