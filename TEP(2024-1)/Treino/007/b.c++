#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int a, b, c; cin >> a >> b >> c;

     cout << fixed << setprecision(5);

     //string s = to_string(a/(b*1.0));
     stringstream ss;
     ss << fixed << setprecision(50) << a/(b*1.0);
     string s = ss.str();

     cout << s << endl;
     char ch = c + '0', t;

     int i = 1, v = 0;
     for(auto k : s){
          if (k == '.')
               v = 1;
          else if(k == ch and v == 1){
               cout << i << endl;
               return 0;
          }else if (v == 1)
               i++;
     }

     cout << -1 << endl;
     return 0;
}