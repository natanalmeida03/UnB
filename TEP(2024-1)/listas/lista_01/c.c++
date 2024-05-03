#include <bits/stdc++.h>

using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int n; cin >> n;
          vector<pair<int,int>> po;

          for(int i = 0; i < n; i++){
               int x,y; cin >> x >> y;
               po.emplace_back(x,y);
          }

          sort(po.begin(), po.end());

          int r = 0;
          pair<int,int> pAt = {0,0};

          for(auto [x,y] : po){
               auto [xAt, yAt] = pAt;
               r += abs(x-xAt) + abs(y-yAt);

               pAt = {x,y};
          }

          auto [xAt, yAt] = pAt;
          r += abs(xAt + yAt);

          cout << r << "\n";
     }
}