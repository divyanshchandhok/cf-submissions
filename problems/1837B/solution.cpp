#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 1, mc = 1;
    char lc = 'a';
    for(char c : s){
        if(c != lc){
            lc = c;
            cnt = 1;
        }
        else{
            cnt++;
            mc = max(mc, cnt);
        }
    }

    cout << mc + 1 << endl;
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