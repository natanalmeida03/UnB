#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef long long ll;
void exch(ll* xp, ll* yp)
{
    ll t = *xp;
    *xp = *yp;
    *yp = t;
}

ll busca (ll x, ll n, ll *v) { 
    ll e = -1, d = n; 
    while (e < d-1) {  
        ll m = (e + d)/2;
        if (v[m] < x) e = m;
        else if(v[m] > x) d = m;
        else return 1;
   }
   return -1;
}


void shell_sort(ll *v,ll n)
{
    ll h = n/2;

    while(h >= 1)
    {
        for(ll i=h; i <= n; i++)
            for(ll j = i; j >= h && v[j] < v[j - h]; j-=h)
                exch(&v[j], &v[j-h]);

        h = h/2;
    }
}

int main (){
    ll N, t;
    scanf("%lld", &N);
    ll Nnum[N];


    for(int i = 0; i < N; i++)
        scanf("%lld", &Nnum[i]);
    

    shell_sort(Nnum, N);

    while(scanf("%lld", &t) != EOF)
        busca(t, N, Nnum) == -1 ? printf("Nao\n") : printf("Sim\n");
    
    return 0;
}