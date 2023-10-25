#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void pre_ordem (no *raiz) {
    
    pilha = malloc(sizeof(no *) * 15);
    t = 0;
    
    empilhar(raiz);
    while(pilhavazia() != 1) {
        raiz = desempilhar();
        if (raiz != NULL) {
            empilhar(raiz->dir);
            empilhar(raiz->esq);
            printf("%d ", raiz->dado);
        }
    }
    free(pilha);
}

// int main() {
//     no *raiz = malloc(sizeof(no));

//     raiz->dado = 2;
//     raiz->esq = malloc(sizeof(no));
//     raiz->esq->dado = 5;
    
//     raiz->esq->esq = malloc(sizeof(no));
//     raiz->esq->esq->dado = 3;
    
//     raiz->esq->dir = malloc(sizeof(no));
//     raiz->esq->dir->dado = 8;

//     raiz->esq->dir->esq = malloc(sizeof(no));
//     raiz->esq->dir->esq->dado = 4;
    
//     raiz->dir =  malloc(sizeof(no));
//     raiz->dir->dado = 7;
    
//     raiz->dir->esq = malloc(sizeof(no));
//     raiz->dir->esq->dado = 1;
    
//     raiz->dir->esq->dir = malloc(sizeof(no));
//     raiz->dir->esq->dir->dado = 9;
    
//     raiz->dir->dir = malloc(sizeof(no));
//     raiz->dir->dir->dado = 6;


    
//     pre_ordem(raiz);
//     return 0;

// }