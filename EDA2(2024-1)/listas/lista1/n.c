#include <stdio.h>
#include <stdlib.h>

typedef struct celula {
     int dado;
     struct celula *prox;
} celula;

void mescla_listas (celula *l1, celula *l2, celula *l3){
     celula *auxl1, *auxl2, *auxl3;
     auxl1 = l1->prox;
     auxl2 = l2->prox;
     auxl3 = l3;

     while(auxl1 && auxl2)
     {
          if(auxl1->dado <= auxl2->dado)
          {
               auxl3->prox = auxl1;
               auxl1 = auxl1->prox;
          }
          else{
               auxl3->prox = auxl2;
               auxl2 = auxl2->prox;
          }

          auxl3 = auxl3->prox;
     }

     while(auxl1 != NULL){
          auxl3->prox = auxl1;
          auxl1 = auxl1->prox;
          auxl3 = auxl3->prox;
     }
     while(auxl2 != NULL){
          auxl3->prox = auxl2;
          auxl2 = auxl2->prox;
          auxl3 = auxl3->prox;
     }

     auxl3->prox = NULL;
     
}