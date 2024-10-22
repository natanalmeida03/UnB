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

const ll MAX = 1e5;
int main() { _
    ll n, x; cin >> n >> x;
    vector<ll> v, k;

    for(ll i = 0; i < n; i++){
        ll l; cin >> l;
        if(i==0){
            for(ll j = 0; j < l; j++){
                ll a; cin >> a;
                if(x%a==0){
                    v.eb(x/a);
                }
            }
        }else if(i != n-1){
            for(ll j = 0; j < l; j++){
                ll a; cin >> a;
                for(auto c : v){
                    if(c%a==0)
                        k.eb(c/a);
                }
            }

            v.clear();
            v = k;
            k.clear();
        }else{
            for(ll j = 0; j < l; j++){
                ll a; cin >> a;
                for(auto c : v){
                    if(c==a)
                        k.eb(a);
                }
            }

            v.clear();
            v = k;
            k.clear();
        }
    }

    cout << v.size() << endl;
    return 0;
}