#include <stdio.h>
#include <string.h>
#define t 100
void Copiar(char s1, char s2 , char s3){
    int l;
    for (l = 0; l < sizeof(s1); l++)
    {
        s2[l] = s1[l]; 
        s3[l] = s1[l];
    }
}
int main(int argc, char const *argv[])
{
    char str1[t],str2[t],str3[t];
    int i;
    fgets(str1, sizeof(str1), stdin);
    
    printf("str1: %s\n",str1);
    printf("str2: %s\n",str2);
    return 0;
}
