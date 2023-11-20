#include <stdio.h>
#include <stdlib.h>

void exch(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void shell_sort(int *v,int l,int r)
{
    int h = 1;
    while ( h < (r - l +1) /3) h = 3*h+1;

    while (h >=1) {
        for(int i = l + h ; i <= r ; i ++)
            for(int j = i ; j >= l + h && v[j] < v[j - h]; j -= h )
                exch ( &v[j] , &v[j-h]);

        h = h /3;
    }
}
int main()
{
    int t;
    scanf("%d", &t);

    int *v = (int *)malloc(sizeof(int)*t);

    for(int i = 0; i < t; i++)
        scanf("%d", &v[i]);

    shell_sort(v, 0, t-1);

    for(int j = 0; j < t; j++)
        printf("%d ", v[j]);

    printf("\n");
}