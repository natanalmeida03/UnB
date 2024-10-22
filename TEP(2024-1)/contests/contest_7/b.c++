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
    
    int l, r;
    string s;
    cin >> l >> r >> s;

    --l;
    for(int i = l, j = r-1; i < j; ++i, --j)
        swap(s[i],s[j]);

    cout << s << endl;

    return 0;
}