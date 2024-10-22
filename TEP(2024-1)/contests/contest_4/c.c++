#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define ii pair<int,int>
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

const int MAX = 1e3;
int main() { _
    ll n, a, b; cin >> n >> a >> b; a--; b--;
    ll p, q, r, s; cin >> p >> q >> r >> s; p--; q--; r--; s--; 
    bool g[MAX][MAX];

    ll le = max(max(-a, -b), max(p-a, r-b)), ri = (min(n-a, n-b), min(q-a, s-b));
    //cout << le << " " << ri << endl;

    for(int i = le; i <= ri; i++){
        //cout << a+i << "  " << b+i << endl;
        ll x = a+i - p, y = b+i - r;
        if(x < MAX and y < MAX)
            g[x][y] = 1;
    }

    le = max(max(-a,b-n), max(p-a, min(0, ))), ri = min(n-a, b);

    for(int i = le; i <= ri; i++){
        //cout << a+i << "  " << b-i << endl;
        ll x = a+i - p, y = b-i - r;
        if(x < MAX and y < MAX)
            g[x][y] = 1;
    }
    
    for(int i = 0; i < q-p+1; i++){
        for(int j = 0; j < s-r+1; j++){
            if(g[i][j]) cout << "#";
            else cout << ".";
        }

        cout << endl;
    }


    return 0;
}