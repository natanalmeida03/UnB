#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
     int n; cin >> n;
     int aux = n;

     ll s1=0, s2=0,s3=0;

     while(aux--){
          ll a; cin >> a;
          s2 += a*a;
          s1 += a;
          s3 += (s1-a)*a;
     }

     cout << (n-1)*s2 + (-2)*s3 << endl;
     return 0;
}