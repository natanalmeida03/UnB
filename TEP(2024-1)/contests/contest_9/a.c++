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
    int a, b; cin >> a >> b;
    
    (((a+1)%10 == b%10) or ((b+1)%10 == a%10))? cout << "Yes\n" : cout << "No\n";
    return 0;
}