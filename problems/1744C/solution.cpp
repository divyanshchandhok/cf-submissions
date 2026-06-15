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
    int n;
    char cur;
    cin >> n >> cur;
    string lights;
    cin >> lights;
    vector<int> greens;
    for(int i = 0; i < n; i++){
        char c = lights[i];
        if(c == 'g'){
            greens.push_back(i);
        }
    }
    if(cur == 'g'){
        cout << 0 << endl;
        return;
    }

    int gp = 0;
    int cmax = -1;
    for(int i = 0; i < n; i++){
        char c = lights[i];
        if(c == cur){
            if(i > greens[greens.size() - 1]){
                cmax = max(cmax, (n - i + greens[0]));
                continue;
            }
            while(i > greens[gp]){
                gp++;
            }
            cmax = max(cmax, greens[gp] - i);
        }

    }

    cout << cmax << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
