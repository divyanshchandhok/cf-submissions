#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Throw {
    int d;
    char c;
};

int n, m;
vector<Throw> throws;
set<int> ans;
bool done[1010][1010];

void rec(int x, int i){
    if(done[x][i]) return;
    done[x][i] = true;
    if(i == m){
        if(x == 0) x = n;
        ans.insert(x);
        return;
    }
    Throw t = throws[i];
    if(t.c == '0'){
        rec((x + t.d) % n, i+1);
    }
    else if(t.c == '1'){
        rec((n + x - t.d) % n, i+1);
    }
    else{
        rec((x + t.d) % n, i+1);
        rec((n + x - t.d) % n, i+1);
    }
}
void solve(){
    int x;
    throws.clear();
    ans.clear();
    memset(done, false, sizeof(done));
    cin >> n >> m >> x;

    int d;
    char c;
    for(int i = 0; i < m; i++){
        cin >> d >> c;
        throws.push_back({d, c});
    }
    
    rec(x, 0);
    cout << ans.size() << endl;
    for(int a : ans){
        cout << a << ' ';
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