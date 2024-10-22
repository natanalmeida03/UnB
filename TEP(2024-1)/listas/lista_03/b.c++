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
    int n; cin >> n;
    vector<ii> p;

    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;

        p.eb(x, y);
    }

    float ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            float dis = hypot((p[j].first - p[i].first),(p[j].second - p[i].second));
            ans = max(ans, dis);
        }
    }

    cout << fixed << setprecision(18);
    cout << ans/2 << endl;

    return 0;
}