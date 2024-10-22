#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long ull;
typedef long long ll;

#define _ ios_base::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define ii pair<int, int>
#define vi vector<int>
#define eb emplace_back
#define debug(x) cout << x << endl
#define F first
#define S second
#define all(x) x.begin(), x.end()

int main() { _
    int n; cin >> n;
    vector<pair<string, int>> p(n);

    int x = 0;
    for(int i = 0; i < n; i++){
        string a; cin >> a;

        int v = 0;
        if(!p.empty()){
            for(auto &c : p){
                if(c.F == a){
                    c.second++;
                    v = 1;
                }
            }
        }

        if(!v){
            p[x].F = a;
            p[x++].S = 0;
        }
    }

    sort(all(p), [](const pair<string, int> &a, const pair<string, int> &b){return a.S > b.second;});

    cout << p[0].F << endl;
    return 0;
}