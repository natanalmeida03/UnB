#include <stdio.h>
#include <string.h>

int solve (char *s, int t)
{
    if(strlen(s) < 3) return 0;
    if(s[t] == '\0') return 0;
    if(s[t] == s[t+2]) return 1 + solve(s, t + 1);
    else return 0 + solve(s, t+1);
}
int main ()
{
    char s[205];
    scanf("%s", s);
    printf("%d \n", solve(s, 0));
    return 0;
}