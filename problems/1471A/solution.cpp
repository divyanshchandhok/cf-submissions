#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, x;
    cin >> n >> x;
    int p, sum = 0, ans = 0;
    
    for(int i = 0; i < n; i++){
        cin >> p;
        sum += p;
        ans += (p + x - 1) / x;
    }

    cout << (sum + x - 1) / x << " " << ans << endl;

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