#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Monster{
    int health, index;
};

void solve(){
    int n, k, h;
    cin >> n >> k;
    vector<Monster> monsters;
    Monster m;
    for(int i = 0; i < n; i++){
        cin >> h;
        if(h % k == 0){
            m.health = k;
        }
        else{
            m.health = h % k;
        }
        m.index = i+1;
        monsters.push_back(m);
    }
    sort(monsters.begin(), monsters.end(), [](const Monster& a, const Monster& b) {
        if(a.health != b.health) return a.health > b.health;
        return a.index < b.index;
    });
    for(int i = 0; i < n; i++){
        cout << monsters[i].index << ' ';
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