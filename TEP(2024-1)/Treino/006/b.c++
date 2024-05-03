#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int n; cin >> n;
     int x; cin >> x;

     while(n--){
          int a; cin >> a;
          if(a != x)
               cout << a << " ";
     }

     cout << endl;
     return 0;
}