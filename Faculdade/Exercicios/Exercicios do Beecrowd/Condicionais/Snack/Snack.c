#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Code,units;
    float Total;
    scanf("%d %d",&Code,&units);
    switch (Code)
    {
    case 1:
        Total = 4.00 * units;
        break;
    case 2:
        Total = 4.50 * units;
        break;
    case 3:
        Total = 5.00 * units;
        break;
    case 4:
        Total = 2.00 * units;
        break;
    case 5:
        Total = 1.50 * units;
        break;
    
    default:
        break;
    }
    printf("Total: R$ %.2f\n",Total);
    return 0;
}
