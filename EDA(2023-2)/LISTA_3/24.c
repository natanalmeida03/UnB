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
//ESQUERDA
//DIREITA
//RAIZ
void pos_ordem (no *raiz){
    
    pilha = malloc(sizeof(no *) * 15);
    t = 0;
    no *anterior = NULL;

    do {
        while (raiz != NULL) {
            empilhar(raiz);
            raiz = raiz->esq;
        }

        while (raiz == NULL && !pilhavazia()) {
            raiz = pilha[t - 1];

            if (raiz->dir == NULL || raiz->dir == anterior) {
                printf("%d ", raiz->dado);
                anterior = raiz;
                desempilhar();
                raiz = NULL;
            } else {
                raiz = raiz->dir;
            }
        }
    } while (!pilhavazia());


    free(pilha);
}