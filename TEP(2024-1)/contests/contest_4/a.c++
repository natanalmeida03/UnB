#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    int n; cin >> n;

    if(n >= 42) cout << "AGC0" << n+1 << endl;
    else if(n < 10)cout << "AGC00" << n << endl;
    else cout << "AGC0" << n << endl;
    return 0;
}