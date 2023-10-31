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

//RAIZ
//ESQUERDA
//DIREITA
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