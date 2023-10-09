#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, m, a, b;

    cin >> n >> m;

    bool g[n+2];
    memset(g, false, sizeof(g));

    for (int i = 1; i <= m; ++i)
    {
        cin >> a >> b;

        if (a == 1)
        {
            if(g[b])
            {
                cout << "POSSIBLE" << "\n";
                return 0;
            }
            g[b] = true;          
        }
        else if (b == n)
        {
            if(g[a])
            {
                cout << "POSSIBLE" << "\n";
                return 0;
            }
            g[a] = true;
        }
    }

    cout << "IMPOSSIBLE" << "\n";
    return 0;
}