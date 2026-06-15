#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(k > 1){
        cout << "YES" << endl;
        return;
    }
    if(a[j-1] == *max_element(a.begin(), a.end())){
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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