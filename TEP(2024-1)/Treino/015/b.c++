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
     vector<int> a, b;

     for(int i = 0; i < n; i++){
          int x; cin >> x;
          a.emplace_back(x);
     }
     
     for(int i = 0; i < n; i++){
          int x; cin >> x;
          b.emplace_back(x);
     }

     int ans = 0;
     for(int i = 1; i < 1001; i++){
          int v = 1;
          for(int j = 0; j < n; j++){
               if(i < a[j] or i > b[j])
                    v = 0;
          }

          if(v == 1)
               ans++;
          
     }

     cout << ans << endl;
     return 0;
}