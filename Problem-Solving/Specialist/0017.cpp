#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, x, s, q;
        cin >> n >> x >> s >> q;
        vector <int> a(n);
        a[0] = x * s;
        q -= x * s;
        if (q < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(x - 1, q);
                a[i] += now;
                q -= now;
            }
            if (q > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
}
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }


    return 0;
}