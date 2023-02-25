#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;
    cin>>n>>m;
long long  suma = n*(n+1)/2;
long long sumb = (m-1)*m/2;
cout<<sumb+m*suma<<endl;
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