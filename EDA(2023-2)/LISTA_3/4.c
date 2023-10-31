#include <stdio.h>
#include <stdlib.h>

typedef struct fila {
int *dados;
int N, p, u;
} fila;

int enfileira (fila *f, int x){
    int novoT, j;
    
    if((f->u + 1) % f->N == f->p)
    {
        if((f->u + 1) % f->N == 0)
        {
            f->N *= 2;
            f->dados = (int*)realloc(f->dados, sizeof(int) * f->N);

            f->dados[f->u] = x;
            f->u = (f->u + 1) % f->N;

            return 1;
        }
        novoT = f->N * 2;
        f->dados = (int*)realloc(f->dados, sizeof(int) * novoT);

        if(f->N - f->p > f->u - 1)
        {
            j = f->N;
            for(int i = 0; i != f->u; i++)
            {
                f->dados[j] = f->dados[i];
                j++; 
            }
            f->u = j;
            f->dados[f->u++] = x;
            f->N = novoT;
            return 1;
        }else{
            int j = novoT - (f->N - f->p);
            for(int i = f->p; i != f->N-1; i++)
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

int main() {
    fila minhaFila;
    minhaFila.N = 10; 
    minhaFila.dados = (int*)malloc(sizeof(int) * minhaFila.N);
    minhaFila.p = 0;
    minhaFila.u = 0;
    
    for (int i = 1; i <= 20; i++) {
        enfileira(&minhaFila, i);
        printf("primeiro: %d e ultimo: %d\n",minhaFila.p, minhaFila.u);
    }


    
    free(minhaFila.dados);
    
    return 0;
}