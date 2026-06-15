#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, n, val, ans;
    cin >> a >> b >> n;
    ans = b;
    for(int i = 0; i < n; i++){
        cin >> val;
        if(val <= a-1){
            ans += val;
        }
        else{
            ans += a-1;
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