#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i = 0; i < n; i++){
        cin >> a[i+1];
    }
    int ans = 0;
    int last;
    if(n % 2 == 0){
        a.push_back(0);
        last = n;
    }
    else{
        last = n-1;
    }
    for(int i = 2; i <= last; i+=2){
        int s = a[i-1] + a[i+1];
        if(s > a[i]){
            ans += s - a[i];
            a[i+1] = max(0LL, a[i+1] - (s - a[i]));
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