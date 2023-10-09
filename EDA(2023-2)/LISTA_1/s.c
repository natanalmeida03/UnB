#include <stdio.h>

int main ()
{
    int n, m, v, resh[105], resv[105], resfin = 0;

    for(int i = 0; i < 105; ++i)
    {
        resv[i] = 0;
        resh[i] = 0;
    }

    scanf("%d %d", &n, &m);

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            scanf("%d", &v);
            resh[i] += v;
            resv[j] += v;
            if(resv[j] > resfin)
                resfin = resv[j];
        }

        if(resh[i] > resfin)
            resfin = resh[i];
        
    }

    printf("%d\n", resfin);

    return 0;
}