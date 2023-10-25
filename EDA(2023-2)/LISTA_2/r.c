#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
int dado;
struct celula *prox;
} celula;

int remove_depois(celula *p) {
    if (p == NULL || p->prox == NULL) {
        return 0;
    }
    celula *aux = p->prox;
    p->prox = aux->prox;
    free(aux);
    return 1;
}

void remove_elemento (celula *le, int x)
{
    celula *aux, *remover = NULL;

    aux = le;
    while(aux->prox && aux->prox->dado != x)
        aux = aux->prox;

    if(aux->prox)
    {
        remover = aux->prox;
        aux->prox = remover->prox;
        free(remover);
    }
        
}

void remove_todos_elementos (celula *le, int x)
{
    celula *ant = le;
    celula *aux = le->prox;
    while (aux) {
        if (aux->dado == x) {
            ant->prox = aux->prox;
            free(aux);
            aux = ant->prox;
        } else {
            ant = aux;
            aux = aux->prox;
        }
    }
     
}