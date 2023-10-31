#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/*
SELECTION SORT -- O(N²) -- NÃO ESTÁVEL
1 - SELECIONAR MENOR NÚMERO
2 - POSICIONAR: TROQUE COM O PRIMEIRO ITEM (index 0)
3 - SELECIONAR O SEGUNDO MENOR NUMERO
4 - POSICIONAR: TROQUE COM O SEGUNDO ITEM (index 1)
5 - REPITA ATÉ O ULTIMO ITEM DA LISTA
*/
void selection_sort (int v[], int l, int r){
    int menor;
    for(int i = l; i<r; i++){
        menor = i;

        for(int j = i+1; j<=r; j++)
            if(v[j] < v[menor])
                menor = j;

        if(i != menor)
            exch(v[i], v[menor]);
    }
}

void selection_sort_rec (int v[], int l, int r){
    int primeiro = l, menor = l;
    for(int i = l+1; i<=r; i++){
        if(v[i] < v[menor])
            menor = i;

    if(primeiro != menor)
        exch(&v[i], &v[menor]);

    //return selection_sort_rec (v[], ++l, r);
    }
}

/*
BUBBLE SORT -- O(N²) -- ESTÁVEL
1 - DO INICIO, FLUTUAR ITEM
2 - AO ACHAR UMA "BOLHA" MAIOR, ESTA PASSA A FLUTUAR
3 - NO FIM, O MAIOR (OU MENOR) ESTA NO TOPO
4 - VOLTE PARA O ITEM 1
*/
void bubble_sort(int v[], int l, int r)
{
    bool swapped;
    for (int i = l; i < r - 1; i++) {
        swapped = false;
        for (int j = 0; j < r - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                exch(&v[j], &v[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
}
