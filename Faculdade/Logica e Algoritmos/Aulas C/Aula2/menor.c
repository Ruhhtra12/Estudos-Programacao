#include <stdio.h>
#include <string.h> 
int main()
{
 float num1,num2,num3;
 char textofinal[50];
    if ((num1 == num2) && (num2 == num3))
        {
            strcpy(textofinal,"Os tres valores sao iguais");
        }
    else if ((num1 == num2) || (num2 == num3))
    {
        strcpy(textofinal,"Dois valores sao iguais entre si");
    }
    else if (num1 > num2)
    {
        if (num2 < num3)
        {
            strcpy(textofinal,"O numero dois é menor");
            printf("o menor numéro é %f",num2);
        }
        else 
        {
            strcpy(textofinal,"O numero tres é menor");
            printf("o menor numéro é %f",num3);
        }
    }
    else if(num2 > num1){
        if (num1)
        {
            /* code */
        }
        
    }
    
    return 0;
}
