#include <bits/stdc++.h>


using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          string s; cin >> s;

          pair<int, int> p = {0,0};
          auto &[x,y] = p;

          int v = 0;

          for(auto &c : s){
               if(c == 'U')
                    y++;
               else if(c == 'D')
                    y--;
               else if(c == 'L')
                    x--;
               else if(c == 'R')
                    x++;

               if(x == 1 and y == 1){
                    v = 1;
                    break;
               }
          }
          
          v == 1 ? cout << "YES\n" : cout << "NO\n";
     }
}