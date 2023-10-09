#include <stdio.h>
#include <string.h>

void solve (char s[81], int t, int g)
{
    if(t == g)
        return;

    if(s[t] == 'x')
        s[t] = 'y';

    printf("%c", s[t]);
    return solve(s, (t + 1), g);
}

int main ()
{
    int t, g;
    char s[81];

    scanf("%s", s);
    g = strlen(s);
    solve(s, 0, g);

    return 0;
}