#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n];
    int ans = 0;
    unordered_map<int, int> map;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        ans += map[a[i] - i];
        map[a[i] - i] += 1;
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