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
    bool next_greater = true;

    int l = 0;
    int r = n - 2;
    int ce = a[n-1];
    cout << 'R';
    for(int i = 0; i < n-1; i++){
        int le = a[l];
        int re = a[r];
        
        if(next_greater){
            if(le > ce){
                ce = le;
                l++;
                cout << 'L';
            }
            else if(re > ce){
                ce = re;
                r--;
                cout << 'R';
            }
            else{
                if(le < re){
                    ce = le;
                    l++;
                    cout << 'L';
                }
                else{
                    ce = re;
                    r--;
                    cout << 'R';
                }
                continue;
            }
            next_greater = false;
        }

        else{
            if(le < ce){
                ce = le;
                l++;
                cout << 'L';
            }
            else if(re < ce){
                ce = re;
                r--;
                cout << 'R';
            }
            else{
                if(le > re){
                    ce = le;
                    l++;
                    cout << 'L';
                }
                else{
                    ce = re;
                    r--;
                    cout << 'R';
                }
                continue;
            }
            next_greater = true;
        }

    }
    cout << endl;
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