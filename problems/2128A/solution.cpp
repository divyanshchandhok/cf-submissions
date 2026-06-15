#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    double c;
    cin >> n >> c;
    int a[n];
    int l = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    for(int i = n-1; i >= 0; i--){
        if((c / pow(2, i)) >= a[l]){
            l++;
        }
    }
    cout << n-l << endl;
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