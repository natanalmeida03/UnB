#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n = 1, m, p = 0;

    cin >> n >> m;
    
    ll j, k, l;
    vector<ll>a, h, b, c;

    for(ll i = 0; i < n; ++i)
    {
        cin >> l;
        h.emplace_back(l);
        c.emplace_back(1);
    }

    for(ll i = 0; i < m; ++i)
    {
        cin >> j >> k;
        a.emplace_back(j);
        b.emplace_back(k);  

        if(h[a[i] - 1] < h[b[i] - 1])
        {
            c[a[i] - 1] = 0;
        }
        else if(h[a[i] - 1] > h[b[i] - 1])
        {
            c[b[i] - 1] = 0;
        }
        else
        {
            c[a[i] - 1] = 0;
            c[b[i] - 1] = 0;
        }
    }

    for(auto i : c)
    {
        if(i == 1)
            p++;
    }

    cout << p << "\n";

    return 0;    
}