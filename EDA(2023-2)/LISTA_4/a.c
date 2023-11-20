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

int main()
{
    int t = 0, i = 0;
    int v[1001];
    while(scanf("%d", &t) != EOF)
        v[i++] = t;

    bubble_sort(v, 0, i);

    for(int j = 0; j < i; j++)
        printf("%d ", v[j]);
}