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
     int t; cin >> t;

     while(t--){
          ll a, b, k; cin >> a >> b >> k;

          ll ans = 0;

          if(k & 1){
               ans -= k/2*b;
               ans += ((k/2)+1)*a;
          }
          else{
               ans -= (k/2)*b;
               ans += (k/2)*a;
          }

          cout << ans << endl;
     }
     return 0;
}