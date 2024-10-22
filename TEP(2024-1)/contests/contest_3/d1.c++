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
    int n; cin >> n;

    int ans = 0, l = 0, r = 0, qr = n, t = 0;

    while(l < s.length()){
        while(r < s.length() and (qr or s[r] == 'X')){
            if(s[r] == 'X') t++;
            else {
                qr--;
                t++;
            }

            r++;
        }

        ans = max(ans, t);

        if(s[l] == 'X') t--;
        else{
            t--;
            qr++;
        }

        l++;
    }

    cout << ans << endl;

    return 0;
}