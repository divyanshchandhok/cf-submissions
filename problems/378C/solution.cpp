#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> g;
bool visited[510][510];
int n, m, cnt, tc, k;

vector<pair<int, int>> movements = {
    {1, 0}, {0, 1}, {-1, 0}, {0, -1}
};

bool isValid(int x, int y){
    return x >= 0 && y >= 0 && x < n && y < m && (g[x][y] == 0);
}

void dfs(int x, int y){
    // cout << x << ' ' << y << endl;
    if(tc >= cnt - k){
        return;
    }
    tc++;
    visited[x][y] = true;
    for(auto mov : movements){
        int nx = x + mov.first;
        int ny = y + mov.second;
        if(!visited[nx][ny] && isValid(nx, ny)){
            dfs(nx, ny);
        }
    }
}

void solve(){
    cin >> n >> m >> k;
    g.resize(n);
    for(int i = 0; i < n; i++){
        g[i].resize(m, 0);
    }
    char c;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> c;
            if(c == '.'){
                g[i][j] = 0;
                cnt++;
            }
            else{
                g[i][j] = 1;
            }
        }
    }
    vector<int> components;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(isValid(i, j)){
                dfs(i, j);
                break;
            }
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(g[i][j] == 0){
                if(visited[i][j]){
                    cout << '.';
                }
                else{
                    cout << 'X';
                }
            }
            else{
                cout << '#';
            }
        }
        cout << endl;
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