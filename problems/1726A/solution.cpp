#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans = max(arr[0] - arr[n-1], arr[n-1] - arr[0]);
    for(int i = 1; i < n-1; i++){
        ans = max({ans, arr[i] - arr[0], arr[n-1] - arr[i], abs(arr[i+1] - arr[i])});
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