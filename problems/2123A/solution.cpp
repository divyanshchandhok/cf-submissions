#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    if(n % 4 == 0){
        cout << "Bob" << endl;
    }
    else{
        cout << "Alice" << endl;
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