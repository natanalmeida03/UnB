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
     int n; cin >> n; 
     string s = to_string(n);
     reverse(all(s));
     n = stoi(s);
     s = to_string(n);
     int t = s.length();

     string aux = s;
     reverse(all(aux));

     string su = s.substr(0, max(t/2, 1));
     string sua = aux.substr(0, max(t/2, 1));

     if(su == sua)
          cout << "Yes" << endl;
     else
          cout << "No" << endl;
     
     return 0;
}