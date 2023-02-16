#include "bits/stdc++.h"
using namespace std;
 
#define ll long long

#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()

void solve() {
    int n, c, ans = 0; cin >> n >> c;
    priority_queue<int> q;
    for(int i = 1, x; i <= n; ++i) {
        cin >> x;
        q.push(-x - i);
    }
    while(!q.empty()) {
        int x = -q.top(); q.pop();
        if(x > c) break;
        ++ans;
        c -= x;
    }
    cout << ans << "\n";
}   
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}