#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    unordered_map<char, int> curr;
    for(char c : s){
        freq[c]++;
    }
    int score = freq.size();
    int m = score;
    for(char c : s){
        curr[c]++;
        if(freq[c] != 1 && curr[c] == 1){
            score++;
        }
        if(freq[c] != 1 && curr[c] == freq[c]){
            score--;
        }
        m = max(m, score);
    }
    cout << m << endl;
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