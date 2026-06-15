#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, a, b;
    cin >> n >> a >> b;

    if(b >= a){
        if(b % 2 == n % 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        if(b % 2 == n % 2 && a % 2 == n % 2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

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