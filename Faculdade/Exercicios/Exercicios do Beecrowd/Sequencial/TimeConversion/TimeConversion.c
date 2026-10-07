#include <stdio.h>
int main(int argc, char const *argv[])
{
    int input, Hours,minutes,seconds;
    scanf("%d",&input);
    Hours = input / 3600;
    minutes = (input % 3600)/60;
    seconds = ((input % 3600) % 60) ;
    printf("%d:%d:%d\n",Hours,minutes,seconds);
    return 0;
}
