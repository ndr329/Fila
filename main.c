#include <stdio.h>

#include "fila.h"

int main(int argc, const char * argv[]) {
    Fila* f = cria_fila_vazia();

    enqueue(f, 2);
    enqueue(f, 5);
    enqueue(f, 9);
    enqueue(f, 15);

    imprimir(f);

    liberar_fila(f);
    f = NULL;

    printf("\n");
    return 0;
}