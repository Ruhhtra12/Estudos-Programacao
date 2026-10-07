#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double X1,Y1,X2,Y2, Distance;
    scanf("%lf %lf",&X1,&Y1);
    scanf("%lf %lf",&X2,&Y2);
    Distance = sqrt(pow((X2 - X1),2)+pow((Y2 - Y1),2));
    printf("%.4lf\n",Distance);
    return 0;
}
