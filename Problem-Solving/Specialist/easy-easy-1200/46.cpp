#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];

    sort(a.begin(),a.end());
    int ans = a[0];
    for(int i=0;i<n;i++)
    {
if(ans ==1 && n>1 && k>1)
{
    cout<<"YES"<<endl;
    return ;
}
    }
    cout<<"No"<<endl;

    
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}