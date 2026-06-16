#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

vector<multiset<int>> grid;
vector<int> visited;

// void dfs(int node){
//     visited[node] = 1;
//     cout << node << " ";
//     for(int c : grid[node]){
//         if(!visited[c]){
//             dfs(c);
//         }
//     }
// }

void solve() {
    int n, m;
    cin >> n >> m;
    grid.resize(n+1);
    visited.resize(n+1);
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        // debug(x, y, i, n, m);
        grid[x].insert(y);
        grid[y].insert(x);
    }
    
    set<int> s;

    s.insert(1);
    debug(grid);
    while (!s.empty()) {
        int x = *s.begin();
        debug(x);
        visited[x] = 1;
        s.erase(s.begin());
        cout << x << " ";
        for(int c : grid[x]){
            if(!visited[c]){
                s.insert(c);
            }
        }
    }

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
