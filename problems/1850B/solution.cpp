#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int m = 0;
    int ans;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if(a <= 10){
            m = max(m, b);
            if(b == m){
                ans = i+1;
            }
        }
    }
    cout << ans << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}