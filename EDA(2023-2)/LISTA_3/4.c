#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

int enfileira (fila *f, int x){
    int novoT;
    if((f->u + 1) % f->N ==  f->p)
    {
        novoT = f->N * 2;
        f->dados = realloc(f->dados, sizeof(int) * novoT);

        if(f->N - f->p > f->u - 1)
        {
            int j = f->N;
            for(int i = 0; i != f->u; i++)
            {
                f->dados[j] = f->dados[i];
                j++; 
            }
            f->dados[j] = x;
            f->u = j + 1;
            f->N = novoT;
            return 1;
        }else{
            int j = novoT - (f->N - f->p);
            for(int i = f->p; i != f->N - 1; i++)
            {
                f->dados[j] = f->dados[i];
                j++;
            }
            f->dados[f->u++] = x;
            f->p = novoT - (f->N - f->p);
            f->N = novoT;
            return 1;
        }
    }

    f->dados[f->u] = x;
    f->u = (f->u + 1) % f->N;

    return 1;
}