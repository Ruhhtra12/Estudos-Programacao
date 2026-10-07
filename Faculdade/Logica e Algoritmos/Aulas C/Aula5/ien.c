#include <stdio.h>
#include <string.h>
#define t 100
int tamanho(char *s1){
    int x,c;
    for ( x = 0; s1[x] != '\0'; x++)
    {
        if (s1[x] == 'A' || s1[x] =='a')
        {
            c++;
        }
    }
    return c;
}
int main(int argc, char const *argv[])
{
    char str1[t], str2[t];
    scanf("\n%[^\n]",str1);
    printf("Contagem de A's: %d\n",tamanho(str1));
    printf("Str1: %s TAM: %ld\n",str1,strlen(str1));
    return 0;
}
