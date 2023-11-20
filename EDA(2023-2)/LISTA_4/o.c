#include <stdio.h>

int exch (int * a, int * b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int shell(int *v, int l, int r)
{
    int h = (r-l)/2;

    while(h >= 1)
    {
        for(int i=l+h;i<=r;i++)
            for(int j = i; j >= l + h && v[j] < v[j - h]; j-= h)
                exch(&v[j], &v[j - h]);
        h /= 2;
    }
}

int main ()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for(int i = 0;  i < n; i++)
    {
        scanf("%d", &v[i]);
    }
}