#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s1, s2;
    cin >> s1 >> s2;
    int cnt = 0;
    for(int i = 0; i < min(s1.length(), s2.length()); i++){
        if(s1[i] == s2[i]){
            cnt++;
        }
        else{
            break;
        }
    }
    if(cnt == 0) cnt = 1;
    cout << s1.length() + s2.length() - cnt + 1 << endl;
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