#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void insertion_sort(int v[], int l, int r){
    int elem , i , j;
    for( i = l +1; i <= r ; i ++)
    {
        elem = v[i];
        for( j = i ; j > l && elem < v [j -1]; j--)
            v[j] = v[j -1];

        v[j] = elem ;
    }

}

int main()
{
    int i = 0;
    int v[50010];
    while(scanf("%d", &v[i]) != EOF)
        i++;

    insertion_sort(v, 0, i-1);

    for(int j = 0; j < i; j++)
        printf("%d ", v[j]);

    printf("\n");
}