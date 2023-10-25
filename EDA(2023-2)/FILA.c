#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *proximo;
} no;

void inserir(no **fila, int num){
    no  *aux, *novo = malloc(sizeof(no));

    novo->valor = num;
    novo->proximo = NULL;

    if(!*fila)
        *fila = novo;
    else{
        aux = *fila;
        while(aux->proximo != NULL)
            aux = aux->proximo;

        aux->proximo = novo;
    }
}

void remover(no **fila){
    no *rem = NULL;

    if(*fila){
        rem = *fila;
        *fila = rem->proximo;
        free(rem);
    }
    else
        return;
}

void imprime(no *fila)
{
    printf("\nFILA: ");
    while(fila)
    {
        printf("%d ", fila->valor);
        fila = fila->proximo;
    }
    printf("\n");
}

int main (){

    no *fila = NULL;

    inserir(&fila, 10);
    inserir(&fila, 30);
    inserir(&fila, 23);
    inserir(&fila, 32);
    inserir(&fila, 320);
    inserir(&fila, 3210);
    inserir(&fila, 543);

    imprime(fila);
    remover(&fila);
    imprime(fila);


    return 0;
}