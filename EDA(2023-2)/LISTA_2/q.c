#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3)
{
    celula *aux1 = l1->prox, *aux2 = l2->prox, *aux3 = l3;

    while(aux1 && aux2)
    {
        if(aux1->dado <= aux2->dado)
        {
            aux3->prox = aux1;
            aux1 = aux1->prox;
        }
        else
        {
            aux3->prox = aux2;
            aux2 = aux2->prox;
        }

        aux3 = aux3->prox;
    }

    while (aux1 != NULL) {
        aux3->prox = aux1;
        aux1 = aux1->prox;
        aux3 = aux3->prox;
    }

    while (aux2 != NULL) {
        aux3->prox = aux2;
        aux2 = aux2->prox;
        aux3 = aux3->prox;
    }

    aux3->prox = NULL;
}