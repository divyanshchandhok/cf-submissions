#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> grid;
vector<int> degree;
vector<bool> visited;
vector<int> longestPath;

void dfs(int v){
    int d = 0;
    visited[v] = true;
    if(grid[v].size() == 1 && v != 0) {
        longestPath[v] = 1;
    }
    for(int c : grid[v]){
        if(!visited[c]){
            degree[c] = degree[v] + 1;
            dfs(c);
        }
        d = max(d, longestPath[c]);
    }
    longestPath[v] = d + 1;
}

int find_parent(int v, int x){
    if(x == 0 || v == 0) return v;
    for(int c : grid[v]){
        if(degree[c] < degree[v]){
            return find_parent(c, x-1);
        }
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

	int n, x;
    cin >> n >> x;
    grid.resize(n);
    visited.resize(n);
    degree.resize(n);
    longestPath.resize(n);
    for(int i = 0; i < n-1; i++){
        int a, b;
        cin >> a >> b;
        grid[a-1].push_back(b-1);
        grid[b-1].push_back(a-1);
    }
    degree[0] = 0;
    dfs(0);
    int path_up = (degree[x-1] - 1) / 2;
    if(path_up == 0){
        cout << (longestPath[x-1] - 1 + degree[x-1])*2 << endl;
    }
    else{
        if(degree[x-1] % 2 == 0){
            cout << (longestPath[find_parent(x-1, path_up)] + 1 + path_up) * 2 << endl;
        }
        else{
            cout << (longestPath[find_parent(x-1, path_up)] + path_up) * 2 << endl;
        }
    }
}
