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

// Cria uma fila vazia
// Entrada: nenhuma
// Retorno: ponteiro para um fila vazia
// Pré-condição: nenhuma
// Pós-condição: uma fila vazia é criada e inicializada
Fila* cria_fila_vazia(void);

// Verifica se a fila está vazia
// Entrada: fila
// Retorno: 1 se a fila estiver vazia ou 0 caso contrário
// Pré-condição: fila criada
// Pós-condição: nenhuma
int vazia(Fila* f);

// Enfileira um elemento no fila da fila
// Entrada: fila e elemento a ser inserido
// Retorno: nenhum
// Pré-condição: fila criada
// Pós-condição: o elemento é inserido no final da fila
void enqueue(Fila* f, TipoItem info);

// Exibe os elementos da fila
// Entrada: fila
// Retorno: nenhum
// Pré-condição: fila criada
// Pós-condição: os elementos da fila são exibidos na tela
void imprimir(Fila* f);

// Libera a memória ocupada pela fila
// Entrada: fila
// Retorno: nenhum
// Pré-condição: fila criada
// Pós-condição: toda a memória ocupada pela fila é liberada
void liberar_fila(Fila* f);

// Remove o primeiro elemento da fila
// Entrada: fila
// Retorno: ponteiro para o elemento removido ou NULL, caso a fila esteja vazia
// Pré-condição: fila criada
// Pós-condição: o primeiro elemento é removido da fila
TipoItem* dequeue(Fila* f);

// Verifica se um elemento pertence a fila
// Entrada: fila e elemento a ser procurado
// Retorno: 1 se elemento encontrado ou 0 caso contrário
// Pré-condição: fila criada
// Pós-condição: nenhuma
int busca(Fila* f, TipoItem x);

#endif /* fila_h */