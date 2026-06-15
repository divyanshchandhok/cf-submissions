#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int li = 0, ri = n-1, cmn = 1, cmx = n, le, re;
    
    while(li < ri){
        le = a[li];
        re = a[ri];

        if(le == cmn || le == cmx){
            if(le == cmn){
                cmn++;
            }
            else{
                cmx--;
            }
            li++;
            continue;
        }

        if(re == cmn || re == cmx){
            if(re == cmn){
                cmn++;
            }
            else{
                cmx--;
            }
            ri--;
            continue;
        }

        cout << li+1 << ' ' << ri+1 << endl;
        return;
    }

    cout << -1 << endl;
}

signed main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}