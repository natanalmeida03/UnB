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
     I(n);

     int ans = 0;
     vector<int> g;
     int t = 0, a;
     while(n--){
          cin >> a;
          if(a > t)
               t = a;
          else{
               g.emplace_back(t);
               ans++;
               t = 1;
          }
     }

     g.emplace_back(a);
     ans++;

     cout << ans << endl;
     for(auto w : g)
          cout << w << " ";

     cout << endl;

     return 0;
}