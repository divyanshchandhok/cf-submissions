#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(n % 2 != 0){
        cout << -1 << endl;
    }
    else if(n == 2){
        cout << -1 << endl;
    }
    else if(n == 4){
        cout << 1 << ' ' << 1 << endl;
    }
    else if(n % 6 == 0){
    cout << n / 6 << " " << n / 4 << endl;
    }
    else{
    cout << (n/6) + 1 << " " << n / 4 << endl;    
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}