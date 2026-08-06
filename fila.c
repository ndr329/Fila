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