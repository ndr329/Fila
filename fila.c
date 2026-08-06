#include "fila.h"

#include <stdlib.h>

// Cria uma fila vazia
// Entrada: nenhuma
// Retorno: ponteiro para um fila vazia
// Pré-condição: nenhuma
// Pós-condição: uma fila vazia é criada e inicializada
Fila* cria_fila_vazia(void) {
    Fila* f = (Fila*)malloc(sizeof(Fila));
    if(f == NULL) {
        printf("Erro na alocação de memória.\n");
        return NULL;
    }

    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

// Verifica se a fila está vazia
// Entrada: fila
// Retorno: 1 se a fila estiver vazia ou 0 caso contrário
// Pré-condição: fila criada
// Pós-condição: nenhuma
int vazia(Fila* f) {
    return (f->inicio == NULL);
}

// Enfileira um elemento no fila da fila
// Entrada: fila e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: fila criada
// Pós-condição: o elemento é inserido no final da fila
void enqueue(Fila* f, TipoItem info) {
    struct no* aux = (struct no*)malloc(sizeof(struct no));
    if(aux == NULL) {
        printf("Erro na alocação de memória.\n");
        return;
    }

    aux->info = info;
    aux->prox = NULL;

    if(vazia(f))
        f->inicio = aux;
    else
        f->fim->prox = aux;

    f->fim = aux;
}