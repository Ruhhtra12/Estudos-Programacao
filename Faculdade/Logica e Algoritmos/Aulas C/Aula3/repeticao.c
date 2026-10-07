#include <stdio.h>
int main(int argc, char const *argv[])
{
    int c;
    c = 0;
    while (c < 1000000000)
    {
        c++;//c + 1
        printf("%d ",c);
    }
    printf("\n");
    
    return 0;
}
