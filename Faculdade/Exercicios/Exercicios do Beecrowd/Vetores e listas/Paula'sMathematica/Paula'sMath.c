#include <stdio.h>
#include <string.h>
int main()
{
    int i, N;
    scanf("%d", &N);
    char array[N][4];
    for (i = 0; i < N; i++)
    {
        scanf(" %s",&array[i]);
        if (array[i][0] == array[i][2])
        {
            int A = array[i][0] - '0';
            int B = array[i][2] - '0';
            int Operation;
            Operation = (A * B);
            printf("%d\n",Operation);    
        }
        else if (array[i][1] >= 'A' && array[i][1] <= 'Z')
        {
            int A = array[i][0] - '0';
            int B = array[i][2] - '0';
            int Operation;
            Operation = (B - A );
            printf("%d\n",Operation);    
        }
        else if (array[i][1] >= 'a' && array[i][1] <= 'z')
        {
            int A = array[i][0] - '0';
            int B = array[i][2] - '0';
            int Operation;
            Operation = (A + B);
            printf("%d\n",Operation);    
        }   
    }
    return 0;
}
