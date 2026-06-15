#include <bits/stdc++.h>
using namespace std;
#define int long long

struct Segment {
    int a, b, index;
};


void solve(){

    int n;
    cin >> n;
    vector<Segment> segments(n);
    for (int i = 0; i < n; ++i) {
        cin >> segments[i].a >> segments[i].b;
        segments[i].index = i + 1;
    }

    sort(segments.begin(), segments.end(), [](const Segment& s1, const Segment& s2) {
        if (s1.a != s2.a) return s1.a < s2.a;
        return s1.b > s2.b;
    });

    vector<Segment> filtered;
    int max_b = -1;
    for (auto& seg : segments) {
        if (seg.b > max_b) {
            filtered.push_back(seg);
            max_b = seg.b;
        }
    }

    cout << filtered.size() << endl;
    for (auto& seg : filtered) {
        cout << seg.index << ' ';
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