#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
    int *dados;
    int N, p, u;
} fila;

fila *inicializa(int t)
{
    fila *f = malloc(sizeof(fila));
    f->N = t + 1;
    f->p = f->u = 0;
    f->dados = malloc(t * sizeof(int));
    return f;
}
int enfileira (fila *f, int x){
    if((f->u+1) % f->N == f->p) return 0;
    f->dados[f->u] = x;
    f->u = (f->u+1) % f->N;
    return 1;
}


int desenfileira(fila *f, int *y) {
    if(f->p == f->u)
        return 0;

    *y = f->dados[f->p];
    f->p = (f->p + 1) % f->N;

    return 1;
}