#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{   
    double A,B,C,X1,X2,Delta; 
    scanf("%lf %lf %lf",&A,&B,&C);
    Delta = (pow(B,2.0)-4 * A *C);
    if ((A != 0) && (Delta >= 0))
    {
        X1= (-B + sqrt(Delta))/(2*A);
        X2= (-B - sqrt(Delta))/(2*A);
        printf("R1 = %.5lf\n", X1);
        printf("R2 = %.5lf\n", X2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }
    return 0;
}
