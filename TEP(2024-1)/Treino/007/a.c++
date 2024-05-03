#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int n; cin >> n;

     int ne = 0, p = 0;

     while(n--){
          int x, y; cin >> x >> y;

          if(x < 0)
               ne++;
          else
               p++;
     }

     if(ne == 1 or p == 1 or ne == 0 or p == 0)
          YES;
     else 
          NO;

     return 0;
}