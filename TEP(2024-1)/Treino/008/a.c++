#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int m, h; cin >> m >> h;

     if(h%m == 0)
          cout << "Yes\n";
     else
          cout << "No\n";
     return 0;
}