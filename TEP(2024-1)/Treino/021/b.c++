#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() { _
     int n; cin >> n;

     vector<int> v, g;
     for(int i = 0; i < n; i++){
          int a; cin >> a;
          v.pb(a);
     }
          
     

     int d = 0;
     for(int i = 1; i < n-1; i++){
          if(v[i] == 0 and v[i-1] == 1 and v[i+1] == 1){
               g.pb(i-1); g.pb(i+1);
               d++;
          }
     }

     if(d == 0)
          return cout << 0 << endl, 0;

     int ans = 0;

     int a = -1, p = -1;
     for(int i = 0; i < g.size()-1; i+=2){
          if(p != g[i]){
               ans++;
               a = g[i]; p = g[i+1];
          }else{
               a = -1; p = -1;
          }
     }

     cout << ans << endl;

     return 0;
}