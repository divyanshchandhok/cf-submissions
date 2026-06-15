#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a, b;
    cin >> a >> b;
    int d = abs(a-b);
    cout << d << " ";
    if(a == b){
        cout << 0 << endl;
    }
    else{
        cout << min({a % d, b % d, d - (a%d), d - (b%d)}) << endl;
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}