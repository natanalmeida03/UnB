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

int maxVal(vector<int> vals,int l, int r, int re) {

    sort(vals.begin(), vals.begin()+r);
    return vals[re];
}


int main() { _
    
    int n, k; cin >> n >> k;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int val; cin >> val;
        v.emplace_back(val);
    }

    int re = 0;
    for(int i = k; i <= n; ++i) {
        int res = maxVal(v, 0, i, re);
        cout << res << endl;
        re++;
    }

    return 0;
}