#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < k; i++){
        cout << 1;
    }
    for(int i = 0; i < (n-k); i++){
        cout << 0;
    }
    cout << endl;
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