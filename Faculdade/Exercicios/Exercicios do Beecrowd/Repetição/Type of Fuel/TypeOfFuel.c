#include <stdio.h>
int main(int argc, char const *argv[])
{
    int Gas,Alc,Dies,N;
    Gas = 0;
    Alc = 0;
    Dies = 0;
    while (1)
    {
        scanf("%d",&N);
        if (N == 4)
        {
            break;
        }
        if ((N < 4) && (N >= 1))
        {
            
            switch (N)
            {
            case 1:
                Alc += 1;
                break;
            case 2:
                Gas += 1;
                break;
            case 3:
                Dies += 1;
                break;
            default:
                break;
            }
        }
        
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",Alc);
    printf("Gasolina: %d\n",Gas);
    printf("Diesel: %d\n",Dies);
    return 0;
}
