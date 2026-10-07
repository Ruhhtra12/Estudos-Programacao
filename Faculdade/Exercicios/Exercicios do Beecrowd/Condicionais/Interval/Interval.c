#include <stdio.h>
int main()
{
    float Input;
    int x,Intervalx,Intervaly;
    scanf("%f",&Input);
   
    if (Input < 0.0 || Input > 100.0)
        printf("Fora de intervalo\n");
    else if (Input <= 25.0)
        printf("Intervalo [0,25]\n");
    else if (Input <= 50.0)
        printf("Intervalo (25,50]\n");
    else if (Input <= 75.0)
        printf("Intervalo (50,75]\n");
    else
        printf("Intervalo (75,100]\n");

    return 0;
}
