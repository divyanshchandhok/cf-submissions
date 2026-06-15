#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    vector<pair<int, int>> ans(n);
    if(a[n - 1] != b[n - 1]){
        cout << "NO" << endl;
        return;
    }
    ans[n - 1] = {a[n - 1], b[n - 1]};

    for(int i = n - 2; i >= 0; i--){
        if(a[i] == b[i]){
            ans[i] = {a[i], b[i]};
        }
        else{
            if(((a[i] ^ ans[i+1].first) == b[i]) || ((a[i] ^ ans[i+1].second) == b[i])){
                ans[i] = {a[i], b[i]};
            }
            else{
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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