#include <stdio.h>

void swap (int *a, int *b)
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;
}