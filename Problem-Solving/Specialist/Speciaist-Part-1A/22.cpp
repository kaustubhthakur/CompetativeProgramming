#include <bits/stdc++.h>
using namespace std;
long long binPow(long long a, long long n)
{
    if (n == 0)
        return 1;

    long long res = binPow(a, n / 2);
    if (n % 2)
    {
        return res * res * a;
    }
    else
    {
        return res * res;
    }
}
void solve()
{
    int n;
    cin >> n;
    int power = binPow(2, n);
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long prod = 0;
    for (int i = 1; i <= n; i++)
    {
        prod *= (a[i] * i);
    }
    for (int i = 1; i <= n; i++)
    {
        if (prod % power == 0 && prod / power == 0)
        {
            cout << 0 << endl;
            return;
        }
        else if (prod % power != 0)
        {
            cout << "-1" << endl;
            return;
        }
        else if (prod % power == 0 && prod / power != 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            cout << 2 << endl;
            return;
        }
    }
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