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
    int a, b, c; cin >> a >> b >> c;

    if(a+b > c and a+c > b and b+c > a){
        return cout << 0 << endl, 0;
    }

    int ans = 0;
    ans += max(0, c-(a+b)+1);
    ans += max(0, b-(a+c)+1);
    ans += max(0, a-(c+b)+1);

    cout << ans << endl;
    return 0;
}