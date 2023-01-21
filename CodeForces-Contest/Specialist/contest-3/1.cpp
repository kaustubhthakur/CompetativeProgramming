#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
        cin >> a[i];

    long long sol = 0;
    for (int i = 0; i < n - 1; ++i)

    {
        if ((a[i] % 2 == 0 && a[i + 1] % 2 == 0) || (a[i] % 2 == 1 && a[i + 1] % 2 == 1))
        {
            sol++;
        }
    }
    cout << sol << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}