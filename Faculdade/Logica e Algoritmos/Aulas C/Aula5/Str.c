#include <stdio.h>
#define T 100 
int main(int argc, char const *argv[])
{
    char nome [T];
    int i;
    for (i = 0; i < 5; i++)
    {
    fgets(nome, sizeof(nome), stdin);
    printf("Str: %s\n",nome);
    }
    return 0;
}
