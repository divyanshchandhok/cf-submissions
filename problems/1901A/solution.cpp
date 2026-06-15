#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
#include "template.cpp"
#else
#define debug(...)
#define debugArr(...)
#endif
#define int long long


void solve(){
    int n, x;
    cin >> n >> x;
    
    vector<int> gs;
    gs.push_back(0);
    for(int i = 0; i < n; i++){
        int j;
        cin >> j;
        gs.push_back(j);
    }
    
    // int m = 0;
    
    // for(int i = 1; i < n+1; i++){
    //     m = max(m, gs[i] - gs[i-1]);
    // }
    // m = max(m, 2*(x - gs[n]));
    debug(x, gs);
    vector<int> diffs;
    for(int i = 1; i < n+1; i++){
        diffs.push_back(gs[i] - gs[i-1]);
    }
    debug(diffs);
    diffs.push_back(2*(x-gs[n]));
    debug(diffs);
    // sort(diffs.begin(), diffs.end());
    int m = *max_element(diffs.begin(), diffs.end());
    cout << m << endl;
    
    
    
}


signed main() {
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++){
        solve();
	}
}