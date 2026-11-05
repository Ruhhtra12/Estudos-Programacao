typedef struct pilha Pilha;

Pilha * criar_pilha();
void destruir_pilha(Pilha **pilha);
int empilhar(Pilha *pilha, int vlr);
int *topo(Pilha *pilha);
int desempilhar(Pilha *pilha);
void mostrar_pilha(Pilha *pilha);

