#ifndef fila_h
#define fila_h

#include <stdio.h>

typedef int TipoItem;   // define o tipo de dado dos elementos da fila

// Estrutura do nó
struct no {
    TipoItem info;
    struct no* prox;
};

// Estrutura da fila
typedef struct {
    struct no* inicio;
    struct no* fim;
} Fila;



#endif /* fila_h */