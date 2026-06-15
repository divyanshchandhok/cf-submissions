#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> grid;
vector<int> subtree_size;

void dfs(int v, int p) {
    subtree_size[v] = 1;
    for (int child : grid[v]) {
        if (child != p) {
            // cout << "Visiting child " << child + 1 << " of node " << v + 1 << endl;
            dfs(child, v);
            subtree_size[v] += subtree_size[child];
        }
    }
}

void solve(){
    int n;
    cin >> n;
    if(n % 2 != 0){
        cout << -1 << endl;
        return;
    }
    grid.resize(n);
    for(int i = 0; i < n - 1; i++){
        int u, v;
        cin >> u >> v;
        grid[u-1].push_back(v-1);
        grid[v-1].push_back(u-1);
    }
    subtree_size.resize(n);

    dfs(0, -1);
    int even_count = 0;
    for(int i = 1; i < n; i++){
        if(subtree_size[i] % 2 == 0){
            even_count++;
        }
    }
    cout << even_count << endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
}