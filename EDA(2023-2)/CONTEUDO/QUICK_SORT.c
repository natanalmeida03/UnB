#include <stdio.h>
#include <stdlib.h>

int partition(int *v, int l, int r) {

    int p = v[r];
    int aux = l;

    for (int i = l; i < r; ++i) {
        if(v[i] <= p) {
            exch(&v[i],&v[aux]);
            aux++;
        }
    }

    exch(&v[aux],&v[r]);
    return aux;

}
void quick_sort(int *v, int l, int r)
{
    if(l >= r) return;


    int j = partition(v, l, r);
    quick_sort(v, l, j-1);
    quick_sort(v, j+1, r);
}