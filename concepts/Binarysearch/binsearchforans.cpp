#include <bits/stdc++.h>
using namespace std;
int w, h, n;
int good(int x)
{

    return (x / w) * (x / h) >= n;
}
void solve()
{
    cin >> w >> h >> n;
    int l = 0, r = 1000;
    while (r > l + 1)
    {
        int m = (l + r) / 2;
        if (good(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;
}
int main()
{
    solve();
    return 0;
}