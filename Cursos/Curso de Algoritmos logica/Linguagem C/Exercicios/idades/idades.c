#include <stdio.h>
#include <string.h>
void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(int argc, char const *argv[])
{

    int x,i;
    float media;
    printf("Quantas pessoas irá digitar?");
    scanf("%d",&x);
    char Pessoas[x][50];
    int idades[x];
    for (i = 0; i < x; i++)
    {
        printf("Pessoa %d\n",i + 1);
        printf("QUal o nome dessa pessoa?");
        limparBuffer();
        fgets(Pessoas[i],sizeof(Pessoas),stdin);
        strcpy(Pessoas[i],strtok(Pessoas[i],"\n"));
        printf("QUal a idade dessa pessoa?");
        scanf("%d", &idades[i]);
        printf("\n");
    }
        media = 0;
    for (i = 0; i < x; i++)
    {   
        media = media + idades[i];
        printf("Nome: %s\n Idade: %d\n",Pessoas[i],idades[i]);
        printf("\n");
    }
    media = media / x;
    printf("A media de idades é %.1f\n",media);
    
    return 0;
}
