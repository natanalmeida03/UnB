#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define debug(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define I(x) int x; cin >> x
#define f first
#define s second

int main() { _
     string s1, s2;
     cin >> s1 >> s2;

     int w = 0;
     while (true) {
          int i = s1.length() - w - 1;
          int j = s2.length() - w - 1;
          if (i >= 0 && j >= 0 && s1[i] == s2[j])
               w++;
          else
               break;
     }
     cout << s1.length() + s2.length() - 2 * w << endl;

     return 0;
}