#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    long double l = b * log(a);
    long double r = d * log(c);
    if(l > r){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
}