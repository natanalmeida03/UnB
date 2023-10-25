#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

int enfileira (fila *f, int x){
    if(f->u == f->N)
    {
        f->N *= 2;
        f->dados = realloc(f->dados, sizeof(int) * f->N);
    }
    f->dados[f->u++] = x;
    return 1;
}