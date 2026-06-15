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
    int n;
    cin >> n;
    vector<int> h;
    int maxh = INT64_MIN;
    int minh = INT64_MAX;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        maxh = max(x, maxh);
        minh = min(x, minh);
    }

    cout << maxh - minh + 1 << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
