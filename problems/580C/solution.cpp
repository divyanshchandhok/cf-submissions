#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> cats;
vector<vector<int>> g;
vector<bool> visited;
int m, ans;

bool dfs(int v, int cur_sum){
    // cout << m << endl;
    visited[v] = true;

    if(cats[v] == 1){
        cur_sum++;
    }
    else{
        cur_sum = 0;
    }
    // cur_sum += cats[v];

    if(cur_sum > m){
        return false;
    }

    for(int child : g[v]){
        if(!visited[child]){
            // cout << "Visiting child " << child + 1 << " of node " << v + 1 << endl;
            if(dfs(child, cur_sum)){
                // cout << "Child " << child + 1 << " is a leaf node." << endl;
                if(g[child].size() == 1){
                    ans++;
                }
            }
        }
    }

    return true;
}

void solve(){
    int n;
    cin >> n >> m;
    cats.resize(n);
    g.resize(n);
    visited.resize(n);
    int v;
    for(int i = 0; i < n; i++){
        cin >> v;
        cats[i] = v;
    }

    int x, y;
    for(int i = 0; i < n - 1; i++){
        cin >> x >> y;
        g[x-1].push_back(y-1);
        g[y-1].push_back(x-1);
    }

    dfs(0, 0);
    cout << ans << endl;
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