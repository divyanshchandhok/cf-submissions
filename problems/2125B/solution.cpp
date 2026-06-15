#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b, k;
    cin >> a >> b >> k;

    if(k >= a && k >= b){
        cout << 1 << endl;
        return;
    }
    if((max(a, b) / __gcd(a, b)) <= k){
        cout << 1 << endl;
    }
    else{
        cout << 2 << endl;
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