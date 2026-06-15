#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    set<int> a;
    int x;
    // for(int i = 0; i < n; i++){
    //     cin >> x;
    //     a.insert(abs(x - i - 1));
    // }
    // int ans = gcd(0, *a.begin());
    
    // for(auto it = ++a.begin(); it != a.end(); it++){
    //     ans = gcd(ans, *it);
    // }
    // cout << ans << endl;
    int ans = 0;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans = gcd(ans, abs(x - i - 1));
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