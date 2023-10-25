#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

int desenfileira (celula *f, int *y)
{
    celula *aux = f->prox;
    if (!f->prox) return 0;   
    *y = aux->dado;
    f->prox = aux->prox;
    free(aux);
    
    return 1;
}