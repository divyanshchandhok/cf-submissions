#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(k % 2 != 0){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                a[i] += k;
            }
            cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    else{
        for(int i = 0; i < n; i++){
            cout << a[i] + (a[i] % (k+1))*k << " ";
        }
        cout << endl;
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