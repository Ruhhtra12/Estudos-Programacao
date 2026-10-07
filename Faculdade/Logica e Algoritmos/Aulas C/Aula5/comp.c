#include <stdio.h>
#include <string.h>
#define T 100
int main(int argc, char const *argv[])
{
    char str1[T],str2[T],str3[T];
    scanf("\n%[^\n]",str1);   
    scanf("\n%[^\n]",str2);   
    strcpy(str3,str2);
    printf("%s", str1);
    printf("%s", str2);
    printf("%s", str3);
    int t1,t2,t3;
    t1 = strcmp(str2,str3);
    t2 = strcmp(str2,str1);
    t3 = strcmp(str1,str3);
    printf("T1: %d | T2: %d | T3: %d\n",t1,t2,t3 );
    return 0;
}