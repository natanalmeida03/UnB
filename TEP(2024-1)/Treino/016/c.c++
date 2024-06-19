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

bool powof2(ll v){
    return v && !(v & (v - 1));
}

int main() { _
     I(n);

     if(n == 1){
          int a; cin >> a;
          return cout << 1 << endl, 0;
     }

     vector<int> v, g(n, 0);

     for(int i = 0; i < n; i++){
          int a; cin >> a;
          v.emplace_back(a);
          for(int j = 0; j < i; j++){
               if(powof2(a + v[j])){
                    g[i] = 1;
                    g[j] = 1;
               }
          }
     }

     int ans = 0;
     for(auto w : g)
          if(w == 0)
               ans++;
     
     cout << ans << endl;
     return 0;
}