#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;


void imprime (celula *le)
{
    celula *aux = le->prox;
    while(aux)
    {
        printf("%d -> ", aux->dado);
        aux = aux->prox;
    }
    printf("NULL\n");
}
void imprime_rec (celula *le)
{
    if (le->prox == NULL) {
        printf("NULL\n");
        return;
    }

    printf("%d", le->prox->dado);

    if (le->prox->prox != NULL) {
        printf(" -> ");
        imprime_rec(le->prox);
    } else {
        printf(" -> NULL\n");
    }
}
