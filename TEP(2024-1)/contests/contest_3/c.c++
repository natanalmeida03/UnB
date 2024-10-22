#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pii pair<ll, ll> 
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    ll n, w; cin >> n >> w;

    vector<pii> ch;

    for(ll i = 0; i < n; i++){
        ll a, b; cin >> a >> b;
        ch.eb(a, b);
    }

    sort(all(ch), [](const pii &a, const pii &b){return a.F > b.F;});

    ll ans = 0;
    for(ll i = 0; i < n; i++){
        ll q = min(w, ch[i].S);
        
        ans += ch[i].F*q;

        w -= q;
        if(w <= 0) break;
    }

    cout << ans << endl;
    return 0;
}