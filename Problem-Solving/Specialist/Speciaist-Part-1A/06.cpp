#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            cout<<"YES"<<endl;
            return ;
        }
        
    }
    cout<<"NO"<<endl;
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