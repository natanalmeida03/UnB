#include <stdio.h>

int solve (int n)
{
    if(n >= 101)
        return n - 10;
    else
        return solve(solve(n + 11));
}

int main ()
{
    int n, m;
    scanf("%d", &n);

    while(n != 0)
    {
        m = solve(n);
        printf("f91(%d) = %d \n", n, m);
        scanf("%d", &n);
    }

    return 0;
}