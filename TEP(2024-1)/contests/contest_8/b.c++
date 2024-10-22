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

double dist(int xa, int ya, int xb, int yb) {
    return sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));
}

int main() { _

    int n;
    cin >> n;
    vector<pair<int,int>> p;
    for(int i = 0; i < n; ++i) {
        int x,y; cin >> x >> y;
        p.emplace_back(x,y);
    }

    double maxLen = 0;
    for(int i = 0; i < n; ++i) {
        pair<int,int> aux = p[i];
        for(int j = 0; j < n; ++j) {
            double dist2 = dist(aux.F,aux.S,p[j].F,p[j].S);
            maxLen = max(maxLen,dist2);
        }
    }

    cout << fixed << setprecision(10) << maxLen << endl;
    return 0;
}