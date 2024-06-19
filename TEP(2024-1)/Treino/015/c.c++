#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second

int main() { _
     int n; cin >> n;
     string x; cin >> x;

     int v = 0;
     int q; cin >> q;

     while(q--){
          int t, a, b; cin >> t >> a >> b; a--; b--;
          if(t == 1){
               if(v){
                    if(a < n) a += n;
                    else a-= n;

                    if(b < n) b += n;
                    else b -= n;
               }
               swap(x[a], x[b]);
          }else{
               v = 1 - v;
          }
     }
     
     if(v == 1){
          cout << x.substr(n, n);
          cout << x.substr(0, n) << endl;
     }else 
          cout << x << endl;
     return 0;
}