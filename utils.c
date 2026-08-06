#include "utils.h"

#include <stdlib.h>

#include "fila.h"

// Exibe o menu do usuário
// Entrada: nenhuma
// Retorno: nenhum
// Pré-condição: nenhuma
// Pós-condição: o menu de opções é exibido na tela
void menu(void) {
    Fila* f = cria_fila_vazia();
    TipoItem item;
    TipoItem* p;
    int res;
    int op = -1;

    do {
        printf("\nEscolha uma das opções:\n\n");
        printf("1. Inserir um elemento na fila\n");
        printf("2. Exibir os elementos da fila\n");
        printf("3. Desenfileirar um elemento\n");
        printf("4. Verificar se um elemento está na fila\n");
        printf("0. Encerrar programa\n");
        printf("\nOpção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o valor do elemento: ");
                scanf("%d", &item);
                enqueue(f, item);
                break;

            case 2:
                printf("Fila: ");
                imprimir(f);
                break;

            case 3:
                p = dequeue(f);
                if(p != NULL)
                printf("O elemento %d foi removido da fila.\n", *p);
                break;

            case 4:
                if(!vazia(f)) {
                    printf("Digite o valor do elemento: ");
                    scanf("%d", &item);
                    res = busca(f, item);
                    if(res == 1)
                        printf("O elemento pertence a fila.\n");
                    else
                        printf("Elemento não encontrado.\n");
                }
                break;

            case 0:
                printf("Saindo do programa...\n");
                break;

            default:
                printf("Opção inválida.\n");
                break;
        }

    } while(op != 0);

    liberar_fila(f);
    f = NULL;
}