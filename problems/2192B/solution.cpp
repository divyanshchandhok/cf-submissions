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
    int z = 0, o = 0;
    vector<int> za, oa;
    for(int i = 0; i < n; i++){
        char c;
        cin >> c;

        if(c == '0'){
            z++;
            za.push_back(i+1);
        }
        else{
            o++;
            oa.push_back(i+1);
        }
    }

    if(za.size() == n){
        cout << 0 << endl;
        return;
    }

    if(z % 2 != 0){
        cout << za.size() << endl;
        for(int i : za){
            cout << i << " ";
        }
        cout << endl;
    }
    else if(o % 2 == 0){
        cout << oa.size() << endl;
        for(int i : oa){
            cout << i << " ";
        }
        cout << endl;
    }
    else{
        cout << -1 << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) 
    solve();
}
