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
    string s; cin >> s;

    if(s.length() <= 2) return cout << s << endl, 0;
    
    int d = (s[0] - '0')-(s[1] - '0'), v = 1;
    for(auto i = 1; i < s.length(); i++)
        if((s[i-1] - '0')-(s[i] - '0') != d){
            v = 0;
            break;
        }

    if(v) return cout << s << endl, 0;

    ll ans = 0, x = stoll(s);
    string aux = s;
    vector<int> n = {-9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int p = s[0]-'0', i = 0;
    v = 1;
    while(ans < x){
        for(int j = 1; j < s.length(); j++){
            int a = p + n[i];
            if(a < 0 or a > 9){
                v = 0;
                break;
            }
            p = a;
            aux[j] = a + '0';
        }
        if(v)
            ans = stoll(aux);
        i++;
        if(i == 19){
            int a = (s[0]-'0');
            if(a == 9)
                break;
            a++;
            s[0] = a + '0';
            i = 0;
        }
        aux = s;
        v = 1;
        p = s[0]-'0';
    }

    cout << ans << endl;
    return 0;
}