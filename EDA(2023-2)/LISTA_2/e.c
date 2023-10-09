#include <stdio.h>
#include <string.h>

int solve (char *s, int g)
{
    int v;
    if(g < 0)
        return 0;

    v = s[g] - '0';
    return v + solve(s,(g - 1));
}

int main ()
{
    int g, res;
    char s[13];
    scanf("%s", s);
    g = strlen(s) - 1;
    res = solve(s, g);
    printf("%d \n", res);
}