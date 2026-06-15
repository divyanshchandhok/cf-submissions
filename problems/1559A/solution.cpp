#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int x;
    int ans = pow(2, 30) - 1;
    for(int i = 0; i < n; i++){
        cin >> x;
        ans &= x;
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