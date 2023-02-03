#include <bits/stdc++.h>
using namespace std;
void solve()
{
int n,m;
cin>>n>>m;
vector<long long> a(n+m);
for(int i=0;i<n+m;i++) cin>>a[i];
sort(a.begin(),a.end()-1);
reverse(a.begin(),a.end());

long long sum=0;


for(int i=0;i<n;++i)
{
    sum+=a[i];
}
cout<<sum<<endl;
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