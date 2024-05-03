#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define YES cout << "Yes" << endl
#define NO cout << "No" << endl
#define all(x) x.begin(), x.end()
#define endl '\n'

int main() {
     int v, t, s, d; cin >> v >> t >> s >> d;

     ((d >= t*v) and (d <= s * v)) ? NO : YES;

     return 0;
}