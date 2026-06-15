#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    set<int> x, y;
    int xi, yi;
    for(int i = 0; i < 4; i++){
        cin >> xi >> yi;
        x.insert(xi);
        y.insert(yi);
    }
    cout << (*next(y.begin()) - *y.begin())*(*next(x.begin()) - *x.begin()) << endl;
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