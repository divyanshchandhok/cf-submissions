#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    char fc = s[0], lc = s[n-1];
    unordered_map<char, int> freq;
    for(int i = 1; i < n-1; i++){
        char c = s[i];
        freq[c] += 1;
        if(freq[c] > 1 || c == fc || c == lc){
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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