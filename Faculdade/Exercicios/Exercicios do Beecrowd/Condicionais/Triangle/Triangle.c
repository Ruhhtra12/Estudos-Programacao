#include <stdio.h>
int main(int argc, char const *argv[])
{
    float A,B,C,Perimeter,Area;
    scanf("%f %f %f",&A, &B, &C);
    if ((A + B > C )&&(A + C > B) &&(B + C > A))
    {
        Perimeter = (A + B + C);
        printf("Perimeter = %.1f",Perimeter);
    }
    else{
        Area = ((A + B)* C)/2;
        printf("Area = %.1f",Area);
    }   
    return 0;
}