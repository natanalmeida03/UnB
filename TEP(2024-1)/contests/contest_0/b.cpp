#include <bits/stdc++.h>
using namespace std;

void solve(string s) {

     for(int i = 0; i < (int)s.length(); ++i) {
          if(isupper(s[i]) and !((i+1)&1))
               continue;
          else if(islower(s[i]) and ((i+1)&1))
               continue;
          else {
               cout << "No\n";
               return;
          }
     }

     cout << "Yes\n";

}


int main(){

     string s; cin >> s;

     solve(s);
     return 0;

}