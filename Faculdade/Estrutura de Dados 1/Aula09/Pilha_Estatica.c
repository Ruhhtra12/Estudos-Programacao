#include <stdio.h>
#include <stdlib.h>
#include "Pilha.h"

int empilhar(Pilha *pilha, int vlr);
int *topo(Pilha *pilha);
int desempilhar(Pilha *pilha);
Pilha *Criar_Pilha();

void Destruir_pilha(Pilha **pilha);
void Mostrar_Pilha(Pilha *pilha);
