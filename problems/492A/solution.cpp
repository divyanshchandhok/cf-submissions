#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int i = 0;
    while(n >= 0){
        n -= i*(i+1)/2;
        i++;
    }
    i-=2;
    cout << i << endl;

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