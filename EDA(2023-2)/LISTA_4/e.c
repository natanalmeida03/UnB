#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int i = 1, j = 1;

void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void ordena (int *v, int n){
    if(i >= n)  return;

    if(v[j] < v[j-1]){
        exch(&v[j], &v[j-1]);
        if(j == 1)
        {
            i++;
            j = i;
        }
        else
            j--;

        ordena(v, n);
    }
    else{
        ++i;
        j = i;
        ordena(v, n);
    }
}
