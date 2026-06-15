#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    if(n % 2 == 0){
        cout << 2 << endl << 1 << " " << n << endl << 1 << " " << n << endl;
    }
    else{
        cout << 4 << endl << 1 << " " << n - 1 << endl << 1 << " " << n - 1 << endl << n - 1 << " " << n << endl << n - 1 << " " << n << endl;
    }
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}