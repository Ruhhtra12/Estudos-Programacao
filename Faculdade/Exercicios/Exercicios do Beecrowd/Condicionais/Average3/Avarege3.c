#include <stdio.h>
int main(int argc, char const *argv[])
{
    float N1,N2,N3,N4,N5,Average1,Average2;
    scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
    Average1 = ((N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1)/(2 + 3 + 4 + 1));
    printf("Media: %.1f\n",Average1);
    if (Average1 >= 7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if((Average1 < 7.0) && (Average1 >= 5.0))
    {
        printf("Aluno em exame.\n");
        scanf("%f", &N5);
        printf("Nota do exame: %.1f\n",N5);
        Average2 = ((N5 + Average1)/2);
        if (Average2 >= 5.0)
        {
        printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
            printf("Media final: %.1f\n",Average2);
        }
    else{
        printf("Aluno reprovado.\n");
    }
    
    return 0;
}


