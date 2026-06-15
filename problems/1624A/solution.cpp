#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n];
    int ma = 0, mi = pow(10, 9);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        ma = max(a[i], ma);
        mi = min(mi, a[i]);
    }
    cout << ma - mi << endl;
    // cout << *max_element(a, a+n) - *min_element(a, a+n) << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}