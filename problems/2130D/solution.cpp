#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, ans = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        int l = 0, r = 0;
        for(int j = 0; j < i; j++){
            if(a[j] > a[i]){
                l++;
            }
        }
        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                r++;
            }
        }
        ans += min(l, r);
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