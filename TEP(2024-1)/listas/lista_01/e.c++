#include <bits/stdc++.h>

using namespace std;

int main (){
     long long x; cin >> x;
     int aux = x;

     int r = 0;

     while(x % 360 != 0){
          x+= aux;
          r++;
     }

     cout << ++r << "\n";
}