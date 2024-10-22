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

void solve() {

}

int main() { _
    int n, q; cin >> n >> q;
    vi v(n);

    for(auto& a : v) 
        cin >> a;
    
    sort(all(v));

    for(int i = 0; i < q; i++){
        int a; cin >> a;
        auto lo = lower_bound(all(v), a);

        cout << v.end() - lo << endl;
    }
    return 0;
}