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
    string s; cin >> s;

    string t = "\0";

    const int max = 1e5;
    for(int i = 0; i < max; i++) t += "oxx";

    if(t.find(s) != string::npos) cout << "Yes\n";
    else cout << "No\n";
    return 0;
}