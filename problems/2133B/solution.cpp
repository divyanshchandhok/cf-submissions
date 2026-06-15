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
    if(n % 2 != 0){
        arr.push_back(0);
        n++;
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i = 0; i < n; i += 2){
        ans += max(arr[i], arr[i+1]);
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