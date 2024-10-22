#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define pii pair<int, int>
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _

    string s1, s2;
    cin >> s1 >> s2;

    if((s1[0] == '#' and s1[1] == '#') or (s1[0] == '#' and s2[0] == '#') or (s1[1] == '#' and s2[1] == '#') or (s2[0] == '#' and s2[1] == '#'))
        cout << "Yes\n";
    else
        cout << "No\n";


    return 0;
}