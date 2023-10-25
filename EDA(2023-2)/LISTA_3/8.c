#include <stdio.h>
#include <stdlib.h>

typedef struct {
int *v;
int N;
int inicio, fim;
} fila;


int enfileira (fila *f, int x){
    if((f->fim+1) % f->N == f->inicio) return 0;
    f->v[f->fim] = x;
    f->fim = (f->fim+1) % f->N;
    return 1;
}


int desenfileira(fila *f, int *y) {
    if(f->inicio == f->fim)
        return 0;

    *y = f->v[f->inicio];
    f->inicio = (f->inicio + 1) % f->N;

    return 1;
}