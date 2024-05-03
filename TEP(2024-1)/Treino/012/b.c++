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

bool comp(const string &a, const string&b){
     return a.length() < b.length();
}

int main() { _
     int n; cin >> n;

     vector<string> s;
     for(int i = 0; i < n; i++){
          string c; cin >> c;
          s.emplace_back(c);
     }

     sort(all(s), comp);

     for(int i = 1; i < n; i++){
          if(s[i].find(s[i-1]) == string::npos){
               cout << "NO" << endl;
               return 0;
          }
     }

     cout << "YES" << endl;
     for(auto i : s)
          cout << i << endl;
          
     return 0;
}