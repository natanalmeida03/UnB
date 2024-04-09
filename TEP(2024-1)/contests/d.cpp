#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
int main(){

     string x;
     ull m;
     cin >> x >> m;
     string maior = x;
     sort(maior.rbegin(),maior.rend());
     int greater = (maior[0]-'0')+1;

     int sum = 0;
     for(int j = greater; j <= 60; ++j) {
          ull count = 0;
          ull pot = 1;         
          for(int i = x.length()-1, k = 0; i >= 0; --i, ++k) {
               count += (x[i]-'0')*pot;
               if(count > m or pot < 0)
                    break;
               if(k > 30)
                    break;
               pot *= j;
          }
          if(count < m)
               sum++;
          else if(count == m) {
               cout << ++sum << "\n";
               return 0;
          } else {
               break;
          }
     }

     cout << sum << "\n";

}