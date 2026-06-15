#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s, ans;
    cin >> s;
    int n=0, t=0, f=0;
    char c;

    for(int i = 0; i < s.length(); i++){
        c = s[i];
        if(c == 'N'){
            n++;
        }
        else if(c == 'T'){
            t++;
        }
        else if(c == 'F'){
            f++;
        }
        else{
            cout << c;
        }
    }
    for(int i = 0; i < t; i++){
        cout << 'T';
    }
    for(int i = 0; i < f; i++){
        cout << 'F';
    }
    for(int i = 0; i < n; i++){
        cout << 'N';
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