#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    int t1 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] > b[i]){
            t1 += (a[i] - b[i]);
        }
    }
    
    cout << t1 + 1 << endl;
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