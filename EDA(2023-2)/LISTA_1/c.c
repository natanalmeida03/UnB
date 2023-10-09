#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int Xm, Ym, Xr, Yr, res;

    scanf("%d %d %d %d", &Xm, &Ym, &Xr, &Yr);

    res = abs(Xm - Xr) + abs(Ym - Yr);

    printf("%d", res);

    return 0;
}