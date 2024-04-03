#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
    int dado;  
    struct celula *prox;
} celula;

celula *busca (celula *le, int x)
{
     celula *aux, *no = NULL;
     aux = le;

     while(aux && aux->dado != x)
          aux = aux->prox;

     if(aux)
          no = aux;

     return no;
}

celula *busca_rec (celula *le, int x)
{
     celula *aux = NULL;
     aux = le;

     if(!aux)
          return aux;

     if(aux->dado != x){    
          aux = aux->prox;
          busca_rec(aux, x);
     }else
          return aux;
}
