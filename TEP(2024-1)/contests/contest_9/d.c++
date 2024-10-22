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
    int n; cin >> n;
    vector<ii> st;

    int ans = 0, p = -1;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(st.empty() or p < 0){
            st.eb(a, 1);
            p = 0;
            ans+= 1;
        }else{
            if(a == st[p].F){
                st[p].S++;
                if(st[p].S == st[p].F){
                    ans -= (st[p].F - 1);
                    p -= 1;
                    st.pop_back();
                }else
                    ans++;

            }else{
                st.eb(a, 1);
                p++;
                ans++;
            }
        }

        cout << ans << endl;
    }   
    return 0;
}