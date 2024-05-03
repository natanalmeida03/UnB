#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int a, b, w; cin >> a >> b >> w;

     w *= 1000;
     int ma = 0, mi=1000000, v = 0;

     for(int i = a; i <= b; i++){
          int r = 0;
          for(int j = i; j <= b; j++){
               for(int k = 0; k <= 1000; k++){
                    for(int y = 0; y <= 1000; y++){
                         if(((k*i) + (y*j) == w) or ((y*i) + (k*j) == w)){
                              r = k + y;
                              //cout << k << "*" << i <<" + "<< y << "*" << j << " = "<< (k*i) + (y*j) << endl;
                              v = 1;
                              mi = min(r, mi);
                              ma = max(r, ma);
                         }
                    }
               }
          }
     }
     if(v == 0)
          cout << "UNSATISFIABLE\n";
     else
          cout << mi << " " << ma << endl;
     return 0;
}