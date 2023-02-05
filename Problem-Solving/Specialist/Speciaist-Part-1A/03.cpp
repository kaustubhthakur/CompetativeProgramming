#include <bits/stdc++.h>
using namespace std;




void solve()
{

    int n;
    cin>>n;

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return;
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