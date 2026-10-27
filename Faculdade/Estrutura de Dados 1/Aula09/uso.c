#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int Main(){
    Pilha *a, *b;
    a = Criar_Pilha();
    b = Criar_Pilha();

    empilhar(a,10);
    empilhar(b,10);

    printf("Pilha A.\n");
    Mostrar_Pilha(a);

    printf("Pilha B.\n");
    Mostrar_Pilha(b);
    return 0;
}