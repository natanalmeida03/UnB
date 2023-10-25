#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void enfileira (celula **f, int x) {
    celula *novo = (celula*) malloc(sizeof(celula));
    novo->dado = x;
    novo->prox = *f;
    *f = novo;
}

int desenfileira (celula *f, int *y) {
    if (f == NULL) {
        return 0;
    }
    celula *aux = f;
    while (aux->prox != f) {
        aux = aux->prox;
    }
    *y = aux->prox->dado;
    free(aux->prox);
    aux->prox = f;
    return 1;
}