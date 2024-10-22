#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

const double PI = acos(-1.0);

int isTri(int a, int b, int c) {return a+b>c and a+c>b and b+c>a;}
int main() { _
    int a, b, c; cin >> a >> b >> c;

    double ans = 0;
    
    int ma = a + b + c;
    
    int mi;
    isTri(a, b, c) ? mi = 0: mi = min(min(min(abs(a+b-c), abs(a-b-c)), abs(a+b+c)), abs(a-b+c));

    double armin = PI*mi*mi, armax = PI*ma*ma;

    cout << fixed << setprecision(10) << armax - armin << endl;
    return 0;
}