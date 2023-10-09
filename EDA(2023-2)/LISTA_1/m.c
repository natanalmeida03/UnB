#include <stdio.h>

int main ()
{
    int n, t = 0, res = 0;

    scanf("%d", &n);

    long long v[n + 1];

    for(int i = 0; i < n; ++i)
    {
        scanf("%lld", &v[i]);

        if(i > 0)
        {
            if(t > v[i] )
            {
                res = i;
                t = v[i];
            }
        }
        else
            t = v[i];
    }

    printf("%d", res);
}