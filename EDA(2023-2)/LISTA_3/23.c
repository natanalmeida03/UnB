#include <stdio.h>
#include <stdlib.h>

typedef struct no {
int dado;
struct no *esq, *dir;
} no;

#define N 15
no **pilha;
int t;

void empilhar (no *n) {
   pilha[t++] = n;
}

int pilhavazia (void) {
    return t == 0;
}

no *desempilhar (void) {
    if(pilhavazia() == 1)
        return NULL;
    return pilha[--t];
}

void em_ordem (no *raiz)
{
    pilha = malloc(sizeof(no*) * 15);
    t = 0;

    empilhar(raiz);

    while(1)
    {
        raiz = desempilhar();
        if(raiz != NULL) {
                empilhar(raiz);
                empilhar(raiz->esq);
        }
        else {
            if(pilhavazia() == 1) break;
            raiz = desempilhar();
            printf("%d ", raiz->dado);
            empilhar(raiz->dir);
        }
    }

    free(pilha);
}
