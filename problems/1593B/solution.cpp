#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string n;
    cin >> n;
    reverse(n.begin(), n.end());
    bool flag = false;
    int j = 0;
    for(int i = 0; i < n.size(); i++){
        char c = n[i];
        if(!flag){
            if(c == '5'){
                flag = true;
            }
            else{
                j++;
            }
            continue;
        }
        if(c == '2' || c == '7'){
            break;
        }
        else{
            j++;
        }
        if(i == n.size() - 1){
            j = LLONG_MAX;
        }
    }

    flag = false;
    int k = 0;
    for(int i = 0; i < n.size(); i++){
        char c = n[i];
        if(!flag){
            if(c == '0'){
                flag = true;
            }
            else{
                k++;
            }
            continue;
        }
        if(c == '0' || c == '5'){
            break;
        }
        else{
            k++;
        }
        if(i == n.size() - 1){
            k = LLONG_MAX;
        }
    }

    cout << min(j, k) << endl;

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