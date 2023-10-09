#include <stdio.h>

int main ()
{
    int L, D, K, P, res;

    scanf("%d %d", &L, &D);
    scanf("%d %d", &K, &P);

    res = ((L/D) * P) + (K * L);

    printf("%d", res);

    return 0;
}