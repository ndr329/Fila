#include <stdio.h>

#include "fila.h"

int main(int argc, const char * argv[]) {
    Fila* f = cria_fila_vazia();

    enqueue(f, 2);
    enqueue(f, 5);
    enqueue(f, 9);
    enqueue(f, 15);

    imprimir(f);

    TipoItem* p = dequeue(f);
    if(p != NULL)
        printf("O elemento %d foi removido da fila.\n", *p);

    imprimir(f);

    int res;
    if(!vazia(f)) {
        res = busca(f, 2);

        if(res == 1)
            printf("O elemento pertence a fila.\n");
        else
            printf("Elemento não encontrado.\n");
    }

    liberar_fila(f);
    f = NULL;

    printf("\n");
    return 0;
}