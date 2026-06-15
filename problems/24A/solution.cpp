#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<pair<int, int>>> g;
int total_cost = 0;

void dfs(int v, int p, int cost){
    total_cost += cost;
    // cout << v << ' ' << p << ' ' << cost << endl;
    if(v == 0){
        return;
    }
    for(auto child : g[v]){
        int child_v = child.first;
        int child_c = child.second;
        if(child_v != p){
            dfs(child_v, v, child_c);
        }
    }
}

void solve(){
    int n;
    cin >> n;
    g.resize(n);
    int x, y, c;
    for(int i = 0; i < n; i++){
        cin >> x >> y >> c;
        g[x-1].push_back(make_pair(y-1, 0));
        g[y-1].push_back(make_pair(x-1, c));
    }
    int mcost = LLONG_MAX;
    for(auto ch : g[0]){
        total_cost = 0;
        int chv = ch.first;
        int chc = ch.second;
        dfs(chv, 0, chc);
        mcost = min(mcost, total_cost);
    }
    cout << mcost << endl;
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