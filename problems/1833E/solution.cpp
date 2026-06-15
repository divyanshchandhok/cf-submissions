#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<set<int>> g;
vector<bool> visited;
int fc = 0, tc = 0;

void dfs(int v, int p){
    visited[v] = true;
    // cout << v + 1 << ' ';
    for(int c : g[v]){
        // cout << v + 1 << ' ' << c + 1 << endl;
        if(visited[c]){
            if(c != p){
                fc++;
            }
        }
        else{
            dfs(c, v);
        }
    }
}

void reset(){
    for(int i = 0; i < visited.size(); i++){
        visited[i] = false;
    }
    g.clear();
    fc = 0;
    tc = 0;
}

void solve(){
    int n;
    cin >> n;
    reset();
    g.resize(n);
    visited.resize(n);

    int x;
    for(int i = 0; i < n; i++){
        cin >> x;
        g[i].insert(x-1);
        g[x-1].insert(i);
    }

    for(int i = 0; i < n; i++){
        if(!visited[i]){
            tc++;
            dfs(i, -1);
        }
    }
    fc /= 2;
    int pc = tc - fc;

    if(pc == 0){
        cout << fc << ' ' << fc << endl;
    }
    else{
        cout << fc + 1 << ' ' << tc << endl;
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}