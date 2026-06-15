#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> grid;
vector<bool> visited;
vector<int> ans;
vector<int> temp;
int cn;

void dfs(int v){
    temp.push_back(v);
    cn++;
    // cout << v + 1 << " " << cn << endl;
    visited[v] = true;
    for(int c : grid[v]){
        if(!visited[c]){
            dfs(c);
        }
    }
}

void solve(){
    int n, m;
    cin >> n >> m;
    grid.resize(n);
    ans.resize(n);
    visited.resize(n);
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        int f;
        if(x == 0){
            continue;
        }
        if(x == 1){
            cin >> f;
            continue;
        }
        cin >> f;
        for(int j = 1; j < x; j++){
            int s;
            cin >> s;
            grid[f-1].push_back(s-1);
            grid[s-1].push_back(f-1);
        }
    }
    
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            cn = 0;
            dfs(i);
            for(int j = 0; j < temp.size(); j++){
                ans[temp[j]] = cn;
            }
            temp.clear();
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }

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