#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int k, sum = 0, zeroes = 0;
    for(int i = 0; i < n; i++){
        cin >> k;
        sum += k;
        if(k == 0){
            zeroes += 1;
        }
    }
    cout << sum + zeroes << endl;
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