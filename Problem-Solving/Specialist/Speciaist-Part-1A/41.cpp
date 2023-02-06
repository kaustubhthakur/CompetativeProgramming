#include <bits/stdc++.h>

using namespace std;
void solve()
{

long long n,k;
cin>>n>>k;
vector<long long> a(n);
for(int i =1;i<=n;i++) cin>>a[i];
long long ans=0;
for(int i=1;i<=n;++i)
{
ans = a[i]&k;
ans = a[i]|k;

}
cout<<ans<<endl;

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