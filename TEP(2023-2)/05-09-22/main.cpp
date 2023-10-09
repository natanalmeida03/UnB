#include <bits/stdc++.h>

using namespace std;

int main ()
{
    int n;

    cin >> n;

    vector<int> fs(n + 1);

    for(int u = 1; u <= n; ++u)
        cin >> fs[u];

    for(int u = 1; u <= n; ++u)
        if(fs[fs[fs[u]]] == u)
        {
            cout << "YES\n";
            return 0;
        }

    cout << "NO\n";

    return 0;
}