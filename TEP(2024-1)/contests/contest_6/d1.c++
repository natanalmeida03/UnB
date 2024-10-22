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

const int MAX = 1e2+1;

char g[MAX][MAX];
int d[MAX][MAX];

vector<ii> dir = {{0, 1}, {1, 0}};

int n = 0, m = 0;
bool andar(int x, int y){return x < n and y < m and g[x][y] != '#';}

int bfs() {
    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            d[i][j] = -1;
        }
    }
    queue<ii> q;
    q.push({0,0});
    d[0][0] = 1;

    int ans = 1;
    while(!q.empty()){
        ii v = q.front();
        q.pop();

        for(auto w : dir){
            auto x = v.F+w.F;
            auto y = v.S+w.S;
            //cout << x << " " << y  << " - " << g[x][y];
            if(andar(x, y) and d[x][y] == -1){
                q.push({v.F+w.F, v.S+w.S});
                d[v.F+w.F][v.S+w.S] = d[v.F][v.S]+1;
                ans = max(ans, d[v.F+w.F][v.S+w.S]);
            }
        }
    }

    return ans;

}

int main() { _
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char c; cin >> c;
            g[i][j] = c;
        }
    }

    int ans = bfs();

    cout << ans <<endl;
    return 0;
}