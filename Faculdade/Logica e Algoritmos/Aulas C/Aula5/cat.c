#include <stdio.h>
#include <string.h>
#define T 100
void cat(char *s1, char *s2){
    int x, y;
    for (x = 0; s1[x] != '\00'; x++)
    {
    for (y = 0; s1[y] != '\0'; y++)
    {
        s2[x] = s1[y];
        x++;
    }
    }
    
}
int main(int argc, char const *argv[])
{
    char str1[T],str2[T],str3[T];

    scanf("\n%[^\n]",str1);
    scanf("\n%[^\n]",str2);
    strcpy(str3,str2);
    printf("Str1: %s\n", str1);
    printf("Str2: %s\n",str2);
    cat(str2 ,  " ");
    cat(str2 ,  str1);
    printf("Str2-2: %s\n",str2);
    return 0;
}
