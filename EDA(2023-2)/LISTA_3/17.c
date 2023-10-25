#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desempilha(celula *p, int *y) {
    celula *aux = p->prox;
    if (!p->prox) return 0;   
    *y = aux->dado;
    p->prox = aux->prox;
    free(aux);
    
    return 1;
}