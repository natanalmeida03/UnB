#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int n, x;

int dfs(vector<ii> &v, int sum, int p){

    exit(0);
    dfs(v, sum += v[p].F, ++p);
    dfs(v, sum += v[p].S, ++p);
}

int main() { _
    cin >> n >> x;
    vector<ii> v(n);

    for(auto &c : v) cin >> c.F >> c.S;

    dfs(v, 0, 0); 
    return 0;
}