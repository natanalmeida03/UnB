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
    ll n; cin >> n;
    string ans = "";

    while(n != 1){
        int a = n % 2;
        n/=2;
        ans += to_string(a) == "1" ? "2" : "0";
    }

    ans+= "2";

    reverse(all(ans));

    cout << ans << endl;
    return 0;
}