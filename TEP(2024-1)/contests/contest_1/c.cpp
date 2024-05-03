#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){

     string n;
     int k, count = 0;
     cin >> n >> k;

     for(int i = 0; i < k; ++i) {
          if(n == "0") {
               cout << "0\n";
               return 0;
          }
          string menor = n;
          string maior = n;
          sort(menor.begin(),menor.end());
          sort(maior.rbegin(),maior.rend());
          count = stoi(maior) - stoi(menor);
          n = to_string(count); 
     }

     cout << n << "\n";

}