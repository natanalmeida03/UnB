#include <stdlib.h>
#include <stdio.h>

typedef struct Node {
    int v;
    struct node *esq;
    struct node *dir;
} Node;

Node *new(int v) {

    Node *novo = malloc(sizeof(Node));
    novo->v = v;
    novo->esq = NULL;
    novo->dir = NULL;

    return novo;
}

void add(Node *h, int v) {

   if (v < h->v ) {
        if (h->esq == NULL)
            h->esq = new(v);
        else 
            add(h->esq, v);
   } else {
        if (h->dir == NULL)
            h->dir = new(v);
        else
            add(h->dir, v);
   }

}