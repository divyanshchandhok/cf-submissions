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

bool is_int(float a){
    return floor(a) == a;
}

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(k);
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;
        if(c == '1') a[(i+1) % k]++;
    }
    for(int i : a){
        if(i % 2 != 0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
