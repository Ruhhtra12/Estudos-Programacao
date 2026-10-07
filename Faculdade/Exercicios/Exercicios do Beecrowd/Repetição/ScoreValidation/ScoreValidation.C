#include <stdio.h>
int main()
{
    float Num1, Num2, Media;
    while (1)
    {
        scanf("%f",&Num1);
        if ((Num1 >= 0) && (Num1 <=10))
        {
            break;
        }
        else {
            printf("nota invalida\n");
        }
        
    }
    while (1)
    {
        scanf("%f",&Num2);
        if ((Num2 >= 0) && (Num2 <=10))
        {
            break;
        }
        else {
            printf("nota invalida\n");
        }
        
    }
    Media = (((float)Num1 + Num2)/2.0);
    printf("media = %.2f\n",Media);
    return 0;
}
