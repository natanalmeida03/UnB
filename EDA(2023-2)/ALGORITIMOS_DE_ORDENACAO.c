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
void merge(int *v, int l, int m, int r){
    int tam = r + 1 - l;

    int *aux = malloc(sizeof(int)*tam);

    int i = l;
    int j = m+1;
    int k = 0;

    while(i <=m && j <=r)
    {
        if (v[i] <= v[j])
            aux[k++] = v[i++];
        else
            aux[k++] = v[j++];
    }

    while (i <= m) aux[k++] = v[i++];
    while (j <= r) aux[k++] = v[j++];

    k = 0;

    for(i = l; i <= r; i++)
        v[i] = aux[k++];

    free(aux);
}

int partitionRSEDGEWICK( int *v , int l , int r ){

    int i = l-1;
    int j = r ;
    int pivot = v[r];

    while (i < j )
    {
        while( v[++i] < pivot );
        while( v[--j] >= pivot && j > l );
        if(i<j) 
            exch ( &v[i],&v[j]);
    }
    exch(&v[i],&v[r]) ;
    return i ;
}

//SELECTION SORT -- O(n²) -- NÃO ESTÁVEL
/*
1 - SELECIONAR MENOR NÚMERO
2 - POSICIONAR: TROQUE COM O PRIMEIRO ITEM (index 0)
3 - SELECIONAR O SEGUNDO MENOR NUMERO
4 - POSICIONAR: TROQUE COM O SEGUNDO ITEM (index 1)
5 - REPITA PARA OS n ELEMENTOS DO VETOR
*/
void selection_sort (int v[], int l, int r);
void selection_sort_rec (int v[], int l, int r);


//BUBBLE SORT -- O(n²) -- ESTÁVEL
/*
1 - DO INICIO, FLUTUAR ITEM
2 - AO ACHAR UMA "BOLHA" MAIOR, ESTA PASSA A FLUTUAR
3 - NO FIM, O MAIOR (OU MENOR) ESTA NO TOPO
4 - VOLTE PARA O ITEM 1
*/
void bubble_sort(int v[], int l, int r);

void shell_sort(int *v, int l, int r);
void shell_sort2(int *v,int n);


//INSERTION SORT -- O(n²/2) -- ESTÁVEL
/*
1 - INSERIR CADA ELEMENTO NA POSICAO CORRETA EM RELACAO AOS SEUS ANTECESSORES
2 - COMPARACAO ITEM A ITEM COM SEUS ANTECESSORES
*/
void insertion_sort(int v[], int l, int r);

//MERGE SORT -- O(nlogn) -- ESTÁVEL
/*
*/
void merge_sort(int *v, int l, int r);

//QUICK SORT -- 
/*
 * METODO DIVIDIR E CONQUISTAR
 * PARTICIONA O VETOR EM SUB-VETOR
 * ORDENA CADA SUB-VETOR INDEPENDENTEMENTE
*/
void quick_sort(int *v, int l, int r);
int main(int argc, char *argv[])
{
    int t;
    scanf("%d", &t);
    printf("%s-sort\n", argv[1]);
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
        bubble_sort(v, 0, t);
    else if (strcmp(argv[1], "insertion") == 0)
        insertion_sort(v, 0, t-1);
    else if (strcmp(argv[1], "merge") == 0)
        merge_sort(v, 0, t-1);
    else if (strcmp(argv[1], "shell") == 0)
        shell_sort(v, 0, t-1);
    else if (strcmp(argv[1], "shell2") == 0)
        shell_sort2(v, t-1);
    else if (strcmp(argv[1], "quick") == 0)
        quick_sort(v, 0, t-1);
    else
    {
        printf("select a valid sort method\n");
        return 0;
    }

    //for(int j = 0; j < t; j++) printf("%d ", v[j]);

    return 0;
}

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
void shell_sort(int *v,int l,int r)
{
    int h = 1;
    while ( h < (r - l +1) /3) h = 3*h+1;

    while (h >=1) {
        for(int i = l + h ; i <= r ; i ++){
            for(int j = i ; j >= l + h && v[j] < v[j - h]; j -= h ){
                exch ( &v[j] , &v[j-h]);
            }
        }
        h = h /3;
    }
}

void shell_sort2(int *v,int n)
{
    int h = n/2;

    while (h >=1) {
        for(int i = h ; i <= n; i++){
            for(int j = i ; j >= h && v[j] < v[j - h]; j -= h ){
                    exch (&v[j] , &v[j-h]);
            }
        }
        h = h/2;
    }
}
void insertion_sort(int v[], int l, int r){
    for(int i = l+1; i<=r; i++)
    {
        for(int j = i; j>l && v[j]<v[j-1]; j--)
        {
            exch(&v[j], &v[j-1]);
        }
    }
}
void merge_sort(int *v, int l, int r)
{
    if (l >= r) return;
    int m = (r+l)/2;

    merge_sort(v, l, m);
    merge_sort(v, m+1, r);
    merge(v, l, m, r);
}

void quick_sort(int *v, int l, int r){

    if(r <= l ) return ;

    int p = partitionRSEDGEWICK(v , l , r ); 

    quick_sort (v , l , p -1) ; 
    quick_sort (v , p +1 , r ) ; 
}