#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int t; cin >> t;

     vector<int> v;
     for(int i = 0; i < t; i++){
          int a; cin >> a;
          v.emplace_back(a);
     }

     if(t == 1){
          cout << v[0] << endl;
          return 0;
     }
     
     reverse(all(v));

     vector<int> p;

     int aux = max(v[0], v[1]);

     if(v[1] > v[0])
          p.emplace_back(v[1]);
     for(int i = 2; i < t; i++){
          if(v[i] > aux){
               p.emplace_back(v[i]);
               aux = v[i];
          }
     }

     sort(all(p));

     cout << p[0] << endl;
     return 0;
}