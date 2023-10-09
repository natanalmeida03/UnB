#include <bits/stdc++.h>

using namespace std;

#define MAX 1000 + 10

bitset<MAX> found;

int dfs(int u, const vector<int> &ps)
{
    if (found[u])
        return u;

    found[u] = true;
    
    return dfs(ps[u], ps);
}

int main ()
{
    size_t n;
    cin >> n;
    vector<int> ps(n + 1);

    for (auto &e : ps)
        cin >> e;

    for (size_t i = 1, a; i < n; ++i)
    {
        found.reset();
        cout << dfs(a, ps);
    }
}