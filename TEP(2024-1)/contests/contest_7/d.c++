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

int main() { _

    int n, m; cin >> n >> m;
    vector<int> values(n);
    for(int i = 0; i < n; ++i) cin >> values[i];
    vector<int> pree(n);
    pree[0] = values[0];
    for(int i = 1; i < n; ++i) pree[i] = values[i]+pree[i-1];

    int w = 0, count = 0;
    for(int i = 0; i < n; ++i) {
        if(pree[i] == m or abs(pree[i]-pree[i-1]) == m)
            count++;
    } 

    cout << count << endl;
    return 0;
}