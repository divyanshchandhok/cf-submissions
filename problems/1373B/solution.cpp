#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int o = 0, z = 0;
    for(char c : s){
        if(c == '0') z++;
        else o++;
    }

    if(min(z, o) % 2 != 0){
        cout << "DA" << endl;
    }
    else{
        cout << "NET" << endl;
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