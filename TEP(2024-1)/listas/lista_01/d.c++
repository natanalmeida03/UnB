#include <bits/stdc++.h>

using namespace std;

int main(){
     int t; cin >> t;

     while(t--){
          int r = 1;

          int xA, yA; cin >> xA >> yA;
          int xB, yB; cin >> xB >> yB;
          int xC, yC; cin >> xC >> yC;

          if((xA > xB and xA > xC) or (xA < xB and xA < xC))
               r+= min(abs(xA - xB), abs(xA - xC));
          if((yA > yB and yA > yC) or (yA < yB and yA < yC))
               r+= min(abs(yA - yB), abs(yA - yC));
          
          cout << r << "\n";
     }
}