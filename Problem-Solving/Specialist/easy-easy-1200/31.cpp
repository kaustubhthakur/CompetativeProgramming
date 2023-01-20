#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n);
    int maxi = INT_MIN;
    for(int i=0;i<n;i++) 
    {
    cin>>a[i];
    }

  

for(int i=0;i<n;i++)
{
    if(a[0]==1)
    {
        cout<<"Yes"<<endl;
        return ;
    }
    else 
    {
        cout<<"No"<<endl;
        return ;
    }
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