#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long

int ceil_div(int a, int b){
    return (a + b - 1) / b;
}

void solve() {
    int n;
    cin >> n;

    char l = 'a';

    for(int i = 0; i < n; i++){
        char x;
        cin >> x;

        if(x < l){
            cout << "YES" << endl;
            cout << i << ' ' << i+1 << endl;
            return;
        }
        l = x;
    }

    cout << "NO" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
