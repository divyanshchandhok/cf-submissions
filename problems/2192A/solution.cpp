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

    string s;
    cin >> s;
    char fc = s[0];
    char lc = s[n-1];
    char le = fc;
    int cl = 0;
    int ml = 0;
    s += ' ';
    int nm = 0;
    for(char c : s){
        if(c == le){
            cl++;
        }
        else{
            nm++;
            ml = max(ml, cl);
            cl = 1; 
        }
        le = c;
    }

    if(fc == lc){
        cout << nm << endl;
    }
    else{
        if(ml > 1){
            cout << nm + 1 << endl;
        }
        else{
            cout << nm << endl;
        }
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
