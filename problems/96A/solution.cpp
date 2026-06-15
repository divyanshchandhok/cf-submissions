#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    char curc = s[0];
    int count = 0;
    for(char c : s){
        if(c == curc){
            count += 1;
        }
        else{
            curc = c;
            count = 1;
        }
        if(count >= 7){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    // int t;
    // cin >> t;
    // while(t--){
        solve();
    // }
}