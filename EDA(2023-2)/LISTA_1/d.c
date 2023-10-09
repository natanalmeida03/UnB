#include <stdio.h>

int main ()
{
    int A, B, C, X, Y, Z, res;

    scanf("%d %d %d", &A, &B, &C);
    scanf("%d %d %d", &X, &Y, &Z);

    res = (Y/B) * (X/A) * (Z/C);

    printf("%d", res);

    return 0;
}