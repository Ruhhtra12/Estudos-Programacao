#include <stdio.h>
int main(int argc, char const *argv[])
{
    double C = 0;
    do
    {
        C++;
        printf("%f ", C);
    } while (C  < 100);
    return 0;
}