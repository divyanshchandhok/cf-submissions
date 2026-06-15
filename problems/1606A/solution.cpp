#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    char cur = s[0];
    int c = 0;
    for(int i = 1; i < s.size(); i++){
        if(s[i] != cur){
            c++;
            cur = s[i];
        }
    }

    if(c % 2 == 0){
        cout << s << endl;
    }
    else{
        if(s[0] == 'a'){
            cout << 'b';
        }
        else{
            cout << 'a';
        }
        cout << s.substr(1) << endl;
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