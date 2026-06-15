#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<vector<int>> children;
int respect[100000];
vector<int> ans;
void dfs(int v) {
    int valid = respect[v];
    for (int child : children[v]) {
        valid &= respect[child];
        dfs(child);
        }
    if (valid) {
        ans.push_back(v + 1);
    }
    
}

void solve(){
    int n, root;
    cin >> n;
    children.resize(n);
    for(int i = 0; i < n; i++){
        int p, c;
        cin >> p >> c;
        if(p != -1){
            children[p - 1].push_back(i);
        }
        else{
            root = i;
        }
        respect[i] = c;
    }

    dfs(root);
    if(ans.size() == 0){
        cout << -1 << endl;
        return;
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
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