#include <stdio.h>
#include <string.h>
int main()
{
    int i,II, N;
    scanf("%d", &N);
    for (II = 0; II < N; II++)
    {
        char a[55], b[55];
        scanf(" %s %s", a, b);
        for (i = 0; (a[i] != '\0' || b[i] != '\0') ; i++) 
        {
            if (i < strlen(a))
            {
                printf("%c",a[i]);
            }
            if (i < strlen(b))
            {
                printf("%c",b[i]);
            }
        }
        printf("\n");
        }
    return 0;
}
