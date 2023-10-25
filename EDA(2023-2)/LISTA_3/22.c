#include <stdio.h>
#include <stdlib.h>

typedef struct {
int *v; // Vetor que contem os elementos da pilha
int N; // Tamanho de v
int topo; // Indicador do topo
} pilha;

void empilha (pilha *p, int x) {
    if (p->topo == p->N) {
        int novoT = p->N * 2;
        int *novo  = realloc (p->v,sizeof(int) * novoT);

        p->N = novoT;
        p->v = novo;
    }

    p->v[p->topo] = x;
    p->topo++;

    return;
}
int desempilha (pilha *p, int *y){
    if (!p->topo) return 0;
    
    p->topo--;
    *y = p->v[p->topo];

    return 1;
}