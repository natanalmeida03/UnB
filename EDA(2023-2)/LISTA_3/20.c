#include <stdio.h>
#include <stdlib.h>

typedef struct pilha {
    int *dados;
    int N, topo;
} pilha;

int empilha (pilha *p, int x){
    if (p->topo == p->N) {
        int novoT = p->N * 2;
        int *novo  = realloc (p->dados,sizeof(int) * novoT);

        p->N = novoT;
        p->dados = novo;
    }

    p->dados[p->topo] = x;
    p->topo++;

    return 1;
}