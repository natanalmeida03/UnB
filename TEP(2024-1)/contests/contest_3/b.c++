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
    string n1, n2; cin >> n1 >> n2;
    reverse(n1.begin(), n1.end());
    reverse(n2.begin(), n2.end());

    int aux = 0;
    while(aux < n1.length() or aux < n2.length()) {
        if((n1[aux] - '0' + n2[aux] - '0') >= 10) {
            cout << "Hard" << endl;
            return 0;
        }

        aux++;
    }

    cout << "Easy" << endl;

    return 0;
}