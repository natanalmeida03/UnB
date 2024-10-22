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
    ll n, x; cin >> n >> x;
    vector<ll> b(n);

    for(auto &c : b) cin >> c;

    ll ans = 0, va = 0;
    while(1){
        ll e = 0;
        for(int i = 0; i < n; i++){
            ll z = 0;
            e = min(e, x - b[i]);
        }

        if(e < 0){
            x -= e;
            x *= (-1);
            ans++;
        }else if(e == 0) break;
        else{
            
        }
    }

    cout << ans << endl;
    return 0;
}