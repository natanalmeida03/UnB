#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

void enfileira (celula **f, int x) {
    celula *nova = malloc(sizeof(celula));
    nova->dado = x;
    
    if (*f == NULL) {
        nova->prox = nova;
        *f = nova;
    } else {
        nova->prox = (*f)->prox;
        (*f)->prox = nova;
        *f = nova;
    }
}

int desenfileira(celula *f, int *y) {
    if (!f) {
        return 0;
    }

    if(f->prox == f){
        *y = f->dado;
        free(f);
        f = NULL;
        return 0;
    }
    
    celula *aux = f->prox;
    *y = aux->dado;

    f->prox = aux->prox;
    free(aux);

    return 1;
}

// int main() {
//     celula *fila = NULL;
    
//     enfileira(&fila, 1);
//     enfileira(&fila, 2);
//     enfileira(&fila, 3);

//     int valor;
//     while (desenfileira(fila, &valor) == 1) {
//         printf("Desenfileirado: %d\n", valor);
//     }

//     return 0;
// }