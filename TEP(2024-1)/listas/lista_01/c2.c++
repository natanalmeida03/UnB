#include <bits/stdc++.h>

using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          int dir=0, esq=0, cim=0, bai=0;

          for(int i = 0; i < n; i++){
               int x,y; cin >> x >> y;
               if(x >= 0 and x > dir) dir = x;
               if(x <= 0 and x < esq) esq = x;
               if(y >= 0 and y > cim) cim = y;
               if(y <= 0 and y < bai) bai = y;
          }
          cout << 2*(abs(esq) + abs(bai) + dir + cim) << "\n";      
     }
}