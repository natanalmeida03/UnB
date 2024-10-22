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
    int n, k; cin >> n >> k;
    set<int> v;

    int p = 0;
    for(int i = 0; i < k; i++){
        int a; cin >> a;
        v.insert(a);
    }

    auto it = v.begin();
    for(int i = 0; i <= n-k; i++){
        int a; cin >> a;
        v.insert(a);
        cout << *it << endl;
        if(a > *it)
            it = next(it, 1);
    }

    return 0;
}