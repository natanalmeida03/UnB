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

const int MAX = 1e5;
vector<vector<int>> g(MAX);
vector<int> v(MAX);

int bfs(int x){
    v[x]=1;

    queue<int> q;
    q.push(x);

    int t = 1;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(auto &w : g[u]){
            if(!v[w]){
                v[w]=1;
                q.push(w);
                t++;
            }
        }
    }

    return t;
}
int main() { _
    int n, m; cin >> n >> m;
    vector<int> k(MAX);

    for(int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        k[a]++;
        k[b]++;

        if(k[a] > 2 or k[b] > 2){
            cout << "No\n";
            return 0;
        }
        g[a].eb(b);
        g[b].eb(a);
    }

    for(int i = 1; i <= n; i++){
        int x;
        if(!v[i]){
            int x = bfs(i);
            if(x%2 == 0){
                cout << "No\n";
                return 0;
            }
        }
    }

    cout << "Yes\n";
    return 0;
}