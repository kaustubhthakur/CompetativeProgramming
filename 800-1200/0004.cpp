#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(a[i]);
    }
    if (st.size() <= 2)
    {
        cout << (n/2)+1 << endl;
    }
    else
    {
        cout << n << endl;
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