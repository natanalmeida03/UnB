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
    string s, str; cin >> s;
    int k; cin >> k;

    int maxCount = 0, v = 0;
    for(int i = 0, j = 0; j < str.length(); ++j) {
        if(v == k) {
            maxCount = max(maxCount, (j-i)+1);
            cout << maxCount << endl;
            while(str[i] != '.') {
                i++;
            }
            v--;
        } else 
            if(str[j] == '.') v++;
    }

    cout << (maxCount==0?s.length():maxCount) << endl;
    return 0;
}