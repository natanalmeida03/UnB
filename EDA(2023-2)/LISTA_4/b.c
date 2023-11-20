#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
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

int main()
{
    int t = 0, i = 0;
    int v[1001];
    while(scanf("%d", &t) != EOF)
        v[i++] = t;

    selection_sort(v, 0, i-1);

    for(int j = 0; j < i; j++)
        printf("%d ", v[j]);
}