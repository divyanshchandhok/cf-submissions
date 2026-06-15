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
    // if(b == 0) return 0;
    return (a + b - 1) / b;
}

bool is_int(float a){
    return floor(a) == a;
}

bool check(int mid, int rb, int rs, int rc, int ib, int is, int ic, int pb, int ps, int pc, int money){

    int nb = max(0ll, (mid*rb) - ib);
    int ns = max(0ll, (mid*rs) - is);
    int nc = max(0ll, (mid*rc) - ic);

    money -= (nb * pb);
    money -= (ns * ps);
    money -= (nc * pc);

    if(money >= 0){
        return true;
    }
    return false;
}

void solve() {
    int rb = 0, rs = 0, rc = 0;
    string s;
    cin >> s;

    for(char c : s){
        if(c == 'B'){
            rb++;
        }
        else if(c == 'S'){
            rs++;
        }
        else{
            rc++;
        }
    }

    int ib, is, ic;
    cin >> ib >> is >> ic;

    int pb, ps, pc;
    cin >> pb >> ps >> pc;

    int money;
    cin >> money;

    int cost = (rb*pb) + (rs*ps) + (rc*pc);
    // if(rb == 0) ib = 0;
    // if(rs == 0) is = 0;
    // if(rc == 0) ic = 0;

    int lo = 0;
    int hi = (money/cost) + max({ceil_div(ib, rb), ceil_div(is, rs), ceil_div(ic, rc)});
    int ans = 0;

    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        debug(lo, hi, mid);
        if(check(mid, rb, rs, rc, ib, is, ic, pb, ps, pc, money)){
            ans = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cout << ans << endl;


}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    // int t;
    // cin >> t;
    
    // while (t--) 
    solve();
}
