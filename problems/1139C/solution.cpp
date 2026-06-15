#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

vector<vector<int>> grid;
int co = 0;
vector<bool> visited;

void dfs(int v){
    co++;
    visited[v] = true;
    for(int child : grid[v]){
        if(!visited[child]){
            dfs(child);
        }
    }
}

int mod_pow(int base, int exponent) {
    int result = 1;
    base %= MOD;

    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % MOD;
        }
        base = (base * base) % MOD;
        exponent /= 2;
    }

    return result % MOD;
}

void solve(){
    int n, k;
    cin >> n >> k;
    grid.resize(n);
    visited.resize(n);
    for(int i = 0; i < n - 1; i++){
        int u, v, c;
        cin >> u >> v >> c;
        if(c == 0){
            grid[u-1].push_back(v-1);
            grid[v-1].push_back(u-1);
        }
    }

    vector<int> components;

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            co = 0;
            dfs(i);
            components.push_back(co);
        }
    }

    int ans = mod_pow(n, k);
    for(int comp : components){
        ans = (ans - mod_pow(comp, k) + MOD) % MOD;
    }

    cout << ans % MOD << endl;
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