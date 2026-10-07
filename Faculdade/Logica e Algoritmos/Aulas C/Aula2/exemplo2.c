#include <stdio.h>
int main(){
    int num, resto;
    scanf("%d",&num);
    resto = num % 2;
    if (resto == 0)
    {
        printf("%d, par %d \n",num,resto);

    }
    else
    {
        printf("%d, Impar %d \n",num,resto);
    }
    
    return 0;
}