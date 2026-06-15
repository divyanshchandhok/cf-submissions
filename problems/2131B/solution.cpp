#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string ans;
    if(n % 2 == 0){
        int t = (n/2) - 1;
        for(int i = 0; i < t; i++){
            cout << "-1 3 ";
        }
        cout << "-1 2" << endl;
    }
    else{
        int t = n/2;
        for(int i = 0; i < t; i++){
            cout << "-1 3 ";
        }
        cout << -1 << endl;
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