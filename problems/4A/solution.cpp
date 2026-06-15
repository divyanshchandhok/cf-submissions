#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int w;
    cin >> w;

    if(w % 2 == 0 && w != 2){
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