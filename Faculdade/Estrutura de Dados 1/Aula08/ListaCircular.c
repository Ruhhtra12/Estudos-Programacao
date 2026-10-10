#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct no
{
    int dado;
    struct no *prox;    
}No;


int main()
{
    int cara = 0;
    int coroa = 0;
    srand(time(NULL));
    for(int  i = 0; i < 9999999; i++)
    {
        if (rand() % 2 == 0)
        {
            cara++;
        }else
        {
            coroa++;
        }
        
    }
            return 0;
}
