#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int x;
    int m = LLONG_MAX;
    for(int i = 0; i < n; i++){
        cin >> x;
        a[i] = x;
        m = min(x, m);
    }
    int g = 0;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == m){
            cnt++;
        }
        else if(a[i] % m == 0){
            g = gcd(g, a[i]);
        }
    }

    if(cnt > 1){
        cout << "Yes" << endl;
        return;
    }
    if(g == m){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

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