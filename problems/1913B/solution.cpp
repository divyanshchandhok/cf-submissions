#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

void solve() {
    string s;
    cin >> s;
    int o = 0, z = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1'){
            o++;
        }
        else{
            z++;
        }
    }

    int co = 0, cz = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '1') cz++;
        else co++;

        if((co > o) || (cz > z)){
            cout << s.size() - i << endl;
            return;
        }
    }
    cout << 0 << endl;

}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
