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

bool check(int a){
    int b = a;
    while(b > 0){
        int d = b % 10;
        b /= 10;
        if(d != 0 && a % d != 0){
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    while(true){
        if(check(n)){
            cout << n << endl;
            return;
        }
        n++;
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
