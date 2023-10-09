#include <stdio.h>
#include <string.h>

void solve (char pa[502], int t)
{
    if(t < 0)
    {
        return;
        printf("\n");
    }

    printf("%c", pa[t]);
    return solve(pa, (t - 1));
}

int main ()
{
    int t = 1, g;
    char pa[502];

    scanf("%s", pa);
    g = strlen(pa) - 1;

    solve(pa,g);

    printf("\n");
    return 0;
}