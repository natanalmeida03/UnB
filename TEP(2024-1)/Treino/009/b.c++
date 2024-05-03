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

     string s, t; cin >> s >> t;

     vector<int> v;
     int c = 0;
     while(1){
          for(int i = 0; i < n; i++){
               if(s[i] != t[i]){
                    for(int j = i; j < n; j++){
                         swap(s[j], s[j+1]);
                         v.emplace_back(j+1);
                         c++;
                         if(s[j] == t[j])
                              break;
                    }
               }
          }

          if(s == t)
               break;
          if(c == 10)
               break;
     } 

     cout << c << endl;
     cout << s << " " << t << endl;
     for(auto i : v){
          cout << i << " ";
     }
     return 0;
}