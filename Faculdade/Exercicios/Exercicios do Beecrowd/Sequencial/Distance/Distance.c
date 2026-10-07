#include <stdio.h>
int main(int argc, char const *argv[])
{
    int carX = 60;
    int carY = 90;
    float Distance, time;
    scanf("%f", &Distance);
    time = ((Distance) / (carY - carX)) * 60;
    printf("%.0f minutos\n", time);
    return 0;
}
