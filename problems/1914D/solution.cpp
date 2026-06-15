#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll long long
#define vi vector<int>
#define vvi vector<vi>
#define vinp(a)                        \
    for (int i = 0; i < a.size(); i++) \
    cin >> a[i]
#define vout(a)                        \
    for (int i = 0; i < a.size(); i++) \
    cout << a[i] << " "
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define sv(a) sort(a.begin(), a.end())
#define mod 1000000007
 
void solve()
{
    int n;
    cin >> n;
    vi a(n), b(n), c(n);
    vinp(a);
    vinp(b);
    vinp(c);
    int cache[10000];
    memset(cache, -1, sizeof(cache));

    vi z;
    vi nn;
    
}

int rec(int day, vi available){

}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int test = 1;
    cin >> test;
    while (test--)
    {
        solve();
    }
    return 0;
}
