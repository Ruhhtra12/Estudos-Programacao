#include <stdio.h>
int main()
{
    int par[5];
    int impar[5];
    int i,E,O,N;
    E = 0;
    O = 0;
    for (i = 0; i < 15; i++)
    {
        scanf("%d",&N);
        if (N % 2 == 0)
        {
            par[E] = N;
            E++;            
            if (E == 5)
            {
                int IE;
                    for (IE = 0; IE < 5; IE++)
                    {
                        printf("par[%d] = %d\n",IE,par[IE]);
                    }
                E = 0;
            }
      }
        else{
            
            impar[O] = N;
            O++;            
            if (O == 5)
            {
                int IO;
                    for (IO = 0; IO < 5; IO++)
                    {
                        printf("impar[%d] = %d\n",IO,impar[IO]);
                    }
                O = 0;
            }
      }

    }
    for (i = 0; i < O; i++)
    {
         printf("impar[%d] = %d\n",i,impar[i]);
    }
    for (i = 0; i < E; i++)
    {
         printf("par[%d] = %d\n",i,par[i]);
    }
    
    
    return 0;
}
