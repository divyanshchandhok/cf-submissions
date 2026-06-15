#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, q, val, t, i, x, e, xm, xi = -1LL, s = 0LL;
    cin >> n >> q;
    int a[n+1];
    int b[n+1];
    memset(b, 0LL, sizeof(b));
    for(int i = 0LL; i < n; i++){
        cin >> e;
        a[i] = e;
        s += e;
    }
    for(int k = 1; k <= q; k++){
        cin >> t;
        if(t == 1){
            cin >> i >> x;
            i--;
            if(b[i] < xi){
                s += (-xm + x);
            }
            else{
                s += (-a[i] + x);
            }
            a[i] = x;
            b[i] = k;
        }
        else{
            cin >> x;
            xm = x;
            s = n*x;
            xi = k;
        }

        cout << s << endl;
    }
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}