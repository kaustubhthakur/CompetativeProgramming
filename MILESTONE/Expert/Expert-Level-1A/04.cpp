#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    if(sum>k)
    {
        cout<<sum-k<<endl;
    }
    else 
    {
        cout<<0<<endl;
    }
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