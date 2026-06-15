#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;

    if(n % 2 != 0){
        cout << 1 << endl;
    }
    else{
        for(int i = 2; i <= n; i++){
            if(n % i != 0){
                cout << i-1 << endl;
                return;
            }
        }
        cout << n << endl;
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