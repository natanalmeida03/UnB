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
    int t; cin >> t;
    int a = t;
    while(t--){
        double n; cin >> n;

        const double pi = 2 * acos(0.0);

        cout << fixed << setprecision(2);
        cout << "Case " << a-t << ": " << (2*n)*(2*n) - (pi * n * n) << endl; 
    }
    return 0;
}