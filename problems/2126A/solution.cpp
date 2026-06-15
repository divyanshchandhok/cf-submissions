#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string x;
    char m = '9';
    cin >> x;
    for(char c : x){
        if(c < m){
            m = c;
        }
    }
    cout << m << endl;
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