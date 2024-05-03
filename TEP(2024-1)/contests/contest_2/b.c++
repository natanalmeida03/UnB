#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define endl '\n'

int main() {
     int n; cin >> n;
     int aux = n;
     int r = 99999999;
     vector<pair<int,int>> t;

     while(n--){
          int a, b; cin >> a >> b;
          t.emplace_back(a,b);
     }

     for(int i = 0; i < aux; i++){
          for(int j = 0; j < aux; j++){
               auto [a, b] = t[i];
               auto [c, d] = t[j];
               if(i == j)
                    r = min(r,a+b);
               else
                    r = min(r, min(max(a,d), max(b,c)));
          }
     }

     cout << r << endl;
     return 0;
}