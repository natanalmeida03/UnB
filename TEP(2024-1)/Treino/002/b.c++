#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define f0n(i, n) for(int i = 0; i < n; ++i)
#define f1n(i, n) for(int i = 1; i <= n; ++i)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'

int main() {
     int n; cin >> n;

     vector<ll> g;
     f0n(i, n){
          ll x; cin >> x;
          g.emplace_back(x);
     }

     int r = 1;
     int p = 1;
     for(int i = n-1; i > 0; i-= p){
          p = g[i];
          if(p == 0){
               r++;
               p = 1;
          }
     }

     cout << r << endl;
     return 0;
}