#include <bits/stdc++.h>
using namespace std;
#define int long long

int cost_calc(int x){
    return pow(3, x+1) + x*pow(3, x-1);
}

void solve(){
    int n;
    cin >> n;
    int p = ceil(log2(n) / log2(3));
    int ans = 0;
    while(true){
        if(n == 0){
            break;
        }
        int x = pow(3, p);

        if(x > n){
            p--;
        }
        else{
            ans += cost_calc(p);
            n -= x;
        }
    }
    cout << ans << endl;
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