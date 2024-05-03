#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int n, m; cin >> n >> m;

     vector<int> v(m+1, 0);

     for(int i = 0; i < n; i++){
          int l, r; cin >> l >> r;

          for(int j = l; j <= r; j++)
               v[j] = 1;
     }

     int c = 0;
     for(int i = 1; i <= m; i++)
          if(v[i] == 0)
               c++;

     cout << c << endl;
     for(int i = 1; i <= m; i++){
          if(v[i] == 0)
               cout << i << " ";
     }

     cout << endl;

     return 0;
}