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

ll f(int x){
    return ((x*x) + 2*x + 3);
}
int main() { _
    int t; cin >> t;

    ll ans = f(f(f(t)+t) + f(f(t)));

    cout << ans << endl;
    return 0;
}