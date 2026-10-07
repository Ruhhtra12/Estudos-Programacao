#include <stdio.h>
#include <string.h>
int ledCount(char String[100]){
    int i, Leds, X;
    Leds = 0;
    i = 0;
    while (1)
    {
        if (String[i] == '\0')
        {
            break;
        }
        X = String[i] - '0';
        switch (X)
        {
        case 1:
            Leds += 2;
            break;
        case 2:
            Leds += 5;
            break;
        case 3:
            Leds += 5;
            break;
        case 4:
            Leds += 4;
            break;
        case 5:
            Leds += 5;
            break;
        case 6:
            Leds += 6;
            break;
        case 7:
            Leds += 3;
            break;
        case 8:
            Leds += 7;
            break;
        case 9:
            Leds += 6;
            break;
        case 0:
            Leds += 6;
            break;
        default:
            break;
        }
    i++;
    }
    return Leds; 
}
int main()
{
    int N, LedSum, i;
    char X[100];
    scanf("%d",&N);
    for (i = 0; i < N; i++){
        scanf("%s",X);
        LedSum = ledCount(X);
        printf("%d leds\n",LedSum);   
    }
    return 0;
}
