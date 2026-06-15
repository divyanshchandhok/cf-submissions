#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n, m, td = 0;
    string x;
    cin >> n >> m;
    vector<int> z;
    for(int i = 0; i < n; i++){
        cin >> x;
        td += x.length();
        int clz = 0;
        for(int i = x.length() - 1; i >= 0; i--){
            if(x[i] == '0'){
                clz += 1;
            }
            else{
                if(clz != 0){
                    z.push_back(clz);
                }
                break;
            }
        }
    }
    sort(z.begin(), z.end(), greater<int>());
    for(int i = 0; i < z.size(); i++){
        if(i % 2 == 0){
            td -= z[i];
        }
    }

    if(td >= m+1){
        cout << "Sasha" << endl;
    }
    else{
        cout << "Anna" << endl;
    }
}

signed main(){
    cin.tie(0);
    ios::sync_with_stdio(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}