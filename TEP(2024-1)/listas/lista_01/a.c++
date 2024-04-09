#include <bits/stdc++.h>

using namespace std;

// x′=x.cos(θ) - y.sin(θ)
// y′=x.sin(θ) + y.cos(θ)

int main (){
     double pi = M_PI;

     int x, y; cin >> x >> y;
     int r; cin >> r;

     cout << fixed << setprecision(13) << (x*(cos(r*(pi/180))) - y*(sin(r*(pi/180)))) << " " << (x*(sin(r*(pi/180))) + y*(cos(r*(pi/180))));
}