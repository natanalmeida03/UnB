#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define endl '\n'

int main() {
     int a, b; cin >> a >> b;

     if(a + b >= 15 and b >= 8)
          cout << 1 << endl;
     else if(a + b >= 10 and b >= 3)
          cout << 2 << endl;
     else if(a+b >= 3)
          cout << 3 << endl;
     else 
          cout << 4 << endl;
     return 0;
}