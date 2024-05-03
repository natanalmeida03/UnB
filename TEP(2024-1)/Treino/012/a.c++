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

int main() { _
     int n, k; cin >> n >> k;
     
     vector<int> p(101, 0);
     vector<int> h(101, 0);
     for(int i = 0; i < n; i++){
          int a; cin >> a;
          p[a] = i;
          h[a] = 1;
     }

     vector<int> ans;
     for(int i = 0; i < 101; i++){
          if(h[i] == 1){
               ans.emplace_back(p[i]);
          }
     }

     sort(all(ans));
     if(ans.size() >= k){
          cout << "YES" << endl;
          for(int i = 0; i < k; i++)
               cout << ans[i]+1 << " ";
     }
     else
          cout << "NO";

     cout << endl;
     return 0;
}