#include <stdio.h>
#include <stdlib.h>

void solve ()
{
    int t, m[61], res = 0,  n[61][2] = {0};
    char nt;

    while(scanf("%d %c", &t, &nt) != EOF)
    {
        if(nt == 'D')
            n[t][0]++;
        else
            n[t][1]++;
    }

    for(int i = 0; i <= 60; i++)
        res += n[i][0] < n[i][1] ? n[i][0] : n[i][1];

    printf("%d\n", res);

    return; 
}
int main()
{
    int T = 1;
    while(T--)
        solve();

    return 0;
}