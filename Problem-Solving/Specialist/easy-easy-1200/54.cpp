#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,k;
    cin>>n>>k;
    vector<long long>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end(),greater<long long> ());

    long long sum =0;
    for(int i=0;i<k;i++)
    {
        sum+=a[i];
    }
    cout<<sum<<endl;
    
}
int main()
{
    int t;
    while(t--)
    {
        solve();
    }
    return 0;
}