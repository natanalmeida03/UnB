#include <stdio.h>
#include <stdlib.h>

//considerando vetor ordenado
int busca (int x, int n, int *v) {
    int esq = -1, dir = n;

    while (esq < (dir - 1)) {  
        int med = (esq + dir)/2;

        if (v[med] < x) 
            esq = med;
        else if(v[med] > x) 
            dir = med;
        else return 1;
    }
    return -1;
}