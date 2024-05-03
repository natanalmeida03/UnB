#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define pb push_back
#define f first
#define s second

int main() { _
     int r, x, y; cin >> r >> x >> y;

     double d = hypot(x, y);

     int ans = ceil(d/r);
     if(r > d)
          ans = 2;

     cout << ans << endl;
     return 0;
}