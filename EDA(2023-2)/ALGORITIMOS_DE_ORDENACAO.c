#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

/*
SELECTION SORT -- O(n²) -- NÃO ESTÁVEL
1 - SELECIONAR MENOR NÚMERO
2 - POSICIONAR: TROQUE COM O PRIMEIRO ITEM (index 0)
3 - SELECIONAR O SEGUNDO MENOR NUMERO
4 - POSICIONAR: TROQUE COM O SEGUNDO ITEM (index 1)
5 - REPITA PARA OS n ELEMENTOS DO VETOR
*/
void selection_sort (int v[], int l, int r){
    int menor;
    for(int i = l; i<r; i++){
        menor = i;

        for(int j = i+1; j<=r; j++)
            if(v[j] < v[menor])
                menor = j;

        if(i != menor)
            exch(&v[i], &v[menor]);
    }
}

void selection_sort_rec (int v[], int l, int r){
    int primeiro = l, menor = l;
    for(int i = l+1; i<=r; i++){
        if(v[i] < v[menor])
            menor = i;

    if(primeiro != menor)
        exch(&v[i], &v[menor]);

    return selection_sort_rec (v, ++l, r);
    }
}

/*
BUBBLE SORT -- O(n²) -- ESTÁVEL
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

/*
INSERTION SORT -- O(n²/2) -- ESTÁVEL
1 - INSERIR CADA ELEMENTO NA POSICAO CORRETA EM RELACAO AOS SEUS ANTECESSORES
2 - COMPARACAO ITEM A ITEM COM SEUS ANTECESSORES
*/

void insertion_sort(int v[], int l, int r){
    for(int i = l+1; i<=r; i++)
    {
        for(int j = i; j>l && v[j]<v[j-1]; j--)
        {
            exch(&v[j], &v[j-1]);
        }
    }
}

int main(int argc, char *argv[])
{
    int t;
    scanf("%d", &t);
    printf("%d ELEMENTOS\n", t);
    int *v = (int *)malloc(sizeof(int)*t);

    for(int i = 0; i < t; i++)
        scanf("%d", &v[i]);


    if (strcmp(argv[1], "selection") == 0)
        selection_sort(v, 0, t - 1);
    else if (strcmp(argv[1], "selection_rec") == 0)
        return 0;
        //selection_sort_rec(v, 0, t-1);
    else if (strcmp(argv[1], "bubble") == 0)
        bubble_sort(v, 0, t-1);
    else if (strcmp(argv[1], "insertion") == 0)
        insertion_sort(v, 0, t-1);
    else
    {
        printf("select a valid sort method\n");
        return 0;
    }

    //for(int j = 0; j < t; j++) printf("%d ", v[j]);

    return 0;
}