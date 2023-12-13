#include <stdio.h>
#include <stdlib.h>

typedef struct fila
{
    int v;
    struct fila *prox;
} Fila;

Fila *inicializa()
{
    Fila *f = (Fila *)malloc(sizeof(Fila));
    f->prox = NULL;
    return f;
}

void insere(Fila *f, int v)
{
    Fila *nova = malloc(sizeof(Fila));

    nova->v = v;
    nova->prox = NULL;
    
    if(!f)
    {
        nova->prox = f;
        f = nova;
    }
    else
    {
        Fila *aux = f;
        while(aux->prox)
            aux = aux->prox;

        aux->prox = nova;
    }
}

int remover(Fila *f)
{
    Fila *lixo = f->prox;
    
    if (f->prox == NULL)
        return -1;

    int v = lixo->v;
    f->prox = lixo->prox;

    free(lixo);
    return v;
}

