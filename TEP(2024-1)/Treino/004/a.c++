#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define endl '\n'

int main() {
     int n; cin >> n;
     int aux = n;

     if(n == 1){
          int a; cin >> a;
          cout << a << endl;
          return 0;
     }

     if(n == 2){
          int a, b; cin >> a >> b;
          cout << abs(a-b) << endl;
          return 0;
     }

     vector<int> k;
     while(aux--){
          int a; cin >> a;
          k.emplace_back(a);
     }
     int r = 361;
     for(int i = 0; i < n; i++){
          int v = 0;
          int j = i;
          while(1){
               v+= k[j%n];
               j++;
               if(v >= 180)
                    break;
          }

          v-= 180;
          r = min(r, abs(2*v));
     }
     cout << r << endl;


     return 0;
}