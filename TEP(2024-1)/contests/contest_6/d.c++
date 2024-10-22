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

#define MAX 112
vector<vector<char>> g(MAX);
vector<vector<int>> vis(MAX);

int solve(int i, int j, vector<vector<char>> &g, vector<vector<int>> &vis) {

   
    vis[i][j] = 1;
    queue<tuple<int,int,int>> q;
    q.push({i,j,0});

    tuple<int,int,int> ans;


    while(not q.empty()) {
        tuple<int,int,int> front = q.front();
        q.pop();
        ans = front;

        if(i < g.size() and not vis[i+1][j] and g[i+1][j] != '#') {
            vis[i+1][j] = 1;
            q.push({i+1,j,get<2>(front)+1});
        }

        if(j < g[0].size() and not vis[i][j+1] and g[i][j+1] != '#') {
            vis[i][j+1] = 1;
            q.push({i,j+1,get<2>(front)+1});
        }
    }

    return get<2>(ans);

}

int main() { _
    
    int h,w; cin >> h >> w;
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            char c; cin >> c;
            g[i][j] = c;
        }
    }
 
    int count = solve(0,0,g,vis);
    cout << count << endl;

   return 0;

}