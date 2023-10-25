#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

celula *enfileira(celula *f, int x) {
   celula *nova = malloc (sizeof (celula));
   nova->prox = f->prox;
   f->prox = nova;
   f->dado = x;
   return nova;
}