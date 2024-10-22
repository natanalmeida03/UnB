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

void solve() {

}

int main() { _
    
    string s1, s2; cin >> s1 >> s2;
    if(s1.length() == 1) {
        cout << "Yes" << endl;
        return 0;
    }

    vi v1, v2;

    for(auto &c : s1) v1.eb(c - 'a');
    for(auto &c : s2) v2.eb(c - 'a');


    int s = 0;
    while(v1[0] != v2[0]){
        v1[0]++;
        v1[0]%=26;
        s++;
    }

    for(int i = 1; i < s1.length(); i++){
        int aux = 0;
        while(v1[i] != v2[i]){
            v1[i]++;
            v1[i]%=26;
            aux++;
        }

        if(aux != s){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

     return 0;
}