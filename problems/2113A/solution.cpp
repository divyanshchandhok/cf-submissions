#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int k, a, b, x, y, f = 0, s = 0;
    cin >> k >> a >> b >> x >> y;

    if(x > y){
        swap(x, y);
        swap(a, b);
    }

    if(k >= a){
        f = ((k - a) / x) + 1;
    }
    k -= f*x;

    if(k >= b){
        s = ((k - b) / y) + 1;
    }
    

    cout << s+f << endl;

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