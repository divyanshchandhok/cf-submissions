#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cur = 0, ans = 0;
    for(int i = 0; i <= n; i++){
        if(cur == k){
            ans += 1;
            cur = 0;
            continue;
        }
        if(a[i] == 0){
            cur++;
        }
        else{
            cur = 0;
        }
    }
    cout << ans << endl;

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