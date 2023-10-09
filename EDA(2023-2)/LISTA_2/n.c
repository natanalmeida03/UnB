#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

void divide_lista (celula *l, celula *l1, celula *l2)
{
    celula *aux = l->prox, *aux1 = l1, *aux2 = l2;


    while(aux)
    {
        if(aux->dado%2==0)
        {
            aux2->prox = aux;
            aux2 = aux2->prox;
        }
        else
        {
            aux1->prox = aux;
            aux1 = aux1->prox;
        }
        
        aux = aux->prox;
    }

    aux1->prox = NULL;
    aux2->prox = NULL;
}

