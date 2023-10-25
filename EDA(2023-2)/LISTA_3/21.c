#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void empilha (celula *p, int x){
    celula *novo = malloc(sizeof(celula));
    
    novo->dado = x;
    novo->prox = p->prox;
    p->prox = novo;
}

int desempilha(celula *p, int *y) {
    celula *aux;

    if (!p->prox) return 0;
    
    aux = p->prox;
    *y = aux->dado;
    p->prox = aux->prox;
    
    free(aux);
    
    return 1;
}

