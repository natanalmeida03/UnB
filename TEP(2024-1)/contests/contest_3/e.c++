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


void dfs_remove(int s, vector<vector<int>> &g, vector<int> &vis) {

    vis[s] = 1;
    stack<int> st;
    st.emplace(s);

    while(not st.empty()) {
        int front = st.top();
        st.pop();

        for(auto v : g[front]) if (not vis[v]){
            vis[v] = 1;
            st.emplace(v);
        }
    }

}


int main() { _

    int n, k; cin >> n >> k;
    vector<vector<int>> g(n);
    for(int i = 0; i < k; ++i) {
        int v, w; cin >> v >> w;
        --v,--w;
        g[v].emplace_back(w);
        g[w].emplace_back(v);
    }

    for(int i = 0; i < n; ++i) {
        vector<int> vis(n,0);
        int count = 0;
        dfs_remove(i,g,vis);
        for(int i = 0; i < n; ++i) {
            if(not vis[i]) {
                dfs_remove(i,g,vis);
                count++;
            }
                
        }
        cout << count << endl;
    }

    return 0;
}