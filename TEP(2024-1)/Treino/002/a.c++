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

     vector<int> c;
     ll sum = 0;
     f0n(i,n){
          int x; cin >> x;
          sum+= x;
     }

     f0n(i,n){
          int x; cin >> x;
          c.emplace_back(x);
     }

     sort(c.rbegin(), c.rend());

     ll r = c[0] + c[1];

     sum <= r ? YES : NO;


     return 0;
}