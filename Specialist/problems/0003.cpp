#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void solve() {
    ll a, b;
    cin >> a >> b;
    ll n = 2 * (a - b);
    cout << n << '\n';
    vector<ll> arr(n);
    int ptr = 0;
    for (ll c = b; c <= a; ++c) {
        arr[ptr++] = c;
    }
    for (ll c = a - 1; c > b; --c) {
        arr[ptr++] = c;
    }
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " \n"[i == n - 1];
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}