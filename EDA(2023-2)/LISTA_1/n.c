#include <stdio.h>

int main ()
{
    int n;

    scanf("%d", &n);

    long long v[n + 3], k;


    for(int i = 0; i < n; ++i)
    {
        scanf("%lld", &v[i]);
    }

    scanf("%lld", &k);

    for(int i = 0; i < n; ++i)
    {
        if(v[i] == k)
        {
            printf("pertence");
            return 0;
        }
    }

    printf("nao pertence");
    return 0;
}