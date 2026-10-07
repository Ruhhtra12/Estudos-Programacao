#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double A,B,C;
    double Triangulo, Circulo, Trapezio, Quadrado, Retangulo;
    double PI = 3.14159;
    scanf("%lf %lf %lf", &A ,&B ,&C);
    Triangulo = (A * C)/2;
    Circulo = PI * pow(C , 2.0) ;
    Trapezio = ((A + B) * C)/2;
    Quadrado = pow(B, 2);
    Retangulo = A * B;
    printf("TRIANGULO: %.3lf\n", Triangulo);
    printf("CIRCULO: %.3lf\n", Circulo);
    printf("TRAPEZIO: %.3lf\n", Trapezio);
    printf("QUADRADO: %.3lf\n", Quadrado);
    printf("RETANGULO: %.3lf\n", Retangulo);
    return 0;
}
